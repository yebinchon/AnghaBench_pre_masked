
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct passwd {char* pw_dir; } ;
typedef char* string ;
typedef int hdir ;


 int FUNC_0 (char*,int) ;
 scalar_t__ FUNC_1 (char) ;
 char* VAR_0 ;
 int FUNC_2 (char*,char*) ;
 char* FUNC_3 (char*) ;
 int FUNC_4 (char*,char*,size_t) ;
 int FUNC_5 (char*,char*,size_t) ;
 struct passwd* FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static void
FUNC_8(char *VAR_1, size_t VAR_2)
{
 string VAR_3;
 char *VAR_4, *VAR_5, *VAR_6;


 struct passwd *VAR_7;

 string VAR_8;

 if ((VAR_1[0] == '~') &&
 (FUNC_7((int) VAR_1[1]) || FUNC_1(VAR_1[1]) || (VAR_1[1] == '\0'))) {
  (void) FUNC_2(VAR_3, VAR_1);
  if ((VAR_4 = FUNC_3(VAR_3)) != ((void*)0)) {
   *VAR_4 = 0;
   VAR_5 = VAR_4 + 1;
  } else {
   VAR_5 = ((void*)0);
  }
  if (VAR_3[1] == '\0') {

   FUNC_0(VAR_8, sizeof(VAR_8));
   VAR_6 = VAR_8;
  } else {




   VAR_7 = FUNC_6(VAR_3 + 1);
   if (VAR_7 != ((void*)0))
    VAR_6 = VAR_7->pw_dir;
   else
    return;

  }

  (void) FUNC_5(VAR_1, VAR_6, VAR_2);
  if (VAR_5 != ((void*)0)) {
   (void) FUNC_4(VAR_1, VAR_0, VAR_2);
   (void) FUNC_4(VAR_1, VAR_5, VAR_2);
  }
 }
}
