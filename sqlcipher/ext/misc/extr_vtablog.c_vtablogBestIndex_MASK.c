
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int iInst; } ;
typedef TYPE_1__ vtablog_vtab ;
typedef int sqlite3_vtab ;
struct TYPE_5__ {double estimatedCost; int estimatedRows; } ;
typedef TYPE_2__ sqlite3_index_info ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;

__attribute__((used)) static int FUNC_1(
  sqlite3_vtab *VAR_1,
  sqlite3_index_info *VAR_2
){
  vtablog_vtab *VAR_3 = (vtablog_vtab*)VAR_1;
  FUNC_0("vtablogBestIndex(tab=%d):\n", VAR_3->iInst);
  VAR_2->estimatedCost = (double)500;
  VAR_2->estimatedRows = 500;
  return VAR_0;
}
