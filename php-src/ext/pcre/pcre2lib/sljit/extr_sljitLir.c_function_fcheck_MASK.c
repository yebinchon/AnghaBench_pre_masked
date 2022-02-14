
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sljit_compiler {int scratches; int saveds; scalar_t__ logical_local_size; } ;
typedef scalar_t__ sljit_sw ;
typedef int sljit_s32 ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (struct sljit_compiler*,int,scalar_t__) ;

__attribute__((used)) static sljit_s32 FUNC_3(struct sljit_compiler *VAR_1, sljit_s32 VAR_2, sljit_sw VAR_3)
{
 if (VAR_1->scratches == -1 || VAR_1->saveds == -1)
  return 0;

 if (FUNC_0(VAR_2))
  return (VAR_3 == 0);

 if (VAR_2 == FUNC_1(VAR_0))
  return (VAR_3 >= 0 && VAR_3 < VAR_1->logical_local_size);

 return FUNC_2(VAR_1, VAR_2, VAR_3);
}
