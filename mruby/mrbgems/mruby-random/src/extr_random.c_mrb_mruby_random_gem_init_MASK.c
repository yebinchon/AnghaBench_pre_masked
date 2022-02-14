
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct RClass {int dummy; } ;
typedef int rand_state ;
struct TYPE_9__ {int object_class; struct RClass* kernel_module; struct RClass* array_class; } ;
typedef TYPE_1__ mrb_state ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct RClass*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*,int ,int ,int ) ;
 struct RClass* FUNC_4 (TYPE_1__*,char*,int ) ;
 int FUNC_5 (TYPE_1__*,struct RClass*,char*,int ,int ) ;
 int FUNC_6 (TYPE_1__*,struct RClass*,char*,int ,int ) ;
 int FUNC_7 (TYPE_1__*,char*) ;
 int FUNC_8 (TYPE_1__*,struct RClass*,int ,int *) ;
 int FUNC_9 (struct RClass*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

void FUNC_10(mrb_state *VAR_10)
{
  struct RClass *VAR_11;
  struct RClass *VAR_12 = VAR_10->array_class;

  FUNC_2(sizeof(rand_state) <= VAR_0);

  FUNC_6(VAR_10, VAR_10->kernel_module, "rand", VAR_5, FUNC_0(1));
  FUNC_6(VAR_10, VAR_10->kernel_module, "srand", VAR_6, FUNC_0(1));

  VAR_11 = FUNC_4(VAR_10, "Random", VAR_10->object_class);
  FUNC_1(VAR_11, VAR_1);
  FUNC_5(VAR_10, VAR_11, "rand", VAR_5, FUNC_0(1));
  FUNC_5(VAR_10, VAR_11, "srand", VAR_6, FUNC_0(1));

  FUNC_6(VAR_10, VAR_11, "initialize", VAR_7, FUNC_0(1));
  FUNC_6(VAR_10, VAR_11, "rand", VAR_8, FUNC_0(1));
  FUNC_6(VAR_10, VAR_11, "srand", VAR_9, FUNC_0(1));

  FUNC_6(VAR_10, VAR_12, "shuffle", VAR_3, FUNC_0(1));
  FUNC_6(VAR_10, VAR_12, "shuffle!", VAR_4, FUNC_0(1));
  FUNC_6(VAR_10, VAR_12, "sample", VAR_2, FUNC_0(2));

  FUNC_3(VAR_10, FUNC_9(VAR_11), FUNC_7(VAR_10, "DEFAULT"),
          FUNC_8(VAR_10, VAR_11, 0, ((void*)0)));
}
