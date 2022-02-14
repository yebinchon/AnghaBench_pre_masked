
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (size_t) ;

int FUNC_2(const char *VAR_1, void *VAR_2)
{
 size_t VAR_3 = (unsigned long)VAR_2;
 char *VAR_4, *VAR_5;

 VAR_4 = FUNC_1(VAR_3);
 for (VAR_5 = VAR_4; VAR_5 < VAR_4 + VAR_3; VAR_5 += VAR_0)
  *VAR_5 = 0;

 FUNC_0(VAR_4);
 return 0;
}
