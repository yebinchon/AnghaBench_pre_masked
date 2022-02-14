
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,unsigned long,unsigned long) ;
 int FUNC_4 (int,char*,int) ;
 unsigned long FUNC_5 (char*,int *,int) ;

__attribute__((used)) static int FUNC_6(char *VAR_1, unsigned long VAR_2)
{
 char VAR_3[10];
 int VAR_4, VAR_5;

 VAR_4 = FUNC_1(VAR_1, VAR_0);
 if (VAR_4 == -1) {
  FUNC_2("open() failed");
  return 1;
 }

 VAR_5 = FUNC_4(VAR_4, VAR_3, sizeof(VAR_3));
 if (VAR_5 == -1) {
  FUNC_2("read() failed");
  return 1;
 }
 FUNC_0(VAR_4);

 VAR_3[VAR_5] = '\0';
 if (FUNC_5(VAR_3, ((void*)0), 16) != VAR_2) {
  FUNC_3("DSCR match failed: %ld (system) %ld (cpu)\n",
     VAR_2, FUNC_5(VAR_3, ((void*)0), 16));
  return 1;
 }
 return 0;
}
