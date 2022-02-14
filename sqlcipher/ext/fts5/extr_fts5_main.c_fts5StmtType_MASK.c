
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ ePlan; scalar_t__ bDesc; } ;
typedef TYPE_1__ Fts5Cursor ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_0(Fts5Cursor *VAR_4){
  if( VAR_4->ePlan==VAR_0 ){
    return (VAR_4->bDesc) ? VAR_3 : VAR_2;
  }
  return VAR_1;
}
