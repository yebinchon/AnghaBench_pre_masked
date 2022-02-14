
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int sqlite3_stmt ;
struct TYPE_6__ {int iVersion; int (* xFetch ) (TYPE_2__*,int,int,void**) ;int (* xUnfetch ) (TYPE_2__*,int,void*) ;} ;
typedef TYPE_1__ sqlite3_io_methods ;
typedef int sqlite3_int64 ;
struct TYPE_7__ {TYPE_1__* pMethods; } ;
typedef TYPE_2__ sqlite3_file ;
typedef int sqlite3 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,char const*) ;
 int FUNC_2 (int *,char*,int ,int ,int ) ;
 int FUNC_3 (int *,char const*,int ,TYPE_2__**) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int,char*,int,int ) ;
 char* FUNC_8 (char*,char*,char const*,char*) ;
 int FUNC_9 (int *,char*,int,int **,int ) ;
 scalar_t__ FUNC_10 (int *) ;
 int FUNC_11 (TYPE_2__*,int,int,void**) ;
 int FUNC_12 (TYPE_2__*,int,void*) ;

int FUNC_13(sqlite3 *VAR_6, const char *VAR_7){
  int VAR_8 = VAR_4;
  char *VAR_9 = 0;
  int VAR_10 = 0;
  int VAR_11 = 0;

  if( 0==FUNC_6(VAR_6) ) return VAR_2;


  VAR_9 = FUNC_8("BEGIN; SELECT * FROM %s%q%ssqlite_master",
      (VAR_7 ? "'" : ""), (VAR_7 ? VAR_7 : ""), (VAR_7 ? "'." : "")
  );
  if( VAR_9==0 ) return VAR_3;
  VAR_8 = FUNC_2(VAR_6, VAR_9, 0, 0, 0);
  FUNC_5(VAR_9);


  if( VAR_8==VAR_4 ){
    VAR_9 = FUNC_8("PRAGMA %s%q%spage_size",
        (VAR_7 ? "'" : ""), (VAR_7 ? VAR_7 : ""), (VAR_7 ? "'." : "")
    );
    if( VAR_9==0 ){
      VAR_8 = VAR_3;
    }else{
      sqlite3_stmt *VAR_12 = 0;
      VAR_8 = FUNC_9(VAR_6, VAR_9, -1, &VAR_12, 0);
      FUNC_5(VAR_9);
      if( VAR_8==VAR_4 ){
        if( FUNC_10(VAR_12)==VAR_5 ){
          VAR_10 = FUNC_0(VAR_12, 0);
        }
        VAR_8 = FUNC_4(VAR_12);
      }
      if( VAR_8==VAR_4 && VAR_10==0 ){
        VAR_8 = VAR_0;
      }
    }
  }


  if( VAR_8==VAR_4 ){
    int VAR_13;
    sqlite3_file *VAR_14 = 0;
    VAR_8 = FUNC_3(VAR_6, VAR_7, VAR_1, &VAR_14);
    if( VAR_8==VAR_4 && VAR_14->pMethods->iVersion>=3 ){
      sqlite3_int64 VAR_15 = 1;
      sqlite3_io_methods const *VAR_16 = VAR_14->pMethods;
      while( 1 ){
        unsigned char *VAR_17;
        VAR_8 = VAR_16->xFetch(VAR_14, VAR_10*VAR_15, VAR_10, (void**)&VAR_17);
        if( VAR_8!=VAR_4 || VAR_17==0 ) break;

        VAR_11 += VAR_17[0];
        VAR_11 += VAR_17[VAR_10-1];

        VAR_8 = VAR_16->xUnfetch(VAR_14, VAR_10*VAR_15, (void*)VAR_17);
        if( VAR_8!=VAR_4 ) break;
        VAR_15++;
      }
      FUNC_7(VAR_4,
          "sqlite3_mmap_warm_cache: Warmed up %d pages of %s", VAR_15==1?0:VAR_15,
          FUNC_1(VAR_6, VAR_7)
      );
    }

    VAR_13 = FUNC_2(VAR_6, "END", 0, 0, 0);
    if( VAR_8==VAR_4 ) VAR_8 = VAR_13;
  }

  return VAR_8;
}
