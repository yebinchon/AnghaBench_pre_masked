
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int TestDb ;
struct TYPE_3__ {int nKey1; int nKey2; int bReverse; scalar_t__ nRow; scalar_t__ cksum1; scalar_t__ cksum2; void* pKey2; void* pKey1; int * pDb; } ;
typedef TYPE_1__ ScanResult ;


 int FUNC_0 (TYPE_1__*,int ,int) ;
 int FUNC_1 (char*,...) ;
 int VAR_0 ;
 int FUNC_2 (int *,void*,int,void*,int,void*,int,int ) ;
 int FUNC_3 (int) ;
 scalar_t__ VAR_1 ;

void FUNC_4(
  TestDb *VAR_2,
  TestDb *VAR_3,
  int VAR_4,
  void *VAR_5, int VAR_6,
  void *VAR_7, int VAR_8,
  int *VAR_9
){
  static int VAR_10 = 0; VAR_10++;
  if( *VAR_9==0 ){
    ScanResult VAR_11;
    ScanResult VAR_12;
    void *VAR_13 = (void *)&VAR_11;
    void *VAR_14 = (void *)&VAR_12;

    FUNC_0(&VAR_11, 0, sizeof(ScanResult));
    FUNC_0(&VAR_12, 0, sizeof(ScanResult));

    VAR_11 = VAR_2;
    VAR_11 = VAR_6; VAR_11 = VAR_5;
    VAR_11 = VAR_8; VAR_11 = VAR_7;
    VAR_11 = VAR_4;
    VAR_12 = VAR_3;
    VAR_12 = VAR_6; VAR_12 = VAR_5;
    VAR_12 = VAR_8; VAR_12 = VAR_7;
    VAR_12 = VAR_4;

    FUNC_2(VAR_2, VAR_13, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_0);
if( VAR_1 ) FUNC_1("\n\n\n");
    FUNC_2(VAR_3, VAR_14, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_0);
if( VAR_1 ) FUNC_1("\n\n\n");

    if( VAR_11!=VAR_12
     || VAR_11!=VAR_12
     || VAR_11!=VAR_12
    ){
      FUNC_1("expected: %d %X %X\n", VAR_11, VAR_11, VAR_11);
      FUNC_1("got:      %d %X %X\n", VAR_12, VAR_12, VAR_12);
      FUNC_3(1);
      *VAR_9 = 1;
    }
  }
}
