
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
typedef int mrb_sym ;
typedef int mrb_state ;
typedef int mrb_irep ;
typedef scalar_t__ mrb_int ;


 scalar_t__ FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int const,scalar_t__*) ;

__attribute__((used)) static size_t
FUNC_2(mrb_state *VAR_0, mrb_irep *VAR_1, mrb_sym const *VAR_2, uint32_t VAR_3)
{
  size_t VAR_4 = 0, VAR_5;

  VAR_4 += sizeof(uint32_t);
  VAR_4 += sizeof(uint16_t) * VAR_3;
  for (VAR_5 = 0; VAR_5 < VAR_3; ++VAR_5) {
    mrb_int VAR_6;
    FUNC_1(VAR_0, VAR_2[VAR_5], &VAR_6);
    VAR_4 += VAR_6;
  }

  VAR_4 += FUNC_0(VAR_0, VAR_1);

  return VAR_4;
}
