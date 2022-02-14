
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* decimal_point; } ;


 TYPE_1__* FUNC_0 () ;
 char* FUNC_1 (char*,char) ;

__attribute__((used)) static inline void FUNC_2(char *VAR_0)
{
 const char *VAR_1;
 char *VAR_2;

 VAR_1 = FUNC_0()->decimal_point;
 if (*VAR_1 == '.') {

  return;
 }

 VAR_2 = FUNC_1(VAR_0, '.');
 if (VAR_2)
  *VAR_2 = *VAR_1;
}
