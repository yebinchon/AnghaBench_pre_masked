
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int pairingheap_node ;
struct TYPE_7__ {TYPE_1__* distances; } ;
struct TYPE_6__ {int numberOfOrderBys; } ;
struct TYPE_5__ {int value; scalar_t__ isnull; } ;
typedef TYPE_2__* IndexScanDesc ;
typedef TYPE_3__ GISTSearchItem ;


 scalar_t__ FUNC_0 (TYPE_3__ const) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int
FUNC_2(const pairingheap_node *VAR_0, const pairingheap_node *VAR_1, void *VAR_2)
{
 const GISTSearchItem *VAR_3 = (const GISTSearchItem *) VAR_0;
 const GISTSearchItem *VAR_4 = (const GISTSearchItem *) VAR_1;
 IndexScanDesc VAR_5 = (IndexScanDesc) VAR_2;
 int VAR_6;


 for (VAR_6 = 0; VAR_6 < VAR_5->numberOfOrderBys; VAR_6++)
 {
  if (VAR_3->distances[VAR_6].isnull)
  {
   if (!VAR_4->distances[VAR_6].isnull)
    return -1;
  }
  else if (VAR_4->distances[VAR_6].isnull)
  {
   return 1;
  }
  else
  {
   int VAR_7 = -FUNC_1(VAR_3->distances[VAR_6].value,
               VAR_4->distances[VAR_6].value);

   if (VAR_7 != 0)
    return VAR_7;
  }
 }


 if (FUNC_0(*VAR_3) && !FUNC_0(*VAR_4))
  return 1;
 if (!FUNC_0(*VAR_3) && FUNC_0(*VAR_4))
  return -1;

 return 0;
}
