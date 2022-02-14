
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (int) ;
 int FUNC_1 (char const*) ;

__attribute__((used)) static void *FUNC_2(const char *VAR_0){
  int VAR_1 = FUNC_1(VAR_0);
  char *VAR_2;
  int VAR_3, VAR_4;

  VAR_2 = FUNC_0( VAR_1*2 + 2 );
  for(VAR_3=VAR_4=0; VAR_3<=VAR_1; VAR_3++){
    VAR_2[VAR_4++] = VAR_0[VAR_3];
    VAR_2[VAR_4++] = 0;
  }
  return (void*)VAR_2;
}
