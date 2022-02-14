
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int prefix; } ;


 int FUNC_0 (char**,char*,int ,char const*) ;
 scalar_t__ FUNC_1 (char const*) ;
 char* FUNC_2 (char const*) ;
 TYPE_1__ VAR_0 ;

char *FUNC_3(const char *VAR_1)
{
 char *VAR_2 = ((void*)0);

 if (FUNC_1(VAR_1))
  return FUNC_2(VAR_1);

 FUNC_0(&VAR_2, "%s/%s", VAR_0.prefix, VAR_1);

 return VAR_2;
}
