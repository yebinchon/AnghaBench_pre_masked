
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ iIn; scalar_t__ nIn; scalar_t__ in; scalar_t__ zIn; } ;
typedef TYPE_1__ CsvReader ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_1(CsvReader *VAR_1){
  if( VAR_1->iIn >= VAR_1->nIn ){
    if( VAR_1->in!=0 ) return FUNC_0(VAR_1);
    return VAR_0;
  }
  return ((unsigned char*)VAR_1->zIn)[VAR_1->iIn++];
}
