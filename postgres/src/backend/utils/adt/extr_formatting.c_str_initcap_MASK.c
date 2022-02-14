
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
 int FUNC_10 (unsigned char) ;
 int FUNC_11 (unsigned char,int ) ;
 int FUNC_12 (scalar_t__) ;
 int FUNC_13 (scalar_t__,int ) ;
 scalar_t__ FUNC_14 (scalar_t__) ;
 char* FUNC_15 (size_t) ;
 int FUNC_16 (scalar_t__*) ;
 size_t FUNC_17 () ;
 TYPE_2__* FUNC_18 (scalar_t__) ;
 char FUNC_19 (unsigned char) ;
 char FUNC_20 (unsigned char) ;
 char* FUNC_21 (char const*,size_t) ;
 char FUNC_22 (unsigned char,int ) ;
 char FUNC_23 (unsigned char,int ) ;
 scalar_t__ FUNC_24 (scalar_t__) ;
 scalar_t__ FUNC_25 (scalar_t__,int ) ;
 scalar_t__ FUNC_26 (scalar_t__) ;
 scalar_t__ FUNC_27 (scalar_t__,int ) ;
 int VAR_6 ;
 int FUNC_28 (char*,scalar_t__*,size_t,TYPE_2__*) ;

char *
FUNC_29(const char *VAR_7, size_t VAR_8, Oid VAR_9)
{
 char *VAR_10;
 int VAR_11 = 0;

 if (!VAR_7)
  return ((void*)0);


 if (FUNC_14(VAR_9))
 {
  VAR_10 = FUNC_1(VAR_7, VAR_8);
 }
 else
 {
  pg_locale_t VAR_12 = 0;

  if (VAR_9 != VAR_1)
  {
   if (!FUNC_0(VAR_9))
   {




    FUNC_3(VAR_4,
      (FUNC_4(VAR_2),
       FUNC_6("could not determine which collation to use for %s function",
        "initcap()"),
       FUNC_5("Use the COLLATE clause to set the collation explicitly.")));
   }
   VAR_12 = FUNC_18(VAR_9);
  }
  {
   if (FUNC_17() > 1)
   {
    wchar_t *VAR_13;
    size_t VAR_14;
    size_t VAR_15;


    if ((VAR_8 + 1) > (VAR_5 / sizeof(wchar_t)))
     FUNC_3(VAR_4,
       (FUNC_4(VAR_3),
        FUNC_6("out of memory")));


    VAR_13 = (wchar_t *) FUNC_15((VAR_8 + 1) * sizeof(wchar_t));

    FUNC_2(VAR_13, VAR_8 + 1, VAR_7, VAR_8, VAR_12);

    for (VAR_14 = 0; VAR_13[VAR_14] != 0; VAR_14++)
    {
     {
      if (VAR_11)
       VAR_13[VAR_14] = FUNC_24(VAR_13[VAR_14]);
      else
       VAR_13[VAR_14] = FUNC_26(VAR_13[VAR_14]);
      VAR_11 = FUNC_12(VAR_13[VAR_14]);
     }
    }





    VAR_15 = VAR_14 * FUNC_17() + 1;
    VAR_10 = FUNC_15(VAR_15);

    FUNC_28(VAR_10, VAR_13, VAR_15, VAR_12);
    FUNC_16(VAR_13);
   }
   else
   {
    char *VAR_16;

    VAR_10 = FUNC_21(VAR_7, VAR_8);
    for (VAR_16 = VAR_10; *VAR_16; VAR_16++)
    {
     {
      if (VAR_11)
       *VAR_16 = FUNC_19((unsigned char) *VAR_16);
      else
       *VAR_16 = FUNC_20((unsigned char) *VAR_16);
      VAR_11 = FUNC_10((unsigned char) *VAR_16);
     }
    }
   }
  }
 }

 return VAR_10;
}
