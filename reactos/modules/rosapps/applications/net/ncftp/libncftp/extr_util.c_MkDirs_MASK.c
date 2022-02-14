
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _stat {int dummy; } ;
struct Stat {int st_mode; } ;
typedef int s ;
typedef int mode_t ;
typedef int LPSECURITY_ATTRIBUTES ;


 int FUNC_0 (char const* const,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char const) ;
 scalar_t__ FUNC_2 (char const* const) ;
 char VAR_4 ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (char const* const,struct Stat*) ;
 char* FUNC_5 (char const* const) ;
 char* FUNC_6 (char*) ;
 int FUNC_7 (char const* const,int) ;
 scalar_t__ FUNC_8 (char const* const,struct Stat*) ;
 int FUNC_9 (char const* const,int ) ;
 int VAR_5 ;
 scalar_t__ FUNC_10 (char const) ;
 int FUNC_11 (char const* const,int ) ;
 int FUNC_12 (char*,char const* const,int) ;

int
FUNC_13(const char *const VAR_6, int VAR_7)
{
 char VAR_8[512];
 int VAR_9;
 char *VAR_10, *VAR_11;




 struct Stat VAR_12;
 mode_t VAR_13 = (mode_t) VAR_7;
 if (FUNC_9(VAR_6, VAR_3) == 0) {
  if (FUNC_4(VAR_6, &VAR_12) < 0)
   return (-1);
  if (! FUNC_3(VAR_12.st_mode)) {
   VAR_5 = VAR_2;
   return (-1);
  }
  return 0;
 }


 (void) FUNC_12(VAR_8, VAR_6, sizeof(VAR_8));
 if (VAR_8[sizeof(VAR_8) - 1] != '\0') {



  VAR_5 = VAR_0;
  return (-1);

 }

 VAR_10 = FUNC_6(VAR_8);
 if (VAR_10 == ((void*)0)) {





  VAR_9 = FUNC_11(VAR_6, VAR_13);
  return (VAR_9);

 } else if (VAR_10[1] == '\0') {

  --VAR_10;
  while (VAR_10 > VAR_8) {
   if (! FUNC_1(*VAR_10))
    break;
   --VAR_10;
  }
  VAR_10[1] = '\0';
  VAR_10 = FUNC_6(VAR_8);
  if (VAR_10 == ((void*)0)) {




   VAR_9 = FUNC_11(VAR_8, VAR_13);
   return (VAR_9);

  }
 }
 VAR_11 = ((void*)0);
 for (;;) {
  *VAR_10 = '\0';



  VAR_9 = FUNC_9(VAR_8, VAR_3);

  if (VAR_11 != ((void*)0))
   *VAR_11 = VAR_4;
  if (VAR_9 == 0) {
   *VAR_10 = VAR_4;
   break;
  }
  VAR_11 = VAR_10;
  VAR_10 = FUNC_6(VAR_8);
  if (VAR_10 == ((void*)0)) {







   if (VAR_11 != ((void*)0))
    *VAR_11 = VAR_4;






   VAR_10 = VAR_8 - 1;
   break;
  }
 }

 for (;;) {




  VAR_11 = FUNC_5(VAR_10 + 1);
  if (VAR_11 == VAR_8) {







   ++VAR_10;
   VAR_11 = FUNC_5(VAR_10 + 1);
  }
  if (VAR_11 != ((void*)0)) {
   *VAR_11 = '\0';
  }




  VAR_9 = FUNC_11(VAR_8, VAR_13);
  if (VAR_9 < 0)
   return VAR_9;

  if (VAR_11 == ((void*)0))
   break;
  *VAR_11 = VAR_4;
  VAR_10 = VAR_11;
 }
 return (0);
}
