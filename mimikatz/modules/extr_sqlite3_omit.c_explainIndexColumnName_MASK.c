
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int* aiColumn; TYPE_2__* pTable; } ;
struct TYPE_6__ {TYPE_1__* aCol; } ;
struct TYPE_5__ {char const* zName; } ;
typedef TYPE_3__ Index ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static const char *FUNC_0(Index *VAR_2, int VAR_3){
  VAR_3 = VAR_2->aiColumn[VAR_3];
  if( VAR_3==VAR_0 ) return "<expr>";
  if( VAR_3==VAR_1 ) return "rowid";
  return VAR_2->pTable->aCol[VAR_3].zName;
}
