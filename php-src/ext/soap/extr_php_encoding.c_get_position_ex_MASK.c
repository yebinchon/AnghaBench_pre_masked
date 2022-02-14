
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int*,int ,int) ;

__attribute__((used)) static void FUNC_1(int VAR_0, const char* VAR_1, int** VAR_2)
{
 int VAR_3 = 0;

 FUNC_0(*VAR_2,0,sizeof(int)*VAR_0);
 while (*VAR_1 != ']' && *VAR_1 != '\0' && VAR_3 < VAR_0) {
  if (*VAR_1 >= '0' && *VAR_1 <= '9') {
   (*VAR_2)[VAR_3] = ((*VAR_2)[VAR_3]*10)+(*VAR_1-'0');
  } else if (*VAR_1 == ',') {
   VAR_3++;
  }
  VAR_1++;
 }
}
