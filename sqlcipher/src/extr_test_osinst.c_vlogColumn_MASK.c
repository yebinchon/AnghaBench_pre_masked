
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int sqlite3_vtab_cursor ;
typedef int sqlite3_context ;
struct TYPE_2__ {char* zTransient; char** azFile; int nFile; int * aBuf; } ;
typedef TYPE_1__ VfslogCsr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 unsigned int FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned int) ;
 int FUNC_3 (int *,char*,int,int ) ;
 char* FUNC_4 (unsigned int) ;

__attribute__((used)) static int FUNC_5(
  sqlite3_vtab_cursor *VAR_3,
  sqlite3_context *VAR_4,
  int VAR_5
){
  unsigned int VAR_6;
  VfslogCsr *VAR_7 = (VfslogCsr *)VAR_3;

  FUNC_0( VAR_5<7 );
  VAR_6 = FUNC_1(&VAR_7->aBuf[4*VAR_5]);

  switch( VAR_5 ){
    case 0: {
      FUNC_3(VAR_4, FUNC_4(VAR_6), -1, VAR_1);
      break;
    }
    case 1: {
      char *VAR_8 = VAR_7->zTransient;
      if( VAR_6!=0 && VAR_6<(unsigned)VAR_7->nFile ){
        VAR_8 = VAR_7->azFile[VAR_6];
      }
      FUNC_3(VAR_4, VAR_8, -1, VAR_2);
      break;
    }
    default:
      FUNC_2(VAR_4, VAR_6);
      break;
  }

  return VAR_0;
}
