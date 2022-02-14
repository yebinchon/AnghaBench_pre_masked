
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*,int *,int *) ;
 unsigned int FUNC_1 (char*,int) ;

__attribute__((used)) static inline void
FUNC_2(char *VAR_0)
{
 unsigned VAR_1;



 FUNC_0(VAR_0, VAR_0 + 4, ((void*)0), ((void*)0));
 VAR_1 = FUNC_1(VAR_0, 8);
 if (VAR_1 == 10)
  VAR_0[8] = 'X';
 else
  VAR_0[8] = VAR_1 + '0';
 VAR_0[9] = '\0';
}
