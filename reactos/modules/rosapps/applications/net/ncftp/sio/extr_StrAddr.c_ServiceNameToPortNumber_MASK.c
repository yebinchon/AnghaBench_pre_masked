
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct servent {scalar_t__ s_port; } ;
typedef int str ;


 int FUNC_0 (char) ;
 unsigned int FUNC_1 (char*) ;
 struct servent* FUNC_2 (char*,char*) ;
 scalar_t__ FUNC_3 (char) ;
 scalar_t__ FUNC_4 (unsigned short) ;
 int FUNC_5 (char*,char const* const,int) ;

__attribute__((used)) static unsigned int
FUNC_6(const char *const VAR_0)
{
 char VAR_1[64];
 char *VAR_2;
 struct servent *VAR_3;

 FUNC_5(VAR_1, VAR_0, sizeof(VAR_1) - 1);
 VAR_1[sizeof(VAR_1) - 1] = '\0';
 VAR_2 = VAR_1;
 if (FUNC_3(*VAR_2)) {
  while (FUNC_3(*VAR_2))
   VAR_2++;
  *VAR_2 = '\0';
  return (FUNC_1(VAR_1));
 }
 for (;; VAR_2++) {
  if ((*VAR_2 == '\0')
   || ((!FUNC_0(*VAR_2)) && (*VAR_2 != '-') && (*VAR_2 != '_')))
    break;
 }
 *VAR_2 = '\0';

 VAR_3 = FUNC_2(VAR_1, "tcp");
 if (VAR_3 != ((void*)0)) {

  return ((unsigned int) FUNC_4((unsigned short) VAR_3->s_port));
 }
 VAR_3 = FUNC_2(VAR_1, "udp");
 if (VAR_3 != ((void*)0)) {

  return ((unsigned int) FUNC_4((unsigned short) VAR_3->s_port));
 }
 return (0);
}
