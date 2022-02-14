
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in_addr {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*,char*,size_t) ;
 char* FUNC_1 (struct in_addr) ;
 int FUNC_2 (int ,struct in_addr*,char*,size_t) ;

void
FUNC_3(char *VAR_1, size_t VAR_2, char **VAR_3, int VAR_4)
{
 struct in_addr *VAR_5;

 char *VAR_6;


 (void) FUNC_0(VAR_1, "???", VAR_2);
 if (VAR_3 != (char **) 0) {
  VAR_5 = (struct in_addr *) VAR_3[VAR_4];



  VAR_6 = FUNC_1(*VAR_5);
  if ((VAR_6 != (char *) 0) && (VAR_6 != (char *) -1) && (VAR_6[0] != '\0'))
   (void) FUNC_0(VAR_1, VAR_6, VAR_2);

 }
}
