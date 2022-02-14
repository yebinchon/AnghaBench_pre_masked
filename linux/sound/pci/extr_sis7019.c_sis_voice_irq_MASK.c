
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct voice {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct voice*) ;

__attribute__((used)) static void FUNC_2(u32 VAR_0, struct voice *VAR_1)
{
 int VAR_2;

 while (VAR_0) {
  VAR_2 = FUNC_0(VAR_0);
  VAR_0 >>= VAR_2 + 1;
  VAR_1 += VAR_2;
  FUNC_1(VAR_1);
  VAR_1++;
 }
}
