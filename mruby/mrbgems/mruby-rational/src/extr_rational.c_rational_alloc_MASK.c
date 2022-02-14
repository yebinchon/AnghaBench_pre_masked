
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mrb_rational {int dummy; } ;
struct RIStruct {scalar_t__ inline_data; } ;
struct RClass {int dummy; } ;
struct RBasic {int dummy; } ;
typedef int mrb_state ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int ,struct RClass*) ;

__attribute__((used)) static struct RBasic*
FUNC_1(mrb_state *VAR_1, struct RClass *VAR_2, struct mrb_rational **VAR_3)
{
  struct RIStruct *VAR_4;

  VAR_4 = (struct RIStruct*)FUNC_0(VAR_1, VAR_0, VAR_2);
  *VAR_3 = (struct mrb_rational*)VAR_4->inline_data;

  return (struct RBasic*)VAR_4;
}
