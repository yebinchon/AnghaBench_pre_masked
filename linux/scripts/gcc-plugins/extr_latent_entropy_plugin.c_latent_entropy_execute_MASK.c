
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int tree ;
typedef TYPE_1__* basic_block ;
struct TYPE_7__ {struct TYPE_7__* next_bb; } ;


 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 () ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*,int ) ;
 int VAR_1 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_1__*,int ) ;
 int FUNC_8 (TYPE_1__*) ;
 TYPE_1__* FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;

__attribute__((used)) static unsigned int FUNC_13(void)
{
 basic_block VAR_2;
 tree VAR_3;

 if (!FUNC_2())
  return 0;


 FUNC_4(FUNC_11(FUNC_0(VAR_0)));
 VAR_2 = FUNC_9(FUNC_0(VAR_0));
 if (!FUNC_8(VAR_2)) {
  FUNC_12(FUNC_10(FUNC_0(VAR_0)));
  FUNC_4(FUNC_11(FUNC_0(VAR_0)));
  VAR_2 = FUNC_9(FUNC_0(VAR_0));
 }


 VAR_3 = FUNC_3(VAR_1, "local_entropy");


 FUNC_5(VAR_2, VAR_3);

 VAR_2 = VAR_2->next_bb;





 while (VAR_2 != FUNC_1(VAR_0)) {
  FUNC_7(VAR_2, VAR_3);
  VAR_2 = VAR_2->next_bb;
 };


 FUNC_6(VAR_3);
 return 0;
}
