
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ wMilliseconds; scalar_t__ wSecond; scalar_t__ wMinute; scalar_t__ wHour; } ;
typedef TYPE_1__ SYSTEMTIME ;
typedef char OLECHAR ;
typedef int LCID ;
typedef scalar_t__ HRESULT ;
typedef double DATE ;


 size_t FUNC_0 (char**) ;
 char** VAR_0 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (double) ;
 int VAR_1 ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_7 (char*,int ,int ,double*) ;

__attribute__((used)) static void FUNC_8(void)
{
  LCID VAR_11;
  DATE VAR_12, VAR_13;
  HRESULT VAR_14;
  SYSTEMTIME VAR_15;
  OLECHAR VAR_16[128];
  size_t VAR_17;
  OLECHAR VAR_18[] = { '6','/','3','0','/','2','0','1','1',0x3000,
                                        '1',':','2','0',':','3','4',0 };

  VAR_11 = FUNC_5(FUNC_4(VAR_2,VAR_7),VAR_6);


  FUNC_3(&VAR_15);
  VAR_15.wHour = VAR_15.wMinute = VAR_15.wSecond = VAR_15.wMilliseconds = 0;
  FUNC_1(((void*)0)); VAR_1;


  FUNC_1("0.0");
  if (VAR_14 == VAR_10)
    FUNC_2(0.0);
  else
    VAR_1;


  FUNC_1("1 am"); FUNC_2(0.04166666666666666);




  FUNC_1("0.1"); FUNC_2(0.0006944444444444445);
  FUNC_1("0.40"); FUNC_2(0.02777777777777778);
  FUNC_1("2.5"); FUNC_2(0.08680555555555555);

  FUNC_1("0:1"); FUNC_2(0.0006944444444444445);
  FUNC_1("0:20"); FUNC_2(0.01388888888888889);
  FUNC_1("0:40"); FUNC_2(0.02777777777777778);
  FUNC_1("3:5"); FUNC_2(0.1284722222222222);

  FUNC_1("00:00 AM"); FUNC_2(0.0);
  FUNC_1("00:00 a"); FUNC_2(0.0);
  FUNC_1("12:59 AM"); FUNC_2(0.04097222222222222);
  FUNC_1("12:59 A"); FUNC_2(0.04097222222222222);
  FUNC_1("00:00 pm"); FUNC_2(0.5);
  FUNC_1("00:00 p"); FUNC_2(0.5);
  FUNC_1("12:59 pm"); FUNC_2(0.5409722222222222);
  FUNC_1("12:59 p"); FUNC_2(0.5409722222222222);

  FUNC_1("13:00 AM"); FUNC_2(0.5416666666666666);
  FUNC_1("13:00 PM"); FUNC_2(0.5416666666666666);



  FUNC_1("1 2"); FUNC_6(2,1); FUNC_2(VAR_13);
  FUNC_1("2 1"); FUNC_6(1,2); FUNC_2(VAR_13);



  FUNC_1("14 1"); FUNC_6(14,1); FUNC_2(VAR_13);
  FUNC_1("1 14"); FUNC_2(VAR_13);

  FUNC_1("30 2"); FUNC_2(10990.0);
  FUNC_1("2 30"); FUNC_2(10990.0);
  FUNC_1("32 49"); VAR_1;
  FUNC_1("0 49"); VAR_1;

  FUNC_1("Jan 2"); FUNC_6(2,1); FUNC_2(VAR_13);
  FUNC_1("2 Jan"); FUNC_2(VAR_13);

  FUNC_1("Jan 35"); FUNC_2(12785.0);
  FUNC_1("35 Jan"); FUNC_2(12785.0);
  FUNC_1("Jan-35"); FUNC_2(12785.0);
  FUNC_1("35-Jan"); FUNC_2(12785.0);
  FUNC_1("Jan/35"); FUNC_2(12785.0);
  FUNC_1("35/Jan"); FUNC_2(12785.0);


  FUNC_1("0.1.0"); FUNC_2(0.0006944444444444445);
  FUNC_1("1.5.2"); FUNC_2(0.04516203703703704);

  FUNC_1("1 2 3"); FUNC_2(37623.0);
  FUNC_1("14 2 3"); FUNC_2(41673.0);
  FUNC_1("2 14 3"); FUNC_2(37666.0);
  FUNC_1("2 3 14"); FUNC_2(41673.0);
  FUNC_1("32 2 3"); FUNC_2(11722.0);
  FUNC_1("2 3 32"); FUNC_2(11722.0);
  FUNC_1("1 2 29"); FUNC_2(47120.0);

  FUNC_1("1 2 30"); FUNC_2(10960.0);
  FUNC_1("1 2 31"); FUNC_2(11325.0);
  FUNC_1("3 am 1 2"); FUNC_6(2,1); VAR_13 += 0.125; FUNC_2(VAR_13);
  FUNC_1("1 2 3 am"); FUNC_2(VAR_13);


  FUNC_1("1.2 3 4"); FUNC_6(4,3); VAR_13 += 0.04305555556; FUNC_2(VAR_13);
  FUNC_1("3 4 1.2"); FUNC_2(VAR_13);

  FUNC_1("1.2.3 4 5"); FUNC_6(5,4); VAR_13 += 0.04309027778; FUNC_2(VAR_13);
  FUNC_1("1.2 3 4 5"); FUNC_2(38415.04305555556);




  FUNC_1("1 2 3 4.5"); FUNC_2(37623.17013888889);

  FUNC_1("1.2.3 4 5 6"); FUNC_2(38812.04309027778);
  FUNC_1("1 2 3 4.5.6"); FUNC_2(37623.17020833334);

  for (VAR_17 = 0; VAR_17 < FUNC_0(VAR_0); VAR_17++)
  {
    FUNC_1(VAR_0[VAR_17]); VAR_1;
  }


  FUNC_1("2 January, 1970"); FUNC_2(25570.0);
  FUNC_1("2 January 1970"); FUNC_2(25570.0);
  FUNC_1("2 Jan 1970"); FUNC_2(25570.0);
  FUNC_1("2/Jan/1970"); FUNC_2(25570.0);
  FUNC_1("2-Jan-1970"); FUNC_2(25570.0);
  FUNC_1("1 2 1970"); FUNC_2(25570.0);
  FUNC_1("1/2/1970"); FUNC_2(25570.0);
  FUNC_1("1-2-1970"); FUNC_2(25570.0);
  FUNC_1("13-1-1970"); FUNC_2(25581.0);
  FUNC_1("1970-1-13"); FUNC_2(25581.0);
  FUNC_1("6/30/2011 01:20:34"); FUNC_2(40724.05594907407);
  FUNC_1("6/30/2011 01:20:34 AM"); FUNC_2(40724.05594907407);
  FUNC_1("6/30/2011 01:20:34 PM"); FUNC_2(40724.55594907407);
  FUNC_1("2013-05-14 02:04:12"); FUNC_2(41408.08625000001);
  FUNC_1("2013-05-14 02:04:12.017000000"); VAR_1;



  VAR_12 = 0.0;
  VAR_14 = FUNC_7(VAR_18, VAR_11, VAR_5, &VAR_12);
  FUNC_2(40724.05594907407);


  FUNC_1("02.01.1970"); VAR_1;
  FUNC_1("02.01.1970 00:00:00"); VAR_1;
  VAR_11 = FUNC_5(FUNC_4(VAR_3,VAR_8),VAR_6);
  FUNC_1("02.01.1970"); FUNC_2(25570.0);
  FUNC_1("02.13.1970"); FUNC_2(25612.0);
  FUNC_1("02-13-1970"); FUNC_2(25612.0);
  FUNC_1("2020-01-11"); FUNC_2(43841.0);
  FUNC_1("2173-10-14"); FUNC_2(100000.0);

  FUNC_1("02.01.1970 00:00:00"); FUNC_2(25570.0);
  VAR_11 = FUNC_5(FUNC_4(VAR_4,VAR_9),VAR_6);
  FUNC_1("02.01.1970"); VAR_1;
  FUNC_1("02.01.1970 00:00:00"); VAR_1;
}
