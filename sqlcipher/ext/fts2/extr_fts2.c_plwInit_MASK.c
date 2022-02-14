
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ sqlite_int64 ;
struct TYPE_6__ {int has_iPrevDocid; scalar_t__ iPrevDocid; int b; } ;
struct TYPE_5__ {scalar_t__ iOffset; scalar_t__ iPos; scalar_t__ iColumn; TYPE_2__* dlw; } ;
typedef TYPE_1__ PLWriter ;
typedef TYPE_2__ DLWriter ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (char*,scalar_t__) ;

__attribute__((used)) static void FUNC_3(PLWriter *VAR_1, DLWriter *VAR_2, sqlite_int64 VAR_3){
  char VAR_4[VAR_0];
  int VAR_5;

  VAR_1->dlw = VAR_2;


  FUNC_0( !VAR_1->dlw->has_iPrevDocid || VAR_3>VAR_1->dlw->iPrevDocid );
  VAR_5 = FUNC_2(VAR_4, VAR_3-VAR_1->dlw->iPrevDocid);
  FUNC_1(VAR_1->dlw->b, VAR_4, VAR_5);
  VAR_1->dlw->iPrevDocid = VAR_3;

  VAR_1->dlw->has_iPrevDocid = 1;


  VAR_1->iColumn = 0;
  VAR_1->iPos = 0;
  VAR_1->iOffset = 0;
}
