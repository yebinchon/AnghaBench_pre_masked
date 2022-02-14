
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int btm_root; } ;
struct TYPE_7__ {int btpo_next; } ;
typedef int Relation ;
typedef int Page ;
typedef int Buffer ;
typedef int BTStack ;
typedef TYPE_1__* BTPageOpaque ;
typedef TYPE_2__ BTMetaPageData ;


 int FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_2 ;
 int FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;
 scalar_t__ FUNC_6 (TYPE_1__*) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (int ,int ,int ,int ,int,int) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ,char*,int ,int ) ;

void
FUNC_12(Relation VAR_3, Buffer VAR_4, BTStack VAR_5)
{
 Page VAR_6 = FUNC_3(VAR_4);
 BTPageOpaque VAR_7 = (BTPageOpaque) FUNC_7(VAR_6);
 Buffer VAR_8;
 Page VAR_9;
 BTPageOpaque VAR_10;
 bool VAR_11;
 bool VAR_12;

 FUNC_0(FUNC_4(VAR_7));


 VAR_8 = FUNC_8(VAR_3, VAR_7->btpo_next, VAR_1);
 VAR_9 = FUNC_3(VAR_8);
 VAR_10 = (BTPageOpaque) FUNC_7(VAR_9);


 if (!VAR_5)
 {
  Buffer VAR_13;
  Page VAR_14;
  BTMetaPageData *VAR_15;


  VAR_13 = FUNC_8(VAR_3, VAR_0, VAR_1);
  VAR_14 = FUNC_3(VAR_13);
  VAR_15 = FUNC_1(VAR_14);

  VAR_11 = (VAR_15->btm_root == FUNC_2(VAR_4));

  FUNC_10(VAR_3, VAR_13);
 }
 else
  VAR_11 = 0;


 VAR_12 = (FUNC_5(VAR_7) && FUNC_6(VAR_10));

 FUNC_11(VAR_2, "finishing incomplete split of %u/%u",
   FUNC_2(VAR_4), FUNC_2(VAR_8));

 FUNC_9(VAR_3, VAR_4, VAR_8, VAR_5, VAR_11, VAR_12);
}
