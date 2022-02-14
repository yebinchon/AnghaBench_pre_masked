
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


struct fts2HashElem {int dummy; } ;
typedef int sqlite_int64 ;
struct TYPE_21__ {TYPE_5__* pTokenizer; } ;
typedef TYPE_4__ sqlite3_tokenizer_cursor ;
struct TYPE_22__ {TYPE_3__* pModule; } ;
typedef TYPE_5__ sqlite3_tokenizer ;
struct TYPE_23__ {int nPendingData; int pendingTerms; TYPE_5__* pTokenizer; } ;
typedef TYPE_6__ fulltext_vtab ;
struct TYPE_19__ {int nData; } ;
struct TYPE_18__ {int iPrevDocid; } ;
struct TYPE_24__ {TYPE_2__ b; TYPE_1__ dlw; } ;
struct TYPE_20__ {int (* xOpen ) (TYPE_5__*,char const*,int,TYPE_4__**) ;int (* xNext ) (TYPE_4__*,char const**,int*,int*,int*,int*) ;int (* xClose ) (TYPE_4__*) ;} ;
typedef TYPE_7__ DLCollector ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_7__*,int,int,int,int) ;
 TYPE_7__* FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_7__*,int ) ;
 TYPE_7__* FUNC_3 (int *,char const*,int) ;
 int FUNC_4 (int *,char const*,int,TYPE_7__*) ;
 int FUNC_5 (TYPE_5__*,char const*,int,TYPE_4__**) ;
 int FUNC_6 (TYPE_4__*,char const**,int*,int*,int*,int*) ;
 int FUNC_7 (TYPE_4__*) ;

__attribute__((used)) static int FUNC_8(fulltext_vtab *VAR_4, sqlite_int64 VAR_5,
                      const char *VAR_6, int VAR_7){
  sqlite3_tokenizer *VAR_8 = VAR_4->pTokenizer;
  sqlite3_tokenizer_cursor *VAR_9;
  const char *VAR_10;
  int VAR_11;
  int VAR_12, VAR_13, VAR_14;
  int VAR_15;

  VAR_15 = VAR_8->pModule->xOpen(VAR_8, VAR_6, -1, &VAR_9);
  if( VAR_15!=VAR_3 ) return VAR_15;

  VAR_9->pTokenizer = VAR_8;
  while( VAR_3==(VAR_15=VAR_8->pModule->xNext(VAR_9,
                                                   &VAR_10, &VAR_11,
                                                   &VAR_12, &VAR_13,
                                                   &VAR_14)) ){
    DLCollector *VAR_16;
    int VAR_17;



    if( VAR_14<0 || VAR_10 == ((void*)0) || VAR_11 == 0 ){
      VAR_15 = VAR_2;
      break;
    }

    VAR_16 = FUNC_3(&VAR_4->pendingTerms, VAR_10, VAR_11);
    if( VAR_16==((void*)0) ){
      VAR_17 = 0;
      VAR_16 = FUNC_1(VAR_5, VAR_0);
      FUNC_4(&VAR_4->pendingTerms, VAR_10, VAR_11, VAR_16);


      VAR_4->nPendingData += sizeof(struct fts2HashElem)+sizeof(*VAR_16)+VAR_11;
    }else{
      VAR_17 = VAR_16->b.nData;
      if( VAR_16->dlw.iPrevDocid!=VAR_5 ) FUNC_2(VAR_16, VAR_5);
    }
    if( VAR_7>=0 ){
      FUNC_0(VAR_16, VAR_7, VAR_14, VAR_12, VAR_13);
    }


    VAR_4->nPendingData += VAR_16->b.nData-VAR_17;
  }






  VAR_8->pModule->xClose(VAR_9);
  if( VAR_1 == VAR_15 ) return VAR_3;
  return VAR_15;
}
