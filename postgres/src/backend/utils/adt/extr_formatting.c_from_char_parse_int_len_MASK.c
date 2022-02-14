
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* key; int suffix; } ;
struct TYPE_6__ {int name; } ;
typedef TYPE_2__ FormatNode ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 long VAR_6 ;
 long VAR_7 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,char*,...) ;
 scalar_t__ VAR_8 ;
 int FUNC_8 (int*,int,TYPE_2__*,int*) ;
 scalar_t__ FUNC_9 (TYPE_2__*) ;
 scalar_t__ FUNC_10 (char*,char*,int const) ;
 int FUNC_11 (char*) ;
 long FUNC_12 (char*,char**,int) ;

__attribute__((used)) static int
FUNC_13(int *VAR_9, char **VAR_10, const int VAR_11, FormatNode *VAR_12,
      bool *VAR_13)
{
 long VAR_14;
 char VAR_15[VAR_1 + 1];
 char *VAR_16 = *VAR_10;
 int VAR_17;




 *VAR_10 += FUNC_11(*VAR_10);

 FUNC_0(VAR_11 <= VAR_1);
 VAR_17 = (int) FUNC_10(VAR_15, *VAR_10, VAR_11 + 1);

 if (FUNC_2(VAR_12->suffix) || FUNC_9(VAR_12))
 {




  VAR_8 = 0;
  VAR_14 = FUNC_12(VAR_16, VAR_10, 10);
 }
 else
 {




  char *VAR_18;

  if (VAR_17 < VAR_11)
   FUNC_1(FUNC_3(VAR_5,
         (FUNC_4(VAR_4),
          FUNC_7("source string too short for \"%s\" "
           "formatting field",
           VAR_12->key->name),
          FUNC_5("Field requires %d characters, "
           "but only %d remain.",
           VAR_11, VAR_17),
          FUNC_6("If your source string is not fixed-width, "
            "try using the \"FM\" modifier."))));

  VAR_8 = 0;
  VAR_14 = FUNC_12(VAR_15, &VAR_18, 10);
  VAR_17 = VAR_18 - VAR_15;

  if (VAR_17 > 0 && VAR_17 < VAR_11)
   FUNC_1(FUNC_3(VAR_5,
         (FUNC_4(VAR_4),
          FUNC_7("invalid value \"%s\" for \"%s\"",
           VAR_15, VAR_12->key->name),
          FUNC_5("Field requires %d characters, "
           "but only %d could be parsed.",
           VAR_11, VAR_17),
          FUNC_6("If your source string is not fixed-width, "
            "try using the \"FM\" modifier."))));

  *VAR_10 += VAR_17;
 }

 if (*VAR_10 == VAR_16)
  FUNC_1(FUNC_3(VAR_5,
        (FUNC_4(VAR_4),
         FUNC_7("invalid value \"%s\" for \"%s\"",
          VAR_15, VAR_12->key->name),
         FUNC_5("Value must be an integer."))));

 if (VAR_8 == VAR_2 || VAR_14 < VAR_7 || VAR_14 > VAR_6)
  FUNC_1(FUNC_3(VAR_5,
        (FUNC_4(VAR_3),
         FUNC_7("value for \"%s\" in source string is out of range",
          VAR_12->key->name),
         FUNC_5("Value must be in the range %d to %d.",
          VAR_7, VAR_6))));

 if (VAR_9 != ((void*)0))
 {
  FUNC_8(VAR_9, (int) VAR_14, VAR_12, VAR_13);
  VAR_0;
 }

 return *VAR_10 - VAR_16;

on_error:
 return -1;
}
