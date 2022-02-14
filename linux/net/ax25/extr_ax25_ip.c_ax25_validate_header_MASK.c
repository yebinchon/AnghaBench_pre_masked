
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ax25_digi ;


 int FUNC_0 (char const*,unsigned int,int *,int *,int *,int *,int *) ;

__attribute__((used)) static bool FUNC_1(const char *VAR_0, unsigned int VAR_1)
{
 ax25_digi VAR_2;

 if (!VAR_1)
  return 0;

 if (VAR_0[0])
  return 1;

 return FUNC_0(VAR_0 + 1, VAR_1 - 1, ((void*)0), ((void*)0), &VAR_2, ((void*)0),
          ((void*)0));
}
