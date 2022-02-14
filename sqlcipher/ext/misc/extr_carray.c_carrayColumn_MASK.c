
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int sqlite3_vtab_cursor ;
typedef int sqlite3_int64 ;
typedef int sqlite3_context ;
struct TYPE_2__ {size_t eType; int iRowid; scalar_t__ pPtr; int iCnt; } ;
typedef TYPE_1__ carray_cursor ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char const** VAR_3 ;
 int FUNC_0 (int *,double) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,char const*,int,int ) ;

__attribute__((used)) static int FUNC_4(
  sqlite3_vtab_cursor *VAR_4,
  sqlite3_context *VAR_5,
  int VAR_6
){
  carray_cursor *VAR_7 = (carray_cursor*)VAR_4;
  sqlite3_int64 VAR_8 = 0;
  switch( VAR_6 ){
    case 132: return VAR_0;
    case 134: VAR_8 = VAR_7->iCnt; break;
    case 133: {
      FUNC_3(VAR_5, VAR_3[VAR_7->eType], -1, VAR_1);
      return VAR_0;
    }
    default: {
      switch( VAR_7->eType ){
        case 130: {
          int *VAR_9 = (int*)VAR_7->pPtr;
          FUNC_1(VAR_5, VAR_9[VAR_7->iRowid-1]);
          return VAR_0;
        }
        case 129: {
          sqlite3_int64 *VAR_10 = (sqlite3_int64*)VAR_7->pPtr;
          FUNC_2(VAR_5, VAR_10[VAR_7->iRowid-1]);
          return VAR_0;
        }
        case 131: {
          double *VAR_11 = (double*)VAR_7->pPtr;
          FUNC_0(VAR_5, VAR_11[VAR_7->iRowid-1]);
          return VAR_0;
        }
        case 128: {
          const char **VAR_12 = (const char**)VAR_7->pPtr;
          FUNC_3(VAR_5, VAR_12[VAR_7->iRowid-1], -1, VAR_2);
          return VAR_0;
        }
      }
    }
  }
  FUNC_2(VAR_5, VAR_8);
  return VAR_0;
}
