
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16 ;
typedef int TIFF ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int *,int ,int,...) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;

__attribute__((used)) static
void FUNC_3(TIFF *VAR_16, int VAR_17, int VAR_18)
{
    int VAR_19 = (8 * VAR_18);
    int VAR_20 = FUNC_0(VAR_17);

    uint16 VAR_21[] = { VAR_0,
                       VAR_0,
                       VAR_0,
                       VAR_0,
                       VAR_0,
                       VAR_0,
                       VAR_0,
                       VAR_0,
                       VAR_0,
                       VAR_0,
                       VAR_0
    };


  switch (VAR_17) {

  case 144:
      FUNC_2(VAR_16, VAR_12, VAR_3);
      FUNC_2(VAR_16, VAR_14, 1);
      FUNC_2(VAR_16, VAR_8, VAR_19);
      break;

  case 128:
      FUNC_2(VAR_16, VAR_12, VAR_4);
      FUNC_2(VAR_16, VAR_14, 3);
      FUNC_2(VAR_16, VAR_8, VAR_19);
      break;

  case 146:
      FUNC_2(VAR_16, VAR_12, VAR_5);
      FUNC_2(VAR_16, VAR_14, 3);
      FUNC_2(VAR_16, VAR_10, 2);
      FUNC_2(VAR_16, VAR_8, VAR_19);
      break;

  case 145:
      FUNC_2(VAR_16, VAR_12, VAR_5);
      FUNC_2(VAR_16, VAR_14, 4);
      FUNC_2(VAR_16, VAR_10, VAR_1);
      FUNC_2(VAR_16, VAR_8, VAR_19);
      break;

  case 143:
      if (VAR_19 == 16)
          FUNC_2(VAR_16, VAR_12, 9);
      else
          FUNC_2(VAR_16, VAR_12, VAR_2);
      FUNC_2(VAR_16, VAR_14, 3);
      FUNC_2(VAR_16, VAR_8, VAR_19);
      break;



  case 136:
  case 135:
  case 134:
  case 133:
  case 132:
  case 131:
  case 130:
  case 129:
  case 142:
  case 141:
  case 140:
  case 139:
  case 138:
  case 137:

      FUNC_2(VAR_16, VAR_12, VAR_5);
      FUNC_2(VAR_16, VAR_14, VAR_20);

      if (VAR_7 && VAR_20 >= 4) {

          FUNC_2(VAR_16, VAR_9, VAR_20 - 4, VAR_21);
          FUNC_2(VAR_16, VAR_10, 1);
          FUNC_2(VAR_16, VAR_11, 4);
      }
      else {
          FUNC_2(VAR_16, VAR_10, 2);
          FUNC_2(VAR_16, VAR_11, VAR_20);
      }

      FUNC_2(VAR_16, VAR_8, VAR_19);
      break;


  default:
      FUNC_1("Unsupported output colorspace");
    }

  if (VAR_15 == 32)
      FUNC_2(VAR_16, VAR_13, VAR_6);
}
