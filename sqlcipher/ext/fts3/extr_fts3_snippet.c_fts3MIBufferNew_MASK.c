
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int sqlite3_int64 ;
struct TYPE_5__ {int* aMatchinfo; int nElem; char* zMatchinfo; int* aRef; } ;
typedef TYPE_1__ MatchinfoBuffer ;


 int FUNC_0 (char*,char const*,int) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 TYPE_1__* FUNC_2 (int) ;
 int FUNC_3 (char const*) ;

__attribute__((used)) static MatchinfoBuffer *FUNC_4(size_t VAR_0, const char *VAR_1){
  MatchinfoBuffer *VAR_2;
  sqlite3_int64 VAR_3 = sizeof(u32) * (2*(sqlite3_int64)VAR_0 + 1)
                           + sizeof(MatchinfoBuffer);
  sqlite3_int64 VAR_4 = FUNC_3(VAR_1);

  VAR_2 = FUNC_2(VAR_3 + VAR_4+1);
  if( VAR_2 ){
    FUNC_1(VAR_2, 0, VAR_3);
    VAR_2->aMatchinfo[0] = (u8*)(&VAR_2->aMatchinfo[1]) - (u8*)VAR_2;
    VAR_2->aMatchinfo[1+VAR_0] = VAR_2->aMatchinfo[0]
                                      + sizeof(u32)*((int)VAR_0+1);
    VAR_2->nElem = (int)VAR_0;
    VAR_2->zMatchinfo = ((char*)VAR_2) + VAR_3;
    FUNC_0(VAR_2->zMatchinfo, VAR_1, VAR_4+1);
    VAR_2->aRef[0] = 1;
  }

  return VAR_2;
}
