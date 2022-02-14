
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int bounds_valid; int buf; } ;
struct TYPE_7__ {int btpo_next; } ;
typedef int Relation ;
typedef int Page ;
typedef int Buffer ;
typedef int BlockNumber ;
typedef int BTStack ;
typedef TYPE_1__* BTPageOpaque ;
typedef TYPE_2__* BTInsertState ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int ,int ,int ,int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,char*,int ) ;

__attribute__((used)) static void
FUNC_10(Relation VAR_3, BTInsertState VAR_4, BTStack VAR_5)
{
 Page VAR_6;
 BTPageOpaque VAR_7;
 Buffer VAR_8;
 BlockNumber VAR_9;

 VAR_6 = FUNC_0(VAR_4->buf);
 VAR_7 = (BTPageOpaque) FUNC_4(VAR_6);

 VAR_8 = VAR_2;
 VAR_9 = VAR_7->btpo_next;
 for (;;)
 {
  VAR_8 = FUNC_7(VAR_3, VAR_8, VAR_9, VAR_0);
  VAR_6 = FUNC_0(VAR_8);
  VAR_7 = (BTPageOpaque) FUNC_4(VAR_6);







  if (FUNC_2(VAR_7))
  {
   FUNC_6(VAR_3, VAR_8, VAR_5);
   VAR_8 = VAR_2;
   continue;
  }

  if (!FUNC_1(VAR_7))
   break;
  if (FUNC_3(VAR_7))
   FUNC_9(VAR_1, "fell off the end of index \"%s\"",
     FUNC_5(VAR_3));

  VAR_9 = VAR_7->btpo_next;
 }

 FUNC_8(VAR_3, VAR_4->buf);
 VAR_4->buf = VAR_8;
 VAR_4->bounds_valid = 0;
}
