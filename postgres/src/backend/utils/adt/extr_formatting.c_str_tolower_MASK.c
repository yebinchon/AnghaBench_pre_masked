
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ wchar_t ;
typedef TYPE_2__* pg_locale_t ;
typedef int int32_t ;
typedef scalar_t__ UChar ;
struct TYPE_7__ {int lt; } ;
struct TYPE_8__ {scalar_t__ provider; TYPE_1__ info; } ;
typedef scalar_t__ Oid ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (scalar_t__) ;
 char* FUNC_1 (char const*,size_t) ;
 int FUNC_2 (scalar_t__*,size_t,char const*,size_t,TYPE_2__*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (int ,TYPE_2__*,scalar_t__**,scalar_t__*,int ) ;
 int FUNC_8 (char**,scalar_t__*,int ) ;
 int FUNC_9 (scalar_t__**,char const*,size_t) ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 char* FUNC_11 (size_t) ;
 int FUNC_12 (scalar_t__*) ;
 size_t FUNC_13 () ;
 TYPE_2__* FUNC_14 (scalar_t__) ;
 char FUNC_15 (unsigned char) ;
 char* FUNC_16 (char const*,size_t) ;
 char FUNC_17 (unsigned char,int ) ;
 scalar_t__ FUNC_18 (scalar_t__) ;
 scalar_t__ FUNC_19 (scalar_t__,int ) ;
 int VAR_6 ;
 int FUNC_20 (char*,scalar_t__*,size_t,TYPE_2__*) ;

char *
FUNC_21(const char *VAR_7, size_t VAR_8, Oid VAR_9)
{
 char *VAR_10;

 if (!VAR_7)
  return ((void*)0);


 if (FUNC_10(VAR_9))
 {
  VAR_10 = FUNC_1(VAR_7, VAR_8);
 }
 else
 {
  pg_locale_t VAR_11 = 0;

  if (VAR_9 != VAR_1)
  {
   if (!FUNC_0(VAR_9))
   {




    FUNC_3(VAR_4,
      (FUNC_4(VAR_2),
       FUNC_6("could not determine which collation to use for %s function",
        "lower()"),
       FUNC_5("Use the COLLATE clause to set the collation explicitly.")));
   }
   VAR_11 = FUNC_14(VAR_9);
  }
  {
   if (FUNC_13() > 1)
   {
    wchar_t *VAR_12;
    size_t VAR_13;
    size_t VAR_14;


    if ((VAR_8 + 1) > (VAR_5 / sizeof(wchar_t)))
     FUNC_3(VAR_4,
       (FUNC_4(VAR_3),
        FUNC_6("out of memory")));


    VAR_12 = (wchar_t *) FUNC_11((VAR_8 + 1) * sizeof(wchar_t));

    FUNC_2(VAR_12, VAR_8 + 1, VAR_7, VAR_8, VAR_11);

    for (VAR_13 = 0; VAR_12[VAR_13] != 0; VAR_13++)
    {





      VAR_12[VAR_13] = FUNC_18(VAR_12[VAR_13]);
    }





    VAR_14 = VAR_13 * FUNC_13() + 1;
    VAR_10 = FUNC_11(VAR_14);

    FUNC_20(VAR_10, VAR_12, VAR_14, VAR_11);
    FUNC_12(VAR_12);
   }
   else
   {
    char *VAR_15;

    VAR_10 = FUNC_16(VAR_7, VAR_8);
    for (VAR_15 = VAR_10; *VAR_15; VAR_15++)
    {





      *VAR_15 = FUNC_15((unsigned char) *VAR_15);
    }
   }
  }
 }

 return VAR_10;
}
