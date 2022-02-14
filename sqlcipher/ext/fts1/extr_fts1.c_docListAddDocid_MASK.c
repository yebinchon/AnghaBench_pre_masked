
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int sqlite_int64 ;
struct TYPE_4__ {scalar_t__ iType; scalar_t__ iLastOffset; scalar_t__ iLastPos; scalar_t__ iLastColumn; } ;
typedef TYPE_1__ DocList ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ) ;

__attribute__((used)) static void FUNC_1(DocList *VAR_2, sqlite_int64 VAR_3){
  FUNC_0(VAR_2, VAR_3);
  if( VAR_2->iType>=VAR_0 ){
    FUNC_0(VAR_2, VAR_1);
    VAR_2->iLastColumn = 0;
    VAR_2->iLastPos = VAR_2->iLastOffset = 0;
  }
}
