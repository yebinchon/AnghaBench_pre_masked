
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ShmHeader ;


 int FUNC_0 (int) ;
 int * FUNC_1 (int) ;
 char* FUNC_2 (char*,char const*) ;
 int FUNC_3 (char*,int ,void*,int,int*) ;

__attribute__((used)) static ShmHeader *FUNC_4(const char *VAR_0){
  int VAR_1 = 0;
  char *VAR_2 = FUNC_2("%s-shm", VAR_0);
  ShmHeader *VAR_3;

  VAR_3 = FUNC_1(sizeof(ShmHeader));
  FUNC_3(VAR_2, 0, (void *)VAR_3, sizeof(ShmHeader), &VAR_1);
  FUNC_0( VAR_1==0 );

  return VAR_3;
}
