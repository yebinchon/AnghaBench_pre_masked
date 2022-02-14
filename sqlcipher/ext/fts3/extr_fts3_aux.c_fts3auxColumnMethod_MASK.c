
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int sqlite3_vtab_cursor ;
typedef int sqlite3_context ;
struct TYPE_4__ {char* zTerm; int nTerm; } ;
struct TYPE_6__ {scalar_t__ isEof; size_t iCol; int iLangid; TYPE_2__* aStat; TYPE_1__ csr; } ;
struct TYPE_5__ {int nOcc; int nDoc; } ;
typedef TYPE_3__ Fts3auxCursor ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,char*,int,int ) ;

__attribute__((used)) static int FUNC_4(
  sqlite3_vtab_cursor *VAR_3,
  sqlite3_context *VAR_4,
  int VAR_5
){
  Fts3auxCursor *VAR_6 = (Fts3auxCursor *)VAR_3;

  FUNC_0( VAR_6->isEof==0 );
  switch( VAR_5 ){
    case 0:
      FUNC_3(VAR_4, VAR_6->csr.zTerm, VAR_6->csr.nTerm, VAR_2);
      break;

    case 1:
      if( VAR_6->iCol ){
        FUNC_1(VAR_4, VAR_6->iCol-1);
      }else{
        FUNC_3(VAR_4, "*", -1, VAR_1);
      }
      break;

    case 2:
      FUNC_2(VAR_4, VAR_6->aStat[VAR_6->iCol].nDoc);
      break;

    case 3:
      FUNC_2(VAR_4, VAR_6->aStat[VAR_6->iCol].nOcc);
      break;

    default:
      FUNC_0( VAR_5==4 );
      FUNC_1(VAR_4, VAR_6->iLangid);
      break;
  }

  return VAR_0;
}
