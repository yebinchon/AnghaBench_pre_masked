
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int*,int ,int) ;
 int* FUNC_1 (int,int,int ) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static int* FUNC_3(int VAR_1, const char* VAR_2)
{
 int *VAR_3;
 int VAR_4 = -1, VAR_5 = 0;

 VAR_3 = FUNC_1(sizeof(int), VAR_1, 0);
 FUNC_0(VAR_3,0,sizeof(int)*VAR_1);
 while (*VAR_2 != '\0' && (*VAR_2 < '0' || *VAR_2 > '9') && (*VAR_2 != '*')) {
  VAR_2++;
 }
 if (*VAR_2 == '*') {
  VAR_2++;
  VAR_4++;
 }
 while (*VAR_2 != '\0') {
  if (*VAR_2 >= '0' && *VAR_2 <= '9') {
   if (VAR_5 == 0) {
    VAR_4++;
    VAR_5 = 1;
   }
   VAR_3[VAR_4] = (VAR_3[VAR_4]*10)+(*VAR_2-'0');
  } else if (*VAR_2 == '*') {
   FUNC_2(VAR_0, "Encoding: '*' may only be first arraySize value in list");
  } else {
    VAR_5 = 0;
  }
  VAR_2++;
 }
 return VAR_3;
}
