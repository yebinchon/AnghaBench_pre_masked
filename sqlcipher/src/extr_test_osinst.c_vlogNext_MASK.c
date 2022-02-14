
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ pVtab; } ;
typedef TYPE_2__ sqlite3_vtab_cursor ;
struct TYPE_11__ {scalar_t__ nByte; TYPE_6__* pFd; } ;
typedef TYPE_3__ VfslogVtab ;
struct TYPE_12__ {char* zTransient; scalar_t__ iOffset; unsigned char* aBuf; int nFile; char** azFile; int iRowid; } ;
typedef TYPE_4__ VfslogCsr ;
struct TYPE_13__ {TYPE_1__* pMethods; } ;
struct TYPE_9__ {int (* xRead ) (TYPE_6__*,unsigned char*,int,scalar_t__) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (unsigned char*) ;
 int FUNC_1 (char**,int ,int) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (int) ;
 scalar_t__ FUNC_4 (char**,int) ;
 int FUNC_5 (TYPE_6__*,unsigned char*,int,scalar_t__) ;
 int FUNC_6 (TYPE_6__*,char*,int,scalar_t__) ;
 int FUNC_7 (TYPE_6__*,char*,int,scalar_t__) ;

__attribute__((used)) static int FUNC_8(sqlite3_vtab_cursor *VAR_4){
  VfslogCsr *VAR_5 = (VfslogCsr *)VAR_4;
  VfslogVtab *VAR_6 = (VfslogVtab *)VAR_4->pVtab;
  int VAR_7 = VAR_3;
  int VAR_8;

  FUNC_2(VAR_5->zTransient);
  VAR_5->zTransient = 0;

  VAR_8 = 24;
  if( VAR_5->iOffset+VAR_8<=VAR_6->nByte ){
    int VAR_9;
    VAR_7 = VAR_6->pFd->pMethods->xRead(VAR_6->pFd, VAR_5->aBuf, VAR_8, VAR_5->iOffset);

    VAR_9 = FUNC_0(VAR_5->aBuf);
    if( (VAR_7==VAR_3)
     && (VAR_9==VAR_2 || VAR_9==VAR_1 || VAR_9==VAR_0)
    ){
      char VAR_10[4];
      VAR_7 = VAR_6->pFd->pMethods->xRead(VAR_6->pFd, VAR_10, 4, VAR_5->iOffset+VAR_8);
      VAR_8 += 4;
      if( VAR_7==VAR_3 ){
        int VAR_11 = FUNC_0((unsigned char *)VAR_10);
        char *VAR_12 = FUNC_3(VAR_11+1);
        VAR_7 = VAR_6->pFd->pMethods->xRead(VAR_6->pFd, VAR_12, VAR_11, VAR_5->iOffset+VAR_8);
        VAR_12[VAR_11] = '\0';
        VAR_8 += VAR_11;

        if( VAR_9==VAR_2 ){
          int VAR_13 = FUNC_0(&VAR_5->aBuf[4]);
          if( VAR_13>=VAR_5->nFile ){
            int VAR_14 = sizeof(VAR_5->azFile[0])*(VAR_13+1);
            VAR_5->azFile = (char **)FUNC_4(VAR_5->azFile, VAR_14);
            VAR_14 -= sizeof(VAR_5->azFile[0])*VAR_5->nFile;
            FUNC_1(&VAR_5->azFile[VAR_5->nFile], 0, VAR_14);
            VAR_5->nFile = VAR_13+1;
          }
          FUNC_2(VAR_5->azFile[VAR_13]);
          VAR_5->azFile[VAR_13] = VAR_12;
        }else{
          VAR_5->zTransient = VAR_12;
        }
      }
    }
  }

  VAR_5->iRowid += 1;
  VAR_5->iOffset += VAR_8;
  return VAR_7;
}
