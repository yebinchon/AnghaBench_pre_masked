
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int FUNC_0 () ;
 int FUNC_1 (int *,int ,char*,char*,char*,int ) ;
 scalar_t__ FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char*,char*) ;
 int FUNC_4 () ;
 int FUNC_5 (char*,char*,char*,char const*,int ) ;
 char** VAR_6 ;

__attribute__((used)) static void FUNC_6(char *VAR_7, const char *VAR_8, char VAR_9)
{
 char VAR_10[] = "-tvf";
 char *VAR_11;

 if (FUNC_2(VAR_6[VAR_0])) {
  VAR_11 = VAR_6[VAR_0];
  VAR_10[1] = VAR_9;
  VAR_10[2] = '\0';
 } else if (FUNC_2(VAR_6[VAR_1])) {
  VAR_11 = VAR_6[VAR_1];
  if (VAR_9 == 'x')
   VAR_10[1] = VAR_9;
 } else if (FUNC_3(VAR_7, ".zip")) {
  VAR_11 = VAR_6[VAR_5];
  VAR_10[1] = (VAR_9 == 'l') ? 'v' : '\0';
  VAR_10[2] = '\0';
 } else {
  VAR_11 = VAR_6[VAR_3];
  if (VAR_9 == 'x')
   VAR_10[1] = VAR_9;
 }

 if (VAR_9 == 'x') {
  FUNC_5(VAR_11, VAR_10, VAR_7, VAR_8, VAR_2);
 } else {
  FUNC_0();
  FUNC_1(((void*)0), 0, VAR_11, VAR_10, VAR_7, VAR_4);
  FUNC_4();
 }
}
