
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int start; } ;
typedef TYPE_1__ jsmntok_t ;


 int FUNC_0 (TYPE_1__*) ;
 char* FUNC_1 (char*,unsigned int) ;
 int FUNC_2 (char*,char const*) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (char*,char*,int) ;

__attribute__((used)) static void FUNC_5(char *VAR_0, char **VAR_1, const char *VAR_2,
       const char *VAR_3, jsmntok_t *VAR_4)
{
 unsigned int VAR_5 = FUNC_3(VAR_3) + 1 + FUNC_3(VAR_2);
 int VAR_6 = *VAR_1 ? FUNC_3(*VAR_1) : 0;
 int VAR_7 = VAR_4 ? FUNC_0(VAR_4) : 0;
 char *VAR_8;

 VAR_8 = FUNC_1(*VAR_1, VAR_5 + VAR_6 + VAR_7);
 if (!VAR_8) {

  return;
 }
 *VAR_1 = VAR_8;

 if (!VAR_6)
  *(*VAR_1) = 0;
 else
  FUNC_2(*VAR_1, VAR_2);
 FUNC_2(*VAR_1, VAR_3);
 if (VAR_4)
  FUNC_4(*VAR_1, VAR_0 + VAR_4->start, VAR_7);
}
