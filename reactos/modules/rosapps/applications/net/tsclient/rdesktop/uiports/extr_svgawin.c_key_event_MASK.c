
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_15 ;
 int FUNC_2 (int ,int ,int,int,int ) ;
 int VAR_16 ;
 int FUNC_3 (int ,int) ;

void FUNC_4(int VAR_17, int VAR_18)
{
  int VAR_19;
  int VAR_20;

  if (!VAR_13)
    return;
  VAR_19 = VAR_17;
  VAR_20 = 0;


  if ((VAR_17 == VAR_11) && VAR_18)
  {
     VAR_14 = !VAR_14;
     FUNC_3(VAR_1, VAR_14);
  }
  if ((VAR_17 == 128) && VAR_18)
  {
     VAR_16 = !VAR_16;
     FUNC_3(VAR_3, VAR_16);
  }

  if ((VAR_17 == VAR_12) && VAR_18)
  {
     VAR_15 = !VAR_15;
     FUNC_3(VAR_2, VAR_15);
  }

  switch (VAR_17)
  {
    case 142: VAR_19 = 0xc8; VAR_20 = VAR_0; break;
    case 145: VAR_19 = 0xd0; VAR_20 = VAR_0; break;
    case 143: VAR_19 = 0xcd; VAR_20 = VAR_0; break;
    case 144: VAR_19 = 0xcb; VAR_20 = VAR_0; break;
    case 135: VAR_19 = 0xd1; VAR_20 = VAR_0; break;
    case 134: VAR_19 = 0xc9; VAR_20 = VAR_0; break;
    case 140: VAR_19 = 0xc7; VAR_20 = VAR_0; break;
    case 141: VAR_19 = 0xcf; VAR_20 = VAR_0; break;
    case 139: VAR_19 = 0xd2; VAR_20 = VAR_0; break;
    case 132: VAR_19 = 0xd3; VAR_20 = VAR_0; break;
    case 138: VAR_19 = 0x35; break;
    case 137: VAR_19 = 0x1c; break;
    case 130: VAR_19 = 0x1d; break;
    case 131: VAR_19 = 0x38; break;
    case 136: VAR_19 = 0x5b; VAR_20 = VAR_0; break;
    case 129: VAR_19 = 0x5c; VAR_20 = VAR_0; break;
    case 127: VAR_19 = 0x5d; VAR_20 = VAR_0; break;
    case 133: VAR_19 = 0x37; VAR_20 = VAR_0; break;
    case 146:
    {
      if (VAR_18)
      {
        VAR_20 = VAR_0;
        FUNC_2(0, VAR_8, VAR_9 | VAR_20, 0x46, 0);
        FUNC_2(0, VAR_8, VAR_9 | VAR_20, 0xc6, 0);
      }
      VAR_19 = 0;
    }
    case 128: VAR_19 = 0x46; break;
    case 112:
    {
      FUNC_2(0, VAR_7, VAR_6 | VAR_4,
                     FUNC_0(), FUNC_1());
      return;
    }
    case 113:
    {
      FUNC_2(0, VAR_7, VAR_6 | VAR_5,
                     FUNC_0(), FUNC_1());
      return;
    }
  }

  if (VAR_18)
    FUNC_2(0, VAR_8, VAR_9 | VAR_20, VAR_19, 0);
  else
    FUNC_2(0, VAR_8, VAR_10 | VAR_20, VAR_19, 0);


}
