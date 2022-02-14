
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_8__ {scalar_t__ dbNode; } ;
struct TYPE_9__ {TYPE_1__ rnode; } ;
struct TYPE_10__ {TYPE_2__ tag; } ;
typedef scalar_t__ Oid ;
typedef TYPE_3__ BufferDesc ;


 TYPE_3__* FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int VAR_0 ;
 int FUNC_3 (TYPE_3__*,int ) ;

void
FUNC_4(Oid VAR_1)
{
 int VAR_2;






 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
 {
  BufferDesc *VAR_3 = FUNC_0(VAR_2);
  uint32 VAR_4;





  if (VAR_3->tag.rnode.dbNode != VAR_1)
   continue;

  VAR_4 = FUNC_2(VAR_3);
  if (VAR_3->tag.rnode.dbNode == VAR_1)
   FUNC_1(VAR_3);
  else
   FUNC_3(VAR_3, VAR_4);
 }
}
