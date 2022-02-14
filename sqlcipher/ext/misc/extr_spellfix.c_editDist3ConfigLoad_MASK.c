
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef void* u8 ;
typedef scalar_t__ u16 ;
typedef int sqlite3_stmt ;
typedef int sqlite3 ;
struct TYPE_13__ {int nLang; TYPE_1__* a; } ;
struct TYPE_12__ {struct TYPE_12__* pNext; scalar_t__ a; scalar_t__ iCost; void* nTo; void* nFrom; } ;
struct TYPE_11__ {int iLang; int iInsCost; int iDelCost; int iSubCost; TYPE_2__* pCost; } ;
typedef TYPE_1__ EditDist3Lang ;
typedef TYPE_2__ EditDist3Cost ;
typedef TYPE_3__ EditDist3Config ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*) ;
 TYPE_2__* FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (scalar_t__,char const*,int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int) ;
 scalar_t__ FUNC_6 (int *,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (char*) ;
 TYPE_2__* FUNC_9 (int) ;
 char* FUNC_10 (char*,char const*) ;
 int FUNC_11 (int *,char*,int,int **,int ) ;
 TYPE_1__* FUNC_12 (TYPE_1__*,int) ;
 scalar_t__ FUNC_13 (int *) ;

__attribute__((used)) static int FUNC_14(
  EditDist3Config *VAR_3,
  sqlite3 *VAR_4,
  const char *VAR_5
){
  sqlite3_stmt *VAR_6;
  int VAR_7, VAR_8;
  char *VAR_9;
  int VAR_10 = -9999;
  EditDist3Lang *VAR_11 = 0;

  VAR_9 = FUNC_10("SELECT iLang, cFrom, cTo, iCost"
                         " FROM \"%w\" WHERE iLang>=0 ORDER BY iLang", VAR_5);
  if( VAR_9==0 ) return VAR_0;
  VAR_7 = FUNC_11(VAR_4, VAR_9, -1, &VAR_6, 0);
  FUNC_8(VAR_9);
  if( VAR_7 ) return VAR_7;
  FUNC_1(VAR_3);
  while( FUNC_13(VAR_6)==VAR_2 ){
    int VAR_12 = FUNC_5(VAR_6, 0);
    const char *VAR_13 = (const char*)FUNC_6(VAR_6, 1);
    int VAR_14 = VAR_13 ? FUNC_4(VAR_6, 1) : 0;
    const char *VAR_15 = (const char*)FUNC_6(VAR_6, 2);
    int VAR_16 = VAR_15 ? FUNC_4(VAR_6, 2) : 0;
    int VAR_17 = FUNC_5(VAR_6, 3);

    FUNC_0( VAR_13!=0 || VAR_14==0 );
    FUNC_0( VAR_15!=0 || VAR_16==0 );
    if( VAR_14>100 || VAR_16>100 ) continue;
    if( VAR_17<0 ) continue;
    if( VAR_17>=10000 ) continue;
    if( VAR_11==0 || VAR_12!=VAR_10 ){
      EditDist3Lang *VAR_18;
      VAR_18 = FUNC_12(VAR_3->a, (VAR_3->nLang+1)*sizeof(VAR_3->a[0]));
      if( VAR_18==0 ){ VAR_7 = VAR_0; break; }
      VAR_3->a = VAR_18;
      VAR_11 = &VAR_3->a[VAR_3->nLang];
      VAR_3->nLang++;
      VAR_11->iLang = VAR_12;
      VAR_11->iInsCost = 100;
      VAR_11->iDelCost = 100;
      VAR_11->iSubCost = 150;
      VAR_11->pCost = 0;
      VAR_10 = VAR_12;
    }
    if( VAR_14==1 && VAR_13[0]=='?' && VAR_16==0 ){
      VAR_11->iDelCost = VAR_17;
    }else if( VAR_14==0 && VAR_16==1 && VAR_15[0]=='?' ){
      VAR_11->iInsCost = VAR_17;
    }else if( VAR_14==1 && VAR_16==1 && VAR_13[0]=='?' && VAR_15[0]=='?' ){
      VAR_11->iSubCost = VAR_17;
    }else{
      EditDist3Cost *VAR_19;
      int VAR_20 = VAR_14 + VAR_16 - 4;
      if( VAR_20<0 ) VAR_20 = 0;
      VAR_19 = FUNC_9( sizeof(*VAR_19) + VAR_20 );
      if( VAR_19==0 ){ VAR_7 = VAR_0; break; }
      VAR_19->nFrom = (u8)VAR_14;
      VAR_19->nTo = (u8)VAR_16;
      VAR_19->iCost = (u16)VAR_17;
      FUNC_3(VAR_19->a, VAR_13, VAR_14);
      FUNC_3(VAR_19->a + VAR_14, VAR_15, VAR_16);
      VAR_19->pNext = VAR_11->pCost;
      VAR_11->pCost = VAR_19;
    }
  }
  VAR_8 = FUNC_7(VAR_6);
  if( VAR_7==VAR_1 ) VAR_7 = VAR_8;
  if( VAR_7==VAR_1 ){
    int VAR_21;
    for(VAR_21=0; VAR_21<VAR_3->nLang; VAR_21++){
      VAR_3->a[VAR_21].pCost = FUNC_2(VAR_3->a[VAR_21].pCost);
    }
  }
  return VAR_7;
}
