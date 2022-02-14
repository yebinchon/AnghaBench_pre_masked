
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 char** VAR_8 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static bool FUNC_3(void)
{

 if (!VAR_7) {
  FUNC_1("selection file not found");
  return VAR_1;
 }


 if (FUNC_0(VAR_7, VAR_3 | VAR_5) == -1) {
  VAR_6 == VAR_0 ? FUNC_1(VAR_8[VAR_2]) : FUNC_2(((void*)0));
  return VAR_1;
 }

 return VAR_4;
}
