
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buffer ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 char* FUNC_1 (char*,int) ;
 int FUNC_2 (char const*) ;
 int VAR_3 ;
 int FUNC_3 (int *,int ,char*) ;
 int FUNC_4 () ;

__attribute__((used)) static int FUNC_5(const char * VAR_4, int VAR_5, int VAR_6)
{
 char VAR_7[VAR_2];


 if (VAR_5 || !VAR_6) {


  return VAR_1;
 }
 if (VAR_4 == ((void*)0)) {
  VAR_4 = FUNC_1(VAR_7, sizeof(VAR_7));
 }
 FUNC_0();
 if (VAR_4 == ((void*)0) || !FUNC_2(VAR_4)) {
  FUNC_4();
  FUNC_3(((void*)0), VAR_0, "unable to write random state");
  return VAR_1;
 }
 return VAR_3;
}
