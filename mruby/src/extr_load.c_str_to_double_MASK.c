
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mrb_value ;
typedef int mrb_state ;
typedef int mrb_int ;


 double VAR_0 ;
 int FUNC_0 (int ) ;
 char* FUNC_1 (int ) ;
 int VAR_1 ;
 double FUNC_2 (int *,int ,int ) ;

__attribute__((used)) static double
FUNC_3(mrb_state *VAR_2, mrb_value VAR_3)
{
  const char *VAR_4 = FUNC_1(VAR_3);
  mrb_int VAR_5 = FUNC_0(VAR_3);


  if (VAR_5 > 0 && VAR_4[0] == 'i') return VAR_0;


  if (VAR_4[0] == 'I' || (VAR_5 > 1 && VAR_4[0] == '-' && VAR_4[1] == 'i')) return -VAR_0;

  return FUNC_2(VAR_2, VAR_3, VAR_1);
}
