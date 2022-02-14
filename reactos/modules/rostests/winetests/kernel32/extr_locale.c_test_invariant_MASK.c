
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct invariant_entry {int id; char const* expect; char const* expect2; scalar_t__ name; } ;
typedef int buffer ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int,char*,int) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_5 (int ,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 struct invariant_entry* VAR_10 ;
 int FUNC_6 (char const*) ;
 int FUNC_7 (int,char*,...) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*,char const*) ;
 int FUNC_10 (char const*) ;
 int FUNC_11 (char*) ;

__attribute__((used)) static void FUNC_12(void)
{
  int VAR_11;
  int VAR_12;
  char VAR_13[VAR_0];
  const struct invariant_entry *VAR_14 = VAR_10;

  if (!FUNC_1(VAR_2, VAR_8|VAR_4, VAR_13, sizeof(VAR_13)))
  {
      FUNC_11("GetLocaleInfoA(LOCALE_INVARIANT) not supported\n");
      return;
  }

  while (VAR_14->name)
  {
    VAR_11 = FUNC_1(VAR_2, VAR_8|VAR_14->id, VAR_13, sizeof(VAR_13));
    if (!VAR_11 && (VAR_14->id == VAR_5 || VAR_14->id == VAR_6))
        FUNC_11("not supported\n");
    else
    {
        VAR_12 = FUNC_10(VAR_14->expect)+1;
        FUNC_7(VAR_11 == VAR_12 || (VAR_14->expect2 && VAR_11 == FUNC_10(VAR_14->expect2)+1),
           "For id %d, expected ret == %d, got %d, error %d\n",
            VAR_14->id, VAR_12, VAR_11, FUNC_0());
        FUNC_7(!FUNC_9(VAR_13, VAR_14->expect) || (VAR_14->expect2 && !FUNC_9(VAR_13, VAR_14->expect2)),
           "For id %d, Expected %s, got '%s'\n",
            VAR_14->id, VAR_14->expect, VAR_13);
    }

    VAR_14++;
  }

 if ((FUNC_4(FUNC_2()) != FUNC_5(VAR_1, VAR_9)) ||
     (FUNC_4(FUNC_3()) != FUNC_5(VAR_1, VAR_9)))
  {
      FUNC_8("Non US-English locale\n");
  }
  else
  {

    static const char VAR_15[] = "Invariant Language (Invariant Country)";
    static const char VAR_16[] = "Invariant Country";
    static const char VAR_17[] = "Math Alphanumerics";
    static const char VAR_18[] = "Default";

    VAR_11 = FUNC_1(VAR_2, VAR_8|VAR_4, VAR_13, sizeof(VAR_13));
    VAR_12 = FUNC_6(VAR_15) + 1;
    FUNC_7(VAR_11 == VAR_12, "Expected ret == %d, got %d, error %d\n", VAR_12, VAR_11, FUNC_0());
    FUNC_7(!FUNC_9(VAR_13, VAR_15), "Expected %s, got '%s'\n", VAR_15, VAR_13);

    VAR_11 = FUNC_1(VAR_2, VAR_8|VAR_3, VAR_13, sizeof(VAR_13));
    VAR_12 = FUNC_6(VAR_16) + 1;
    FUNC_7(VAR_11 == VAR_12, "Expected ret == %d, got %d, error %d\n", VAR_12, VAR_11, FUNC_0());
    FUNC_7(!FUNC_9(VAR_13, VAR_16), "Expected %s, got '%s'\n", VAR_16, VAR_13);

    VAR_11 = FUNC_1(VAR_2, VAR_8|VAR_7, VAR_13, sizeof(VAR_13));
    if (VAR_11 == FUNC_6(VAR_17)+1)
        FUNC_7(!FUNC_9(VAR_13, VAR_17), "Expected %s, got '%s'\n", VAR_17, VAR_13);
    else if (VAR_11 == FUNC_6(VAR_18)+1)
        FUNC_7(!FUNC_9(VAR_13, VAR_18), "Expected %s, got '%s'\n", VAR_18, VAR_13);
    else
        FUNC_7(0, "Expected ret == %d or %d, got %d, error %d\n",
            FUNC_6(VAR_17)+1, FUNC_6(VAR_18)+1, VAR_11, FUNC_0());
  }
}
