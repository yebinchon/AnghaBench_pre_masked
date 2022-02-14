
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ time_str; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__,char) ;
 char* FUNC_1 (scalar_t__) ;

__attribute__((used)) static int FUNC_2(char **VAR_2)
{
 char *VAR_3 = ((void*)0);

 if (VAR_1.time_str && FUNC_0(VAR_1.time_str, ':')) {
  VAR_3 = FUNC_1(VAR_1.time_str);
  if (!VAR_3)
   return -VAR_0;
 }

 *VAR_2 = VAR_3;
 return 0;
}
