
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
typedef int symbol ;
typedef int RBuffer ;


 int FUNC_0 (int *,int,int *,int) ;
 char* FUNC_1 (char*) ;

__attribute__((used)) static char *FUNC_2(RBuffer *VAR_0, int VAR_1) {
 char VAR_2[128];
 int VAR_3 = FUNC_0 (VAR_0, VAR_1, (ut8*)VAR_2, sizeof (VAR_2));
 if (VAR_3 < 1) {
  return ((void*)0);
 }
 VAR_2[sizeof (VAR_2) - 1] = 0;
 return FUNC_1 (VAR_2);
}
