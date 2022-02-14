
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;


 int * VAR_5 ;
 int * VAR_6 ;
 int * VAR_7 ;
 int * VAR_8 ;
 int * VAR_9 ;
 int FUNC_1 (int ) ;
 int VAR_10 ;

 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;



__attribute__((used)) static void
FUNC_2 (int VAR_14, int VAR_15)
{
  int VAR_16 = 0;
  FUNC_0 (VAR_3);
  if (VAR_12 & VAR_3)
    VAR_16 += 8;
  switch (VAR_14)
    {
    case 132:
      FUNC_0 (0);
      if (VAR_12)
 FUNC_1 (VAR_9[VAR_11 + VAR_16]);
      else
 FUNC_1 (VAR_8[VAR_11 + VAR_16]);
      break;
    case 128:
      FUNC_1 (VAR_5[VAR_11 + VAR_16]);
      break;
    case 131:
      FUNC_1 (VAR_6[VAR_11 + VAR_16]);
      break;
    case 130:
      FUNC_1 (VAR_7[VAR_11 + VAR_16]);
      break;
    case 129:
      FUNC_0 (VAR_4);
      if (VAR_12 & VAR_4)
 FUNC_1 (VAR_7[VAR_11 + VAR_16]);
      else if (VAR_15 & VAR_0)
 FUNC_1 (VAR_6[VAR_11 + VAR_16]);
      else
 FUNC_1 (VAR_5[VAR_11 + VAR_16]);
      VAR_13 |= (VAR_10 & VAR_2);
      break;
    default:
      FUNC_1 (VAR_1);
      break;
    }
}
