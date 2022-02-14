
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int jmp_buf ;


 int VAR_0 ;
 int FUNC_0 (char*,char const*) ;
 scalar_t__ FUNC_1 (char const*,char const*) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (int *) ;
 int VAR_2 ;
 int * VAR_3 ;
 int FUNC_4 () ;
 int VAR_4 ;
 char** VAR_5 ;
 int VAR_6 ;
 char const* VAR_7 ;
 int FUNC_5 (char*,...) ;
 char* FUNC_6 (char const**,int ) ;
 int FUNC_7 (int ) ;
 int VAR_8 ;
 int FUNC_8 (int *,char*) ;
 size_t FUNC_9 (int *) ;

void FUNC_10(int VAR_9, const char *VAR_10[])
{
 const char *VAR_11;
 int VAR_12;
 extern jmp_buf VAR_13;

 if (VAR_9 < 2) {
  (void) FUNC_8(VAR_3, " ");
  FUNC_5("(remote-files) ");
  (void) FUNC_2(VAR_8);
  (void) FUNC_3(&VAR_3[FUNC_9(VAR_3)]);
  FUNC_4();
  VAR_9 = VAR_4;
  VAR_10 = VAR_5;
 }
 if (VAR_9 < 2) {
  FUNC_5("usage:%s remote-files\n", VAR_10[0]);
  (void) FUNC_2(VAR_8);
  VAR_0 = -1;
  return;
 }
 VAR_7 = VAR_10[0];
 VAR_6 = 1;

 (void) FUNC_7(VAR_13);
 while ((VAR_11 = FUNC_6(VAR_10,0)) != ((void*)0)) {
  if (*VAR_11 == '\0') {
   VAR_6 = 0;
   continue;
  }
  if (VAR_6 && FUNC_1(VAR_10[0], VAR_11)) {
   (void) FUNC_0("DELE %s", VAR_11);
   if (!VAR_6 && VAR_1) {
    VAR_12 = VAR_2;
    VAR_2 = 1;
    if (FUNC_1("Continue with", "mdelete")) {
     VAR_6++;
    }
    VAR_2 = VAR_12;
   }
  }
 }

 VAR_6 = 0;
}
