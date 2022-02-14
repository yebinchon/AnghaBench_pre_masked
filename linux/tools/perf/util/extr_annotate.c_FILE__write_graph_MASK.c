
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*,void*) ;

__attribute__((used)) static void FUNC_1(void *VAR_0, int VAR_1)
{
 const char *VAR_2;
 switch (VAR_1) {

 case 131: VAR_2 = "↓"; break;
 case 128: VAR_2 = "↑"; break;
 case 130: VAR_2 = "←"; break;
 case 129: VAR_2 = "→"; break;
 default: VAR_2 = "?"; break;
 }

 FUNC_0(VAR_2, VAR_0);
}
