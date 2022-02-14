
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int member_0; int member_1; } ;
typedef TYPE_1__ POINT ;
typedef scalar_t__ HPEN ;
typedef int HDC ;
typedef scalar_t__ HBRUSH ;
typedef int DWORD ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ,int,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (int ,TYPE_1__*,int ) ;
 int FUNC_6 (int,int ,int) ;
 int FUNC_7 (int ,int,int,int,int) ;
 int FUNC_8 (int ,int,int,int,int,int,int) ;
 scalar_t__ FUNC_9 (int ,scalar_t__) ;
 int FUNC_10 (int ,int ) ;
 int VAR_3 ;
 int FUNC_11 (TYPE_1__*) ;

void FUNC_12 ( HDC VAR_4 )
{
  HPEN VAR_5, VAR_6;
  HBRUSH VAR_7, VAR_8;
  DWORD VAR_9;
  POINT VAR_10[] =
  {
    { 20, 80 },
    { 60, 20 },
    { 90, 80 },
    { 20, 40 },
    { 100, 40 }
  };
  POINT VAR_11[] =
  {
    { 130, 80 },
    { 170, 20 },
    { 200, 80 },
    { 130, 40 },
    { 210, 40 }
  };
  POINT VAR_12[] =
  {
    { 3, 3 },
    { 5, 3 },
    { 3, 5 }
  };
  POINT VAR_13[] =
  {
    { 7, 3 },
    { 7, 7 },
    { 3, 7 },
  };
  POINT VAR_14[] =
  {
    { 1, 15 },
    { 3, 15 },
    { 3, 17 },
    { 1, 17 }
  };
  POINT VAR_15[] =
  {
    { 5, 15 },
    { 7, 15 },
    { 7, 17 },
    { 5, 17 }
  };
  POINT VAR_16[] =
  {
    { 1, 23 },
    { 3, 23 },
    { 3, 25 },
    { 1, 25 }
  };
  POINT VAR_17[] =
  {
    { 5, 23 },
    { 7, 23 },
    { 7, 25 },
    { 5, 25 }
  };
  POINT VAR_18[] =
  {
    { 1, 31 },
    { 3, 31 },
    { 3, 33 },
    { 1, 33 }
  };
  POINT VAR_19[] =
  {
    { 5, 31 },
    { 7, 31 },
    { 7, 33 },
    { 5, 33 }
  };


  VAR_5 = FUNC_1(VAR_2, 1, FUNC_6(0, 0, 0xff));
  FUNC_0(VAR_5);
  VAR_7 = FUNC_2(FUNC_6(0xff, 0, 0));
  FUNC_0(VAR_7);

  VAR_6 = (HPEN)FUNC_9(VAR_4, VAR_5);
  VAR_8 = (HBRUSH)FUNC_9(VAR_4, VAR_7);

  VAR_9 = FUNC_4(VAR_4);

  FUNC_8 ( VAR_4, 32, 8, 48, 24, 8, 8 );

  FUNC_10(VAR_4, VAR_0);
  FUNC_5(VAR_4,VAR_10,FUNC_11(VAR_10));

  FUNC_10(VAR_4, VAR_3);
  FUNC_5(VAR_4,VAR_11,FUNC_11(VAR_11));

  FUNC_7 ( VAR_4, 1, 1, 10, 10 );
  FUNC_5(VAR_4,VAR_12,FUNC_11(VAR_12));
  FUNC_5(VAR_4,VAR_13,FUNC_11(VAR_13));

  FUNC_7 ( VAR_4, 1, 11, 4, 14 );
  FUNC_7 ( VAR_4, 5, 11, 8, 14 );
  FUNC_7 ( VAR_4, 9, 11, 12, 14 );
  FUNC_7 ( VAR_4, 13, 11, 16, 14 );
  FUNC_5(VAR_4,VAR_14,FUNC_11(VAR_14));
  FUNC_5(VAR_4,VAR_15,FUNC_11(VAR_15));
  FUNC_7 ( VAR_4, 1, 19, 4, 22 );
  FUNC_7 ( VAR_4, 5, 19, 8, 22 );
  FUNC_7 ( VAR_4, 9, 19, 12, 22 );
  FUNC_7 ( VAR_4, 13, 19, 16, 22 );
  FUNC_5(VAR_4,VAR_16,FUNC_11(VAR_16));
  FUNC_5(VAR_4,VAR_17,FUNC_11(VAR_17));
  FUNC_7 ( VAR_4, 1, 27, 4, 30 );
  FUNC_7 ( VAR_4, 5, 27, 8, 30 );
  FUNC_7 ( VAR_4, 9, 27, 12, 30 );
  FUNC_7 ( VAR_4, 13, 27, 16, 30 );


  FUNC_3 ( FUNC_9(VAR_4, VAR_6) );
  VAR_5 = FUNC_1 ( VAR_1, 0, 0 );
  FUNC_0(VAR_5);
  VAR_6 = (HPEN)FUNC_9(VAR_4, VAR_5);

  FUNC_5(VAR_4,VAR_18,FUNC_11(VAR_18));
  FUNC_5(VAR_4,VAR_19,FUNC_11(VAR_19));
  FUNC_7 ( VAR_4, 1, 35, 4, 38 );
  FUNC_7 ( VAR_4, 5, 35, 8, 38 );
  FUNC_7 ( VAR_4, 9, 35, 12, 38 );
  FUNC_7 ( VAR_4, 13, 35, 16, 38 );


  FUNC_10(VAR_4, VAR_9);
  FUNC_3 ( FUNC_9(VAR_4, VAR_6) );
  FUNC_3 ( FUNC_9(VAR_4, VAR_8) );
}
