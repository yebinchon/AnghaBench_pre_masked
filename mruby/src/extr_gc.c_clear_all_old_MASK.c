
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int mrb_state ;
struct TYPE_7__ {int * gray_list; int atomic_gray_list; int generational; } ;
typedef TYPE_1__ mrb_gc ;
typedef int mrb_bool ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,TYPE_1__*) ;

__attribute__((used)) static void
FUNC_5(mrb_state *VAR_2, mrb_gc *VAR_3)
{
  mrb_bool VAR_4 = VAR_3->generational;

  FUNC_3(FUNC_1(VAR_3));
  if (FUNC_2(VAR_3)) {

    FUNC_0(VAR_2, VAR_3, VAR_1);
  }



  VAR_3->generational = VAR_0;
  FUNC_4(VAR_2, VAR_3);
  FUNC_0(VAR_2, VAR_3, VAR_1);
  VAR_3->generational = VAR_4;


  VAR_3->atomic_gray_list = *(VAR_3->gray_list = ((void*)0));
}
