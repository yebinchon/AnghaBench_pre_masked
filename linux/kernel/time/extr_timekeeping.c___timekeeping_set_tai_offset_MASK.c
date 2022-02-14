
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timekeeper {int offs_real; int offs_tai; int tai_offset; } ;
typedef int s32 ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(struct timekeeper *VAR_0, s32 VAR_1)
{
 VAR_0->tai_offset = VAR_1;
 VAR_0->offs_tai = FUNC_0(VAR_0->offs_real, FUNC_1(VAR_1, 0));
}
