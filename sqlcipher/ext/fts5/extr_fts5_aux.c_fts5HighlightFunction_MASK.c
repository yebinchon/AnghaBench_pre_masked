
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int sqlite3_value ;
typedef int sqlite3_context ;
struct TYPE_8__ {int (* xColumnText ) (int *,int,int **,scalar_t__*) ;int (* xTokenize ) (int *,int *,scalar_t__,void*,int ) ;} ;
struct TYPE_7__ {char const* zOpen; char const* zClose; size_t iOff; scalar_t__ zOut; scalar_t__ nIn; int * zIn; int iter; } ;
typedef TYPE_1__ HighlightContext ;
typedef TYPE_2__ Fts5ExtensionApi ;
typedef int Fts5Context ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__ const*,int *,int,int *) ;
 int FUNC_1 (int*,TYPE_1__*,int *,scalar_t__) ;
 int VAR_2 ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *,char const*,int) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,char const*,int,int ) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (int *,int,int **,scalar_t__*) ;
 int FUNC_10 (int *,int *,scalar_t__,void*,int ) ;

__attribute__((used)) static void FUNC_11(
  const Fts5ExtensionApi *VAR_3,
  Fts5Context *VAR_4,
  sqlite3_context *VAR_5,
  int VAR_6,
  sqlite3_value **VAR_7
){
  HighlightContext VAR_8;
  int VAR_9;
  int VAR_10;

  if( VAR_6!=3 ){
    const char *VAR_11 = "wrong number of arguments to function highlight()";
    FUNC_4(VAR_5, VAR_11, -1);
    return;
  }

  VAR_10 = FUNC_7(VAR_7[0]);
  FUNC_2(&VAR_8, 0, sizeof(HighlightContext));
  VAR_8.zOpen = (const char*)FUNC_8(VAR_7[1]);
  VAR_8.zClose = (const char*)FUNC_8(VAR_7[2]);
  VAR_9 = VAR_3->xColumnText(VAR_4, VAR_10, &VAR_8.zIn, &VAR_8.nIn);

  if( VAR_8.zIn ){
    if( VAR_9==VAR_0 ){
      VAR_9 = FUNC_0(VAR_3, VAR_4, VAR_10, &VAR_8.iter);
    }

    if( VAR_9==VAR_0 ){
      VAR_9 = VAR_3->xTokenize(VAR_4, VAR_8.zIn, VAR_8.nIn, (void*)&VAR_8,VAR_2);
    }
    FUNC_1(&VAR_9, &VAR_8, &VAR_8.zIn[VAR_8.iOff], VAR_8.nIn - VAR_8.iOff);

    if( VAR_9==VAR_0 ){
      FUNC_6(VAR_5, (const char*)VAR_8.zOut, -1, VAR_1);
    }
    FUNC_3(VAR_8.zOut);
  }
  if( VAR_9!=VAR_0 ){
    FUNC_5(VAR_5, VAR_9);
  }
}
