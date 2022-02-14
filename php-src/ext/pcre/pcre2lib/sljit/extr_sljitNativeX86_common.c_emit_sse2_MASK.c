
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sljit_compiler {int dummy; } ;
typedef int sljit_u8 ;
typedef int sljit_sw ;
typedef scalar_t__ sljit_s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int * FUNC_1 (struct sljit_compiler*,int,scalar_t__,int ,scalar_t__,int ) ;

__attribute__((used)) static sljit_s32 FUNC_2(struct sljit_compiler *VAR_5, sljit_u8 VAR_6,
 sljit_s32 VAR_7, sljit_s32 VAR_8, sljit_s32 VAR_9, sljit_sw VAR_10)
{
 sljit_u8 *VAR_11;

 VAR_11 = FUNC_1(VAR_5, 2 | (VAR_7 ? VAR_1 : VAR_0) | VAR_2, VAR_8, 0, VAR_9, VAR_10);
 FUNC_0(!VAR_11);
 *VAR_11++ = VAR_3;
 *VAR_11 = VAR_6;
 return VAR_4;
}
