
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ nFetchOut; scalar_t__ mmapSize; scalar_t__ pMapRegion; scalar_t__ mmapSizeMax; int h; } ;
typedef TYPE_1__ unixFile ;
struct stat {scalar_t__ st_size; } ;
typedef scalar_t__ i64 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ,struct stat*) ;
 int FUNC_2 (TYPE_1__*,scalar_t__) ;

__attribute__((used)) static int FUNC_3(unixFile *VAR_2, i64 VAR_3){
  FUNC_0( VAR_3>=0 || VAR_2->nFetchOut==0 );
  FUNC_0( VAR_3>0 || (VAR_2->mmapSize==0 && VAR_2->pMapRegion==0) );
  if( VAR_2->nFetchOut>0 ) return VAR_1;

  if( VAR_3<0 ){
    struct stat VAR_4;
    if( FUNC_1(VAR_2->h, &VAR_4) ){
      return VAR_0;
    }
    VAR_3 = VAR_4.st_size;
  }
  if( VAR_3>VAR_2->mmapSizeMax ){
    VAR_3 = VAR_2->mmapSizeMax;
  }

  FUNC_0( VAR_3>0 || (VAR_2->mmapSize==0 && VAR_2->pMapRegion==0) );
  if( VAR_3!=VAR_2->mmapSize ){
    FUNC_2(VAR_2, VAR_3);
  }

  return VAR_1;
}
