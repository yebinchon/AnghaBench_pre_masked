
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ sqlite_int64 ;
typedef int fulltext_vtab ;
struct TYPE_5__ {int nData; char* pData; } ;
struct TYPE_6__ {int parentWriter; scalar_t__ iEndBlockid; int has_parent; TYPE_1__ data; } ;
typedef TYPE_2__ LeafWriter ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *,char**,int*,scalar_t__*) ;
 int FUNC_2 (int *,TYPE_2__*) ;

__attribute__((used)) static int FUNC_3(fulltext_vtab *VAR_2, LeafWriter *VAR_3,
                              char **VAR_4, int *VAR_5,
                              sqlite_int64 *VAR_6){

  if( !VAR_3->has_parent && VAR_3->data.nData<VAR_0 ){
    *VAR_4 = VAR_3->data.pData;
    *VAR_5 = VAR_3->data.nData;
    *VAR_6 = 0;
    return VAR_1;
  }


  if( VAR_3->data.nData>0 ){
    int VAR_7 = FUNC_2(VAR_2, VAR_3);
    if( VAR_7!=VAR_1 ) return VAR_7;
  }


  FUNC_0( VAR_3->has_parent );






  *VAR_6 = VAR_3->iEndBlockid;

  return FUNC_1(VAR_2, &VAR_3->parentWriter,
                                VAR_4, VAR_5, VAR_6);
}
