
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int text ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*) ;
 int FUNC_3 (unsigned char*) ;
 unsigned char* FUNC_4 (unsigned char*,int,int,int) ;

__attribute__((used)) static text *
FUNC_5(text *VAR_0, int VAR_1, int VAR_2)
{
 int VAR_3 = FUNC_1(VAR_0);
 unsigned char *VAR_4;
 unsigned char *VAR_5 = (unsigned char *) FUNC_0(VAR_0);
 text *VAR_6;

 VAR_4 = FUNC_4(VAR_5, VAR_3, VAR_1, VAR_2);
 if (VAR_4 == VAR_5)
  return VAR_0;

 VAR_6 = FUNC_2((char *) VAR_4);
 FUNC_3(VAR_4);
 return VAR_6;
}
