
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int pairingheap_node ;
struct TYPE_4__ {int numberOfNonNullOrderBys; } ;
struct TYPE_3__ {scalar_t__* distances; scalar_t__ isLeaf; scalar_t__ isNull; } ;
typedef TYPE_1__ SpGistSearchItem ;
typedef TYPE_2__* SpGistScanOpaque ;


 scalar_t__ FUNC_0 (scalar_t__) ;

__attribute__((used)) static int
FUNC_1(const pairingheap_node *VAR_0,
         const pairingheap_node *VAR_1, void *VAR_2)
{
 const SpGistSearchItem *VAR_3 = (const SpGistSearchItem *) VAR_0;
 const SpGistSearchItem *VAR_4 = (const SpGistSearchItem *) VAR_1;
 SpGistScanOpaque VAR_5 = (SpGistScanOpaque) VAR_2;
 int VAR_6;

 if (VAR_3->isNull)
 {
  if (!VAR_4->isNull)
   return -1;
 }
 else if (VAR_4->isNull)
 {
  return 1;
 }
 else
 {

  for (VAR_6 = 0; VAR_6 < VAR_5->numberOfNonNullOrderBys; VAR_6++)
  {
   if (FUNC_0(VAR_3->distances[VAR_6]) && FUNC_0(VAR_4->distances[VAR_6]))
    continue;
   if (FUNC_0(VAR_3->distances[VAR_6]))
    return -1;
   if (FUNC_0(VAR_4->distances[VAR_6]))
    return 1;
   if (VAR_3->distances[VAR_6] != VAR_4->distances[VAR_6])
    return (VAR_3->distances[VAR_6] < VAR_4->distances[VAR_6]) ? 1 : -1;
  }
 }


 if (VAR_3->isLeaf && !VAR_4->isLeaf)
  return 1;
 if (!VAR_3->isLeaf && VAR_4->isLeaf)
  return -1;

 return 0;
}
