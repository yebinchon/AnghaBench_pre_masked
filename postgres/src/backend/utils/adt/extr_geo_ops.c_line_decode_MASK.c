
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* C; void* B; void* A; } ;
typedef TYPE_1__ LINE ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (unsigned char) ;
 void* FUNC_1 (char*,char**,char*,char const*) ;

__attribute__((used)) static bool
FUNC_2(char *VAR_2, const char *VAR_3, LINE *VAR_4)
{

 VAR_4->A = FUNC_1(VAR_2, &VAR_2, "line", VAR_3);
 if (*VAR_2++ != VAR_0)
  return 0;
 VAR_4->B = FUNC_1(VAR_2, &VAR_2, "line", VAR_3);
 if (*VAR_2++ != VAR_0)
  return 0;
 VAR_4->C = FUNC_1(VAR_2, &VAR_2, "line", VAR_3);
 if (*VAR_2++ != VAR_1)
  return 0;
 while (FUNC_0((unsigned char) *VAR_2))
  VAR_2++;
 if (*VAR_2 != '\0')
  return 0;
 return 1;
}
