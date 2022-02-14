
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,int*) ;
 char* FUNC_1 (char*,char) ;
 int FUNC_2 (char*,char*,unsigned int) ;
 char* FUNC_3 (char*,char*) ;

__attribute__((used)) static int FUNC_4(char *VAR_2)
{
 char VAR_3[4], *VAR_4, *VAR_5;
 unsigned int VAR_6;
 int VAR_7, VAR_8;

 VAR_5 = FUNC_3(VAR_2, "char[");
 if (VAR_5 == ((void*)0))
  return -VAR_0;
 VAR_5 += sizeof("char[") - 1;

 VAR_4 = FUNC_1(VAR_2, ']');
 if (!VAR_4 || VAR_4 < VAR_5)
  return -VAR_0;

 VAR_6 = VAR_4 - VAR_5;
 if (VAR_6 > 3)
  return -VAR_0;

 FUNC_2(VAR_3, VAR_5, VAR_6);
 VAR_3[VAR_6] = '\0';

 VAR_8 = FUNC_0(VAR_3, 0, &VAR_7);
 if (VAR_8)
  return VAR_8;

 if (VAR_7 > VAR_1)
  return -VAR_0;

 return VAR_7;
}
