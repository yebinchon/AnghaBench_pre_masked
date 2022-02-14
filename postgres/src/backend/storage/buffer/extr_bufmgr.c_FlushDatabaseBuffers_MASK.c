
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_12__ {scalar_t__ dbNode; } ;
struct TYPE_11__ {TYPE_2__ rnode; } ;
struct TYPE_13__ {TYPE_1__ tag; } ;
typedef scalar_t__ Oid ;
typedef TYPE_3__ BufferDesc ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*) ;
 int VAR_2 ;
 int FUNC_1 (TYPE_3__*,int *) ;
 TYPE_3__* FUNC_2 (int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int VAR_3 ;
 int FUNC_5 (TYPE_3__*) ;
 int VAR_4 ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 () ;
 int FUNC_8 (int ) ;
 int FUNC_9 (TYPE_3__*,int) ;
 int FUNC_10 (TYPE_3__*,int) ;

void
FUNC_11(Oid VAR_5)
{
 int VAR_6;
 BufferDesc *VAR_7;


 FUNC_8(VAR_2);

 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++)
 {
  uint32 VAR_8;

  VAR_7 = FUNC_2(VAR_6);





  if (VAR_7->tag.rnode.dbNode != VAR_5)
   continue;

  FUNC_7();

  VAR_8 = FUNC_5(VAR_7);
  if (VAR_7->tag.rnode.dbNode == VAR_5 &&
   (VAR_8 & (VAR_1 | VAR_0)) == (VAR_1 | VAR_0))
  {
   FUNC_6(VAR_7);
   FUNC_3(FUNC_0(VAR_7), VAR_3);
   FUNC_1(VAR_7, ((void*)0));
   FUNC_4(FUNC_0(VAR_7));
   FUNC_10(VAR_7, 1);
  }
  else
   FUNC_9(VAR_7, VAR_8);
 }
}
