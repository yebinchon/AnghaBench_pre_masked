
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
 int FUNC_0 (int) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int * FUNC_1 (struct sljit_compiler*,int,scalar_t__,int ,scalar_t__,int ) ;

__attribute__((used)) static sljit_s32 FUNC_2(struct sljit_compiler *VAR_4, sljit_u8 VAR_5,
 sljit_s32 VAR_6, sljit_s32 VAR_7, sljit_s32 VAR_8, sljit_sw VAR_9)
{
 sljit_u8 *VAR_10;

 VAR_10 = FUNC_1(VAR_4, 2 | (VAR_6 ? VAR_0 : 0) | VAR_1, VAR_7, 0, VAR_8, VAR_9);
 FUNC_0(!VAR_10);
 *VAR_10++ = VAR_2;
 *VAR_10 = VAR_5;
 return VAR_3;
}
