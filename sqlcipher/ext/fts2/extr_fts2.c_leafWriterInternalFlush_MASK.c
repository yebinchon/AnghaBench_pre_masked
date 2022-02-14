
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ sqlite_int64 ;
typedef int fulltext_vtab ;
struct TYPE_4__ {int nData; char* pData; } ;
struct TYPE_5__ {int nTermDistinct; int has_parent; scalar_t__ iEndBlockid; scalar_t__ iStartBlockid; int parentWriter; TYPE_1__ data; } ;
typedef TYPE_2__ LeafWriter ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,char*,int,scalar_t__*) ;
 int FUNC_3 (char*,int*) ;
 int FUNC_4 (int *,char const*,int,scalar_t__) ;
 int FUNC_5 (int,char const*,int,scalar_t__,int *) ;

__attribute__((used)) static int FUNC_6(fulltext_vtab *VAR_1, LeafWriter *VAR_2,
                                   int VAR_3, int VAR_4){
  sqlite_int64 VAR_5 = 0;
  const char *VAR_6;
  int VAR_7, VAR_8, VAR_9;




  FUNC_1( VAR_4>2 );
  FUNC_1( VAR_3>=0 );
  FUNC_1( VAR_3+VAR_4<=VAR_2->data.nData );
  FUNC_0(VAR_2->data.pData+VAR_3, VAR_4);

  VAR_8 = FUNC_2(VAR_1, VAR_2->data.pData+VAR_3, VAR_4, &VAR_5);
  if( VAR_8!=VAR_0 ) return VAR_8;
  FUNC_1( VAR_5!=0 );




  VAR_9 = FUNC_3(VAR_2->data.pData+VAR_3+1, &VAR_7);
  VAR_6 = VAR_2->data.pData+VAR_3+1+VAR_9;
  FUNC_1( VAR_2->data.nData>VAR_3+1+VAR_9+VAR_7 );
  FUNC_1( VAR_2->nTermDistinct>0 );
  FUNC_1( VAR_2->nTermDistinct<=VAR_7 );
  VAR_7 = VAR_2->nTermDistinct;

  if( VAR_2->has_parent ){
    FUNC_4(&VAR_2->parentWriter,
                         VAR_6, VAR_7, VAR_5);
  }else{
    FUNC_5(1, VAR_6, VAR_7, VAR_5,
                       &VAR_2->parentWriter);
    VAR_2->has_parent = 1;
  }


  if( VAR_2->iEndBlockid==0 ){
    VAR_2->iEndBlockid = VAR_2->iStartBlockid = VAR_5;
  }else{
    VAR_2->iEndBlockid++;
    FUNC_1( VAR_5==VAR_2->iEndBlockid );
  }

  return VAR_0;
}
