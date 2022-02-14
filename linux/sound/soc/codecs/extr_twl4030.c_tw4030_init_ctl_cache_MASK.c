
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct twl4030_priv {int * ctl_cache; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *,int) ;

__attribute__((used)) static void FUNC_1(struct twl4030_priv *VAR_3)
{
 int VAR_4;
 u8 VAR_5;

 for (VAR_4 = VAR_1; VAR_4 <= VAR_2; VAR_4++) {
  FUNC_0(VAR_0, &VAR_5, VAR_4);
  VAR_3->ctl_cache[VAR_4 - VAR_1] = VAR_5;
 }
}
