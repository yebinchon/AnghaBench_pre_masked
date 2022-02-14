
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int v ;
typedef void u8 ;
typedef int u32 ;
struct TYPE_6__ {scalar_t__ pVtab; } ;
typedef TYPE_1__ sqlite3_vtab_cursor ;
typedef scalar_t__ sqlite3_uint64 ;
typedef int sqlite3_int64 ;
typedef int sqlite3_context ;
struct TYPE_7__ {scalar_t__ keyType; int nVal; } ;
typedef TYPE_2__ lsm1_vtab ;
struct TYPE_8__ {void* zData; int* aiOfst; int* aiLen; int* aeType; int pLsmCur; } ;
typedef TYPE_3__ lsm1_cursor ;


 scalar_t__ VAR_0 ;



 int VAR_1 ;

 int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (void const*,int,int *) ;
 int FUNC_2 (unsigned char const*,int,scalar_t__*) ;
 scalar_t__ FUNC_3 (int ,void const**,int*) ;
 scalar_t__ FUNC_4 (int ,void const**,int*) ;
 int FUNC_5 (double*,void const*,int) ;
 int FUNC_6 (int *,void const*,int,int ) ;
 int FUNC_7 (int *,double) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int *,char const*,int,int ) ;

__attribute__((used)) static int FUNC_11(
  sqlite3_vtab_cursor *VAR_3,
  sqlite3_context *VAR_4,
  int VAR_5
){
  lsm1_cursor *VAR_6 = (lsm1_cursor*)VAR_3;
  lsm1_vtab *VAR_7 = (lsm1_vtab*)(VAR_3->pVtab);
  if( VAR_5==0 ){

    const void *VAR_8;
    int VAR_9;
    if( FUNC_3(VAR_6->pLsmCur, &VAR_8, &VAR_9)==VAR_0 ){
      if( VAR_7->keyType==131 ){
        FUNC_6(VAR_4, VAR_8, VAR_9, VAR_2);
      }else if( VAR_7->keyType==128 ){
        FUNC_10(VAR_4,(const char*)VAR_8, VAR_9, VAR_2);
      }else{
        const unsigned char *VAR_10 = (const unsigned char*)VAR_8;
        sqlite3_uint64 VAR_11;
        FUNC_2(VAR_10, VAR_9, &VAR_11);
        FUNC_9(VAR_4, (sqlite3_int64)VAR_11);
      }
    }
  }else if( VAR_5>VAR_7->nVal ){
    if( VAR_5==VAR_7->nVal+2 ){
      const void *VAR_12;
      int VAR_13;
      if( FUNC_3(VAR_6->pLsmCur, &VAR_12, &VAR_13)==VAR_0 ){
        FUNC_6(VAR_4, VAR_12, VAR_13, VAR_2);
      }
    }else if( VAR_5==VAR_7->nVal+3 ){
      const void *VAR_14;
      int VAR_15;
      if( FUNC_4(VAR_6->pLsmCur, &VAR_14, &VAR_15)==VAR_0 ){
        FUNC_6(VAR_4, VAR_14, VAR_15, VAR_2);
      }
    }
  }else if( FUNC_0(VAR_6) ){

    const u8 *VAR_16;
    u32 VAR_17;
    VAR_5--;
    VAR_16 = VAR_6->zData + VAR_6->aiOfst[VAR_5];
    VAR_17 = VAR_6->aiLen[VAR_5];
    switch( VAR_6->aeType[VAR_5] ){
      case 0: {
        FUNC_8(VAR_4, VAR_6->aiOfst[VAR_5]);
        break;
      }
      case 129: {
        sqlite3_int64 VAR_18;
        FUNC_1(VAR_16, VAR_17, &VAR_18);
        FUNC_9(VAR_4, VAR_18);
        break;
      }
      case 130: {
        double VAR_19;
        if( VAR_17==sizeof(VAR_19) ){
          FUNC_5(&VAR_19, VAR_16, sizeof(VAR_19));
          FUNC_7(VAR_4, VAR_19);
        }
        break;
      }
      case 128: {
        FUNC_10(VAR_4, (const char*)VAR_16, VAR_17, VAR_2);
        break;
      }
      case 131: {
        FUNC_6(VAR_4, VAR_16, VAR_17, VAR_2);
        break;
      }
      default: {

      }
    }
  }
  return VAR_1;
}
