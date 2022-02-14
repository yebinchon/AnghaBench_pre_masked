
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ pVtab; } ;
typedef TYPE_2__ sqlite3_vtab_cursor ;
typedef int sqlite3_value ;
struct TYPE_7__ {scalar_t__ in; scalar_t__ zIn; size_t nIn; scalar_t__ iIn; } ;
struct TYPE_10__ {TYPE_1__ rdr; scalar_t__ iRowid; } ;
struct TYPE_9__ {scalar_t__ zData; scalar_t__ iStart; } ;
typedef TYPE_3__ CsvTable ;
typedef TYPE_4__ CsvCursor ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (scalar_t__,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_3(
  sqlite3_vtab_cursor *VAR_1,
  int VAR_2, const char *VAR_3,
  int VAR_4, sqlite3_value **VAR_5
){
  CsvCursor *VAR_6 = (CsvCursor*)VAR_1;
  CsvTable *VAR_7 = (CsvTable*)VAR_1->pVtab;
  VAR_6->iRowid = 0;
  if( VAR_6->rdr.in==0 ){
    FUNC_0( VAR_6->rdr.zIn==VAR_7->zData );
    FUNC_0( VAR_7->iStart>=0 );
    FUNC_0( (size_t)VAR_7->iStart<=VAR_6->rdr.nIn );
    VAR_6->rdr.iIn = VAR_7->iStart;
  }else{
    FUNC_2(VAR_6->rdr.in, VAR_7->iStart, VAR_0);
    VAR_6->rdr.iIn = 0;
    VAR_6->rdr.nIn = 0;
  }
  return FUNC_1(VAR_1);
}
