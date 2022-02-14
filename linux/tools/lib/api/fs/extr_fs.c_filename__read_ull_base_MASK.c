
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int line ;


 int VAR_0 ;
 unsigned long long VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char const*,int ) ;
 scalar_t__ FUNC_2 (int,char*,int) ;
 unsigned long long FUNC_3 (char*,int *,int) ;

__attribute__((used)) static int FUNC_4(const char *VAR_2,
       unsigned long long *VAR_3, int VAR_4)
{
 char VAR_5[64];
 int VAR_6 = FUNC_1(VAR_2, VAR_0), VAR_7 = -1;

 if (VAR_6 < 0)
  return -1;

 if (FUNC_2(VAR_6, VAR_5, sizeof(VAR_5)) > 0) {
  *VAR_3 = FUNC_3(VAR_5, ((void*)0), VAR_4);
  if (*VAR_3 != VAR_1)
   VAR_7 = 0;
 }

 FUNC_0(VAR_6);
 return VAR_7;
}
