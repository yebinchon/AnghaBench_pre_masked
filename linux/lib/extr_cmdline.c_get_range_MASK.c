
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int *,int ) ;

__attribute__((used)) static int FUNC_1(char **VAR_0, int *VAR_1, int VAR_2)
{
 int VAR_3, VAR_4, VAR_5;

 (*VAR_0)++;
 VAR_5 = FUNC_0((*VAR_0), ((void*)0), 0);
 VAR_4 = VAR_5 - *VAR_1;
 for (VAR_3 = *VAR_1; VAR_2 && VAR_3 < VAR_5; VAR_3++, VAR_2--)
  *VAR_1++ = VAR_3;
 return VAR_4;
}
