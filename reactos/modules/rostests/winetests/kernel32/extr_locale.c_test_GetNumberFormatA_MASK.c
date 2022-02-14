
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int format ;
struct TYPE_4__ {int NumDigits; int LeadingZero; int Grouping; char* lpDecimalSep; char* lpThousandSep; void* NegativeOrder; } ;
typedef TYPE_1__ NUMBERFMTA ;
typedef int LCID ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ,char*,TYPE_1__*,char*,int) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_6 (char*,char*) ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_7 (int) ;
 int FUNC_8 (TYPE_1__*,int ,int) ;
 int FUNC_9 (int,char*,int,...) ;

__attribute__((used)) static void FUNC_10(void)
{
  static char VAR_17[] = { '.', '\0' };
  static char VAR_18[] = { ',', '\0' };
  int VAR_19;
  LCID VAR_20 = FUNC_5(FUNC_4(VAR_6, VAR_16), VAR_14);
  char VAR_21[VAR_0], VAR_22[VAR_0], VAR_23[VAR_0];
  NUMBERFMTA VAR_24;

  FUNC_8(&VAR_24, 0, sizeof(VAR_24));

  FUNC_6("23","");
  FUNC_7(0xdeadbeef);
  VAR_19 = FUNC_2(VAR_20, 0, VAR_23, ((void*)0), ((void*)0), FUNC_0(VAR_21));
  FUNC_9( !VAR_19 && FUNC_1() == VAR_3,
      "Expected ERROR_INVALID_PARAMETER, got %d\n", FUNC_1());

  FUNC_6("23,53","");
  FUNC_7(0xdeadbeef);
  VAR_19 = FUNC_2(VAR_20, 0, VAR_23, ((void*)0), VAR_21, FUNC_0(VAR_21));
  FUNC_9( !VAR_19 && FUNC_1() == VAR_3,
      "Expected ERROR_INVALID_PARAMETER, got %d\n", FUNC_1());

  FUNC_6("--","");
  FUNC_7(0xdeadbeef);
  VAR_19 = FUNC_2(VAR_20, 0, VAR_23, ((void*)0), VAR_21, FUNC_0(VAR_21));
  FUNC_9( !VAR_19 && FUNC_1() == VAR_3,
      "Expected ERROR_INVALID_PARAMETER, got %d\n", FUNC_1());

  FUNC_6("0-","");
  FUNC_7(0xdeadbeef);
  VAR_19 = FUNC_2(VAR_20, 0, VAR_23, ((void*)0), VAR_21, FUNC_0(VAR_21));
  FUNC_9( !VAR_19 && FUNC_1() == VAR_3,
      "Expected ERROR_INVALID_PARAMETER, got %d\n", FUNC_1());

  FUNC_6("0..","");
  FUNC_7(0xdeadbeef);
  VAR_19 = FUNC_2(VAR_20, 0, VAR_23, ((void*)0), VAR_21, FUNC_0(VAR_21));
  FUNC_9( !VAR_19 && FUNC_1() == VAR_3,
      "Expected ERROR_INVALID_PARAMETER, got %d\n", FUNC_1());

  FUNC_6(" 0.1","");
  FUNC_7(0xdeadbeef);
  VAR_19 = FUNC_2(VAR_20, 0, VAR_23, ((void*)0), VAR_21, FUNC_0(VAR_21));
  FUNC_9( !VAR_19 && FUNC_1() == VAR_3,
      "Expected ERROR_INVALID_PARAMETER, got %d\n", FUNC_1());

  FUNC_6("1234","1");
  FUNC_7(0xdeadbeef);
  VAR_19 = FUNC_2(VAR_20, VAR_13, VAR_23, ((void*)0), VAR_21, 2);
  FUNC_9( !VAR_19 && FUNC_1() == VAR_1,
      "Expected ERROR_INSUFFICIENT_BUFFER, got %d\n", FUNC_1());

  FUNC_6("2353","");
  FUNC_7(0xdeadbeef);
  VAR_19 = FUNC_2(VAR_20, VAR_13, VAR_23, &VAR_24, VAR_21, FUNC_0(VAR_21));
  FUNC_9( !VAR_19, "Expected ret == 0, got %d\n", VAR_19);
  FUNC_9( FUNC_1() == VAR_2 || FUNC_1() == VAR_3,
      "Expected ERROR_INVALID_FLAGS, got %d\n", FUNC_1());

  FUNC_6("2353","");
  FUNC_7(0xdeadbeef);
  VAR_19 = FUNC_2(VAR_20, 0, VAR_23, &VAR_24, VAR_21, FUNC_0(VAR_21));
  FUNC_9( !VAR_19 && FUNC_1() == VAR_3,
      "Expected ERROR_INVALID_PARAMETER, got %d\n", FUNC_1());

  FUNC_6("2353","2,353.00");
  VAR_19 = FUNC_2(VAR_20, VAR_13, VAR_23, ((void*)0), VAR_21, FUNC_0(VAR_21));
  FUNC_9(VAR_19, "Expected ret != 0, got %d, error %d\n", VAR_19, FUNC_1());
  VAR_5; VAR_4;

  FUNC_6("-2353","-2,353.00");
  VAR_19 = FUNC_2(VAR_20, VAR_13, VAR_23, ((void*)0), VAR_21, FUNC_0(VAR_21));
  FUNC_9(VAR_19, "Expected ret != 0, got %d, error %d\n", VAR_19, FUNC_1());
  VAR_5; VAR_4;

  FUNC_6("-353","-353.00");
  VAR_19 = FUNC_2(VAR_20, VAR_13, VAR_23, ((void*)0), VAR_21, FUNC_0(VAR_21));
  FUNC_9(VAR_19, "Expected ret != 0, got %d, error %d\n", VAR_19, FUNC_1());
  VAR_5; VAR_4;

  FUNC_6("2353.1","2,353.10");
  VAR_19 = FUNC_2(VAR_20, VAR_13, VAR_23, ((void*)0), VAR_21, FUNC_0(VAR_21));
  FUNC_9(VAR_19, "Expected ret != 0, got %d, error %d\n", VAR_19, FUNC_1());
  VAR_5; VAR_4;

  FUNC_6("2353.111","2,353.11");
  VAR_19 = FUNC_2(VAR_20, VAR_13, VAR_23, ((void*)0), VAR_21, FUNC_0(VAR_21));
  FUNC_9(VAR_19, "Expected ret != 0, got %d, error %d\n", VAR_19, FUNC_1());
  VAR_5; VAR_4;

  FUNC_6("2353.119","2,353.12");
  VAR_19 = FUNC_2(VAR_20, VAR_13, VAR_23, ((void*)0), VAR_21, FUNC_0(VAR_21));
  FUNC_9(VAR_19, "Expected ret != 0, got %d, error %d\n", VAR_19, FUNC_1());
  VAR_5; VAR_4;

  VAR_24.NumDigits = 0;
  VAR_24.LeadingZero = 0;
  VAR_24.Grouping = 0;
  VAR_24.NegativeOrder = 0;
  VAR_24.lpDecimalSep = VAR_17;
  VAR_24.lpThousandSep = VAR_18;

  FUNC_6("2353","2353");
  VAR_19 = FUNC_2(VAR_20, 0, VAR_23, &VAR_24, VAR_21, FUNC_0(VAR_21));
  FUNC_9(VAR_19, "Expected ret != 0, got %d, error %d\n", VAR_19, FUNC_1());
  VAR_5; VAR_4;

  VAR_24.NumDigits = 1;
  FUNC_6("2353","2353.0");
  VAR_19 = FUNC_2(VAR_20, 0, VAR_23, &VAR_24, VAR_21, FUNC_0(VAR_21));
  FUNC_9(VAR_19, "Expected ret != 0, got %d, error %d\n", VAR_19, FUNC_1());
  VAR_5; VAR_4;

  VAR_24.Grouping = 2;
  FUNC_6("2353","23,53.0");
  VAR_19 = FUNC_2(VAR_20, 0, VAR_23, &VAR_24, VAR_21, FUNC_0(VAR_21));
  FUNC_9(VAR_19, "Expected ret != 0, got %d, error %d\n", VAR_19, FUNC_1());
  VAR_5; VAR_4;

  FUNC_6("235","235.0");
  VAR_24.Grouping = 3;
  VAR_19 = FUNC_2(VAR_20, 0, VAR_23, &VAR_24, VAR_21, FUNC_0(VAR_21));
  FUNC_9(VAR_19, "Expected ret != 0, got %d, error %d\n", VAR_19, FUNC_1());
  VAR_5; VAR_4;

  FUNC_6("-235","-235.0");
  VAR_24.NegativeOrder = VAR_8;
  VAR_19 = FUNC_2(VAR_20, 0, VAR_23, &VAR_24, VAR_21, FUNC_0(VAR_21));
  FUNC_9(VAR_19, "Expected ret != 0, got %d, error %d\n", VAR_19, FUNC_1());
  VAR_5; VAR_4;

  VAR_24.LeadingZero = 1;
  FUNC_6(".5","0.5");
  VAR_19 = FUNC_2(VAR_20, 0, VAR_23, &VAR_24, VAR_21, FUNC_0(VAR_21));
  FUNC_9(VAR_19, "Expected ret != 0, got %d, error %d\n", VAR_19, FUNC_1());
  VAR_5; VAR_4;

  VAR_24.NegativeOrder = VAR_10;
  FUNC_6("-1","(1.0)");
  VAR_19 = FUNC_2(VAR_20, 0, VAR_23, &VAR_24, VAR_21, FUNC_0(VAR_21));
  FUNC_9(VAR_19, "Expected ret != 0, got %d, error %d\n", VAR_19, FUNC_1());
  VAR_5; VAR_4;

  VAR_24.NegativeOrder = VAR_8;
  FUNC_6("-1","-1.0");
  VAR_19 = FUNC_2(VAR_20, 0, VAR_23, &VAR_24, VAR_21, FUNC_0(VAR_21));
  FUNC_9(VAR_19, "Expected ret != 0, got %d, error %d\n", VAR_19, FUNC_1());
  VAR_5; VAR_4;

  VAR_24.NegativeOrder = VAR_9;
  FUNC_6("-1","- 1.0");
  VAR_19 = FUNC_2(VAR_20, 0, VAR_23, &VAR_24, VAR_21, FUNC_0(VAR_21));
  FUNC_9(VAR_19, "Expected ret != 0, got %d, error %d\n", VAR_19, FUNC_1());
  VAR_5; VAR_4;

  VAR_24.NegativeOrder = VAR_11;
  FUNC_6("-1","1.0-");
  VAR_19 = FUNC_2(VAR_20, 0, VAR_23, &VAR_24, VAR_21, FUNC_0(VAR_21));
  FUNC_9(VAR_19, "Expected ret != 0, got %d, error %d\n", VAR_19, FUNC_1());
  VAR_5; VAR_4;

  VAR_24.NegativeOrder = VAR_12;
  FUNC_6("-1","1.0 -");
  VAR_19 = FUNC_2(VAR_20, 0, VAR_23, &VAR_24, VAR_21, FUNC_0(VAR_21));
  FUNC_9(VAR_19, "Expected ret != 0, got %d, error %d\n", VAR_19, FUNC_1());
  VAR_5; VAR_4;

  VAR_20 = FUNC_5(FUNC_4(VAR_7, VAR_15), VAR_14);

  if (FUNC_3(VAR_20, 0))
  {
    FUNC_6("-12345","-12 345,00");
    VAR_22[3] = 160;
    VAR_19 = FUNC_2(VAR_20, VAR_13, VAR_23, ((void*)0), VAR_21, FUNC_0(VAR_21));
    FUNC_9(VAR_19, "Expected ret != 0, got %d, error %d\n", VAR_19, FUNC_1());
    VAR_5; VAR_4;
  }
}
