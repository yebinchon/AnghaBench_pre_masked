
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int sqlite_int64 ;
typedef int fulltext_vtab ;
struct TYPE_11__ {int nData; int pData; } ;
struct TYPE_10__ {int nData; char* pData; } ;
struct TYPE_13__ {TYPE_2__ term; TYPE_1__ data; struct TYPE_13__* next; } ;
struct TYPE_12__ {struct TYPE_12__* parentWriter; scalar_t__ iHeight; TYPE_4__* last; TYPE_4__* first; } ;
typedef TYPE_3__ InteriorWriter ;
typedef TYPE_4__ InteriorBlock ;


 int FUNC_0 (TYPE_4__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,char*,int,int *) ;
 int FUNC_2 (TYPE_3__*,int ,int ,int ) ;
 int FUNC_3 (scalar_t__,int ,int ,int ,TYPE_3__*) ;
 TYPE_3__* FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(fulltext_vtab *VAR_2, InteriorWriter *VAR_3,
                                  char **VAR_4, int *VAR_5,
                                  sqlite_int64 *VAR_6){
  InteriorBlock *VAR_7 = VAR_3->first;
  sqlite_int64 VAR_8 = 0;
  int VAR_9;


  if( VAR_7==VAR_3->last && VAR_7->data.nData<VAR_0 ){
    *VAR_4 = VAR_7->data.pData;
    *VAR_5 = VAR_7->data.nData;
    return VAR_1;
  }




  FUNC_0(VAR_7);
  VAR_9 = FUNC_1(VAR_2, VAR_7->data.pData, VAR_7->data.nData, &VAR_8);
  if( VAR_9!=VAR_1 ) return VAR_9;
  *VAR_6 = VAR_8;

  VAR_3->parentWriter = FUNC_4(sizeof(*VAR_3->parentWriter));
  FUNC_3(VAR_3->iHeight+1,
                     VAR_7->term.pData, VAR_7->term.nData,
                     VAR_8, VAR_3->parentWriter);




  for(VAR_7=VAR_7->next; VAR_7!=((void*)0); VAR_7=VAR_7->next){
    FUNC_0(VAR_7);
    VAR_9 = FUNC_1(VAR_2, VAR_7->data.pData, VAR_7->data.nData, &VAR_8);
    if( VAR_9!=VAR_1 ) return VAR_9;
    *VAR_6 = VAR_8;

    FUNC_2(VAR_3->parentWriter,
                         VAR_7->term.pData, VAR_7->term.nData, VAR_8);
  }


  return FUNC_5(VAR_2, VAR_3->parentWriter,
                                VAR_4, VAR_5, VAR_6);
}
