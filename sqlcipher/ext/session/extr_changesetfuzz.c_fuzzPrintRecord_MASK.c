
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int sqlite3_int64 ;
struct TYPE_3__ {int nCol; scalar_t__* aPK; } ;
typedef TYPE_1__ FuzzChangesetGroup ;


 int VAR_0 ;
 int FUNC_0 (int*) ;
 int FUNC_1 (int*,int*) ;
 int FUNC_2 (double*,int *,int) ;
 int FUNC_3 (char*,...) ;

__attribute__((used)) static int FUNC_4(FuzzChangesetGroup *VAR_1, u8 **VAR_2, int VAR_3){
  int VAR_4 = VAR_0;
  u8 *VAR_5 = *VAR_2;
  int VAR_6;
  const char *VAR_7 = " (";

  for(VAR_6=0; VAR_6<VAR_1->nCol; VAR_6++){
    if( VAR_3==0 || VAR_1->aPK[VAR_6] ){
      u8 VAR_8 = VAR_5++[0];
      switch( VAR_8 ){
        case 0x00:
          FUNC_3("%sn/a", VAR_7);
          break;

        case 0x01: {
          sqlite3_int64 VAR_9 = 0;
          VAR_9 = FUNC_0(VAR_5);
          FUNC_3("%s%lld", VAR_7, VAR_9);
          VAR_5 += 8;
          break;
        }

        case 0x02: {
          sqlite3_int64 VAR_10 = 0;
          double VAR_11 = 0.0;
          VAR_10 = FUNC_0(VAR_5);
          FUNC_2(&VAR_11, &VAR_10, 8);
          FUNC_3("%s%f", VAR_7, VAR_11);
          VAR_5 += 8;
          break;
        }

        case 0x03:
        case 0x04: {
          int VAR_12;
          VAR_5 += FUNC_1(VAR_5, &VAR_12);
          FUNC_3("%s%s", VAR_7, VAR_8==0x03 ? "'" : "X'");
          for(VAR_6=0; VAR_6<VAR_12; VAR_6++){
            if( VAR_8==0x03 ){
              FUNC_3("%c", VAR_5[VAR_6]);
            }else{
              char VAR_13[16] = {'0', '1', '2', '3', '4', '5', '6', '7',
                               '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'
              };
              FUNC_3("%c", VAR_13[ VAR_5[VAR_6]>>4 ]);
              FUNC_3("%c", VAR_13[ VAR_5[VAR_6] & 0x0F ]);
            }
          }
          FUNC_3("'");
          VAR_5 += VAR_12;
          break;
        }

        case 0x05:
          FUNC_3("%sNULL", VAR_7);
          break;
      }
      VAR_7 = ", ";
    }
  }
  FUNC_3(")");

  *VAR_2 = VAR_5;
  return VAR_4;
}
