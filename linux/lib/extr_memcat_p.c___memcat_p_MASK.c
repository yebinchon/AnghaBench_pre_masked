
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 void** FUNC_0 (int,int,int ) ;

void **FUNC_1(void **VAR_1, void **VAR_2)
{
 void **VAR_3 = VAR_1, **VAR_4;
 int VAR_5;


 for (VAR_5 = 0, VAR_3 = VAR_1; *VAR_3; VAR_5++, VAR_3++)
  ;
 for (VAR_3 = VAR_2; *VAR_3; VAR_5++, VAR_3++)
  ;

 VAR_5++;

 VAR_4 = FUNC_0(VAR_5, sizeof(void *), VAR_0);
 if (!VAR_4)
  return ((void*)0);


 for (VAR_5--; VAR_5 >= 0; VAR_5--, VAR_3 = VAR_3 == VAR_2 ? &VAR_1[VAR_5] : VAR_3 - 1)
  VAR_4[VAR_5] = *VAR_3;

 return VAR_4;
}
