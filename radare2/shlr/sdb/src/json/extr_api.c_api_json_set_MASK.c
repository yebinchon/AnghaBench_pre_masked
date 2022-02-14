
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* p; int f; int t; } ;
typedef TYPE_1__ Rangstr ;


 int FUNC_0 (int) ;
 TYPE_1__ FUNC_1 (char const*,char const*) ;
 char* FUNC_2 (int) ;
 int FUNC_3 (char*,char const*,int) ;
 int FUNC_4 (char const*) ;

char *FUNC_5 (const char *VAR_0, const char *VAR_1, const char *VAR_2) {
 const char *VAR_3[3];
 const char *VAR_4[3];
 int VAR_5, VAR_6[3];
 char *VAR_7 = ((void*)0);
 Rangstr VAR_8 = FUNC_1 (VAR_0, VAR_1);
 if (!VAR_8.p) {
  return ((void*)0);
 }


 VAR_3[0] = VAR_0;
 VAR_4[0] = VAR_8.p + VAR_8.f;
 VAR_6[0] = (int)(size_t)(VAR_4[0]-VAR_3[0]);

 VAR_3[1] = VAR_2;
 VAR_4[1] = VAR_2 + FUNC_4 (VAR_2);
 VAR_6[1] = (int)(size_t)(VAR_4[1]-VAR_3[1]);

 VAR_3[2] = VAR_8.p + VAR_8.t;
 VAR_4[2] = VAR_0 + FUNC_4 (VAR_0);
 VAR_6[2] = (int)(size_t)(VAR_4[2]-VAR_3[2]);

 VAR_7 = FUNC_2 (VAR_6[0]+VAR_6[1]+VAR_6[2]+1);
 if (!VAR_7) {
  return ((void*)0);
 }
 VAR_5 = VAR_6[0];
 FUNC_3 (VAR_7, VAR_3[0], VAR_5);
 FUNC_3 (VAR_7+VAR_5, VAR_3[1], VAR_6[1]);
 VAR_5 += VAR_6[1];
 FUNC_3 (VAR_7+VAR_5, VAR_3[2], VAR_6[2]);
 VAR_7[VAR_5+VAR_6[2]] = 0;
 return VAR_7;
}
