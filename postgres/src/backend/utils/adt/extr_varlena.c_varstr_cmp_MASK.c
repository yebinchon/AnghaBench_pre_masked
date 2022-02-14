
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_3__* pg_locale_t ;
typedef int int32_t ;
typedef int UErrorCode ;
typedef char UChar ;
struct TYPE_5__ {int ucol; } ;
struct TYPE_6__ {int lt; TYPE_1__ icu; } ;
struct TYPE_7__ {scalar_t__ provider; scalar_t__ deterministic; TYPE_2__ info; } ;
typedef scalar_t__ Oid ;
typedef scalar_t__* LPWSTR ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int ,int ,char const*,int,scalar_t__*,int) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_7 ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int ,char*,scalar_t__) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (char*,...) ;
 scalar_t__ VAR_8 ;
 int FUNC_9 (char**,char const*,int) ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 int FUNC_11 (char const*,char const*,int) ;
 int FUNC_12 (char*,char const*,int) ;
 char* FUNC_13 (int) ;
 int FUNC_14 (char*) ;
 TYPE_3__* FUNC_15 (scalar_t__) ;
 int FUNC_16 (char*,char*) ;
 int FUNC_17 (char*,char*) ;
 int FUNC_18 (char*,char*,int ) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (int ,char*,int ,char*,int ) ;
 int FUNC_21 (int ,char const*,int,char const*,int,int *) ;
 int FUNC_22 (scalar_t__*,scalar_t__*) ;
 int FUNC_23 (scalar_t__*,scalar_t__*,int ) ;

int
FUNC_24(const char *VAR_9, int VAR_10, const char *VAR_11, int VAR_12, Oid VAR_13)
{
 int VAR_14;

 FUNC_5(VAR_13);







 if (FUNC_10(VAR_13))
 {
  VAR_14 = FUNC_11(VAR_9, VAR_11, FUNC_2(VAR_10, VAR_12));
  if ((VAR_14 == 0) && (VAR_10 != VAR_12))
   VAR_14 = (VAR_10 < VAR_12) ? -1 : 1;
 }
 else
 {
  char VAR_15[VAR_6];
  char VAR_16[VAR_6];
  char *VAR_17,
       *VAR_18;
  pg_locale_t VAR_19 = 0;

  if (VAR_13 != VAR_3)
   VAR_19 = FUNC_15(VAR_13);
  if (VAR_10 == VAR_12 && FUNC_11(VAR_9, VAR_11, VAR_10) == 0)
   return 0;
  if (VAR_10 >= VAR_6)
   VAR_17 = (char *) FUNC_13(VAR_10 + 1);
  else
   VAR_17 = VAR_15;
  if (VAR_12 >= VAR_6)
   VAR_18 = (char *) FUNC_13(VAR_12 + 1);
  else
   VAR_18 = VAR_16;

  FUNC_12(VAR_17, VAR_9, VAR_10);
  VAR_17[VAR_10] = '\0';
  FUNC_12(VAR_18, VAR_11, VAR_12);
  VAR_18[VAR_12] = '\0';

  if (VAR_19)
  {
   if (VAR_19->provider == VAR_0)
   {
    FUNC_6(VAR_4, "unsupported collprovider: %c", VAR_19->provider);

   }
   else
   {




    FUNC_6(VAR_4, "unsupported collprovider: %c", VAR_19->provider);

   }
  }
  else
   VAR_14 = FUNC_17(VAR_17, VAR_18);


  if (VAR_14 == 0 &&
   (!VAR_19 || VAR_19->deterministic))
   VAR_14 = FUNC_16(VAR_17, VAR_18);

  if (VAR_17 != VAR_15)
   FUNC_14(VAR_17);
  if (VAR_18 != VAR_16)
   FUNC_14(VAR_18);
 }

 return VAR_14;
}
