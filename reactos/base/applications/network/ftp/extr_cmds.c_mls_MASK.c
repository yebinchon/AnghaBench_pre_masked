
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int jmp_buf ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*,char const*) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char const**) ;
 int VAR_2 ;
 int * VAR_3 ;
 int FUNC_4 () ;
 int VAR_4 ;
 char** VAR_5 ;
 int VAR_6 ;
 char const* VAR_7 ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (char const*,char const*,char const*,char*,int ) ;
 int FUNC_7 (int ) ;
 int VAR_8 ;
 int FUNC_8 (int *,char*) ;
 scalar_t__ FUNC_9 (char const*,char*) ;
 size_t FUNC_10 (int *) ;

void FUNC_11(int VAR_9, const char *VAR_10[])
{
 const char *VAR_11, *VAR_12;
 char VAR_13[1];
 int VAR_14, VAR_15;
 extern jmp_buf VAR_16;

 if (VAR_9 < 2) {
  (void) FUNC_8(VAR_3, " ");
  FUNC_5("(remote-files) ");
  (void) FUNC_1(VAR_8);
  (void) FUNC_2(&VAR_3[FUNC_10(VAR_3)]);
  FUNC_4();
  VAR_9 = VAR_4;
  VAR_10 = VAR_5;
 }
 if (VAR_9 < 3) {
  (void) FUNC_8(VAR_3, " ");
  FUNC_5("(local-file) ");
  (void) FUNC_1(VAR_8);
  (void) FUNC_2(&VAR_3[FUNC_10(VAR_3)]);
  FUNC_4();
  VAR_9 = VAR_4;
  VAR_10 = VAR_5;
 }
 if (VAR_9 < 3) {
  FUNC_5("usage:%s remote-files local-file\n", VAR_10[0]);
  (void) FUNC_1(VAR_8);
  VAR_0 = -1;
  return;
 }
 VAR_12 = VAR_10[VAR_9 - 1];
 VAR_10[VAR_9 - 1] = ((void*)0);
 if (FUNC_9(VAR_12, "-") && *VAR_12 != '|')
  if (!FUNC_3(&VAR_12) || !FUNC_0("output to local-file:", VAR_12)) {
   VAR_0 = -1;
   return;
 }
 VAR_11 = VAR_10[0][1] == 'l' ? "NLST" : "LIST";
 VAR_7 = VAR_10[0];
 VAR_6 = 1;

 (void) FUNC_7(VAR_16);
 for (VAR_15 = 1; VAR_6 && VAR_15 < VAR_9-1; ++VAR_15) {
  *VAR_13 = (VAR_15 == 1) ? 'w' : 'a';
  FUNC_6(VAR_11, VAR_12, VAR_10[VAR_15], VAR_13, 0);
  if (!VAR_6 && VAR_1) {
   VAR_14 = VAR_2;
   VAR_2 = 1;
   if (FUNC_0("Continue with", VAR_10[0])) {
    VAR_6 ++;
   }
   VAR_2 = VAR_14;
  }
 }

 VAR_6 = 0;
}
