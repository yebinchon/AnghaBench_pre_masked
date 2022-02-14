
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
typedef int buf ;
typedef int RMagic ;
typedef int RBuffer ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int *,int) ;
 char* FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int * FUNC_4 (int ) ;
 char* FUNC_5 (char const*) ;

__attribute__((used)) static char *FUNC_6(RBuffer *VAR_1) {
 ut8 VAR_2[4096] = { 0 };
 char *VAR_3 = ((void*)0);
 RMagic *VAR_4 = FUNC_4 (0);
 if (!VAR_4) {
  return ((void*)0);
 }
 const char *VAR_5 = ((void*)0);

 FUNC_3 (VAR_4, VAR_0);
 FUNC_0 (VAR_1, 0, VAR_2, sizeof (VAR_2));
 VAR_5 = FUNC_1 (VAR_4, VAR_2, sizeof (VAR_2));
 if (VAR_5) {
  VAR_3 = FUNC_5 (VAR_5);
 }
 FUNC_2 (VAR_4);
 return VAR_3;
}
