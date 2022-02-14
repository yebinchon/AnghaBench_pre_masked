
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int sqlite_int64 ;
struct TYPE_10__ {scalar_t__ nPendingData; } ;
typedef TYPE_1__ fulltext_vtab ;
struct TYPE_11__ {scalar_t__ nData; int pData; } ;
typedef TYPE_2__ DataBuffer ;
typedef int DLReader ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,scalar_t__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,int ,scalar_t__) ;
 int FUNC_5 (TYPE_2__*,int *,int) ;
 int FUNC_6 (TYPE_1__*,char const*,int,int ,char const*,int,int,TYPE_2__*) ;

__attribute__((used)) static int FUNC_7(fulltext_vtab *VAR_2, const char *VAR_3, int VAR_4,
                       sqlite_int64 VAR_5,
                       const char *VAR_6, int VAR_7, int VAR_8,
                       DataBuffer *VAR_9){
  DataBuffer VAR_10;
  int VAR_11;

  FUNC_0( VAR_4>1 );


  FUNC_0( VAR_2->nPendingData<0 );

  FUNC_2(&VAR_10, 0);
  VAR_11 = FUNC_6(VAR_2, VAR_3, VAR_4, VAR_5,
                      VAR_6, VAR_7, VAR_8, &VAR_10);
  if( VAR_11==VAR_1 && VAR_10.nData>0 ){
    if( VAR_9->nData==0 ){
      DataBuffer VAR_12 = *VAR_9;
      *VAR_9 = VAR_10;
      VAR_10 = VAR_12;
    }else{
      DataBuffer VAR_13;
      DLReader VAR_14[2];

      FUNC_4(&VAR_14[0], VAR_0, VAR_9->pData, VAR_9->nData);
      FUNC_4(&VAR_14[1], VAR_0, VAR_10.pData, VAR_10.nData);
      FUNC_2(&VAR_13, VAR_9->nData+VAR_10.nData);
      FUNC_5(&VAR_13, VAR_14, 2);
      FUNC_1(VAR_9);
      *VAR_9 = VAR_13;
      FUNC_3(&VAR_14[0]);
      FUNC_3(&VAR_14[1]);
    }
  }
  FUNC_1(&VAR_10);
  return VAR_11;
}
