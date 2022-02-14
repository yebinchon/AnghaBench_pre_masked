
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int tmpbuf ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,int,char*,char const*,int) ;
 char* FUNC_2 (char*) ;
 int FUNC_3 (char const*) ;

char *
FUNC_4 (const char VAR_0[], uint16_t VAR_1)
{
  char VAR_2[1024] = { 0, };

  FUNC_0 (FUNC_3 (VAR_0) < (sizeof (VAR_2) - sizeof (";65535")));

  FUNC_1 (VAR_2, sizeof(VAR_2), "%s;%d", VAR_0, VAR_1);

  return FUNC_2 (VAR_2);
}
