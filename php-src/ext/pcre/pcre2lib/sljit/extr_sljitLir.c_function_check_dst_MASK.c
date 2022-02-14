
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sljit_compiler {int scratches; int saveds; scalar_t__ logical_local_size; } ;
typedef scalar_t__ sljit_sw ;
typedef scalar_t__ sljit_s32 ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (struct sljit_compiler*,scalar_t__,scalar_t__) ;

__attribute__((used)) static sljit_s32 FUNC_3(struct sljit_compiler *VAR_2, sljit_s32 VAR_3, sljit_sw VAR_4, sljit_s32 VAR_5)
{
 if (VAR_2->scratches == -1 || VAR_2->saveds == -1)
  return 0;

 if (FUNC_0(VAR_3) || ((VAR_5) && (VAR_3) == VAR_1))
  return (VAR_4 == 0);

 if (VAR_3 == FUNC_1(VAR_0))
  return (VAR_4 >= 0 && VAR_4 < VAR_2->logical_local_size);

 return FUNC_2(VAR_2, VAR_3, VAR_4);
}
