
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int i64 ;
struct TYPE_3__ {scalar_t__ szCache; int szPage; int szExtra; } ;
typedef TYPE_1__ PCache ;



__attribute__((used)) static int FUNC_0(PCache *VAR_0){
  if( VAR_0->szCache>=0 ){
    return VAR_0->szCache;
  }else{
    return (int)((-1024*(i64)VAR_0->szCache)/(VAR_0->szPage+VAR_0->szExtra));
  }
}
