
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pathName ;
typedef int path2 ;


 int FUNC_0 (char*,int,int ) ;
 int FUNC_1 (char*,char*) ;
 scalar_t__ FUNC_2 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (char*,char*) ;
 int FUNC_5 (char*,char*,unsigned int) ;

__attribute__((used)) static int
FUNC_6(void)
{
 char VAR_2[32];
 char VAR_3[256], VAR_4[256];

 (void) FUNC_0(VAR_4, sizeof(VAR_4), VAR_0);
 (void) FUNC_0(VAR_3, sizeof(VAR_3), VAR_1);
 (void) FUNC_5(VAR_2, "-%u.txt", (unsigned int) FUNC_2());
 (void) FUNC_1(VAR_3, VAR_2);

 (void) FUNC_3(VAR_4);
 if (FUNC_4(VAR_3, VAR_4) < 0) {
  return (-1);
 }
 return (0);
}
