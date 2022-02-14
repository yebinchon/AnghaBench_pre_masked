
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ wchar_t ;
typedef TYPE_2__* pg_locale_t ;
typedef int locale_t ;
struct TYPE_4__ {int lt; } ;
struct TYPE_5__ {scalar_t__ provider; TYPE_1__ info; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 () ;
 size_t FUNC_2 (int ,int ,char const*,size_t,scalar_t__*,size_t) ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*) ;
 size_t FUNC_8 (scalar_t__*,char*,size_t) ;
 size_t FUNC_9 (scalar_t__*,char*,size_t,int ) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (char const*,size_t,int) ;
 char* FUNC_12 (char const*,size_t) ;
 int FUNC_13 (int ) ;

size_t
FUNC_14(wchar_t *VAR_5, size_t VAR_6, const char *VAR_7, size_t VAR_8,
     pg_locale_t VAR_9)
{
 size_t VAR_10;

 FUNC_0(!VAR_9 || VAR_9->provider == VAR_0);

 if (VAR_6 == 0)
  return 0;
 {

  char *VAR_11 = FUNC_12(VAR_7, VAR_8);

  if (VAR_9 == (pg_locale_t) 0)
  {

   VAR_10 = FUNC_8(VAR_5, VAR_11, VAR_6);
  }
  else
  {
   FUNC_3(VAR_3, "mbstowcs_l is not available");
   VAR_10 = 0;

  }

  FUNC_10(VAR_11);
 }

 if (VAR_10 == -1)
 {
  FUNC_11(VAR_7, VAR_8, 0);

  FUNC_4(VAR_3,
    (FUNC_5(VAR_2),
     FUNC_7("invalid multibyte character for locale"),
     FUNC_6("The server's LC_CTYPE locale is probably incompatible with the database encoding.")));
 }

 return VAR_10;
}
