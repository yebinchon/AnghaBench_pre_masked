
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 void* FUNC_0 (char const*) ;
 char* FUNC_1 (char const*,char) ;
 void* VAR_0 ;
 void* VAR_1 ;

__attribute__((used)) static void
FUNC_2(const char *VAR_2)
{
 char *VAR_3 = FUNC_1(VAR_2, ',');

 if (VAR_3 == ((void*)0))
  VAR_3 = FUNC_1(VAR_2, 'x');
 if (VAR_3 == ((void*)0))
  VAR_3 = FUNC_1(VAR_2, ':');
 if (VAR_3 == ((void*)0))
  VAR_3 = FUNC_1(VAR_2, ';');

 VAR_0 = FUNC_0(VAR_2);
 if (VAR_3 && VAR_3[1])
  VAR_1 = FUNC_0(VAR_2);
 else
  VAR_1 = VAR_0;
}
