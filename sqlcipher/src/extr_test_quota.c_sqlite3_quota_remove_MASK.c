
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_9__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {TYPE_3__* pFiles; } ;
typedef TYPE_2__ quotaGroup ;
struct TYPE_12__ {char* zFilename; int deleteOnClose; scalar_t__ nRef; struct TYPE_12__* pNext; } ;
typedef TYPE_3__ quotaFile ;
struct TYPE_10__ {scalar_t__ mxPathname; } ;
struct TYPE_14__ {TYPE_4__* pOrigVfs; TYPE_1__ sThisVfs; } ;
struct TYPE_13__ {int (* xFullPathname ) (TYPE_4__*,char const*,scalar_t__,char*) ;int (* xDelete ) (TYPE_4__*,char*,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_9__ VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (TYPE_2__*) ;
 TYPE_2__* FUNC_2 (char*) ;
 int FUNC_3 () ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 size_t FUNC_7 (char*) ;
 int FUNC_8 (char*,char*,size_t) ;
 int FUNC_9 (TYPE_4__*,char const*,scalar_t__,char*) ;
 int FUNC_10 (TYPE_4__*,char*,int ) ;

int FUNC_11(const char *VAR_3){
  char *VAR_4;
  size_t VAR_5;
  int VAR_6;
  quotaGroup *VAR_7;
  quotaFile *VAR_8;
  quotaFile *VAR_9;
  int VAR_10;
  char VAR_11;

  VAR_4 = (char*)FUNC_6(VAR_2.sThisVfs.mxPathname + 1);
  if( VAR_4==0 ) return VAR_0;
  VAR_6 = VAR_2.pOrigVfs->xFullPathname(VAR_2.pOrigVfs, VAR_3,
                                      VAR_2.sThisVfs.mxPathname+1, VAR_4);
  if( VAR_6 ){
    FUNC_5(VAR_4);
    return VAR_6;
  }




  VAR_5 = FUNC_7(VAR_4);
  if( VAR_5>0 && (VAR_4[VAR_5-1]=='/' || VAR_4[VAR_5-1]=='\\') ){
    VAR_5--;
    VAR_4[VAR_5] = 0;
  }

  FUNC_0();
  VAR_7 = FUNC_2(VAR_4);
  if( VAR_7 ){
    for(VAR_8=VAR_7->pFiles; VAR_8 && VAR_6==VAR_1; VAR_8=VAR_9){
      VAR_9 = VAR_8->pNext;
      VAR_10 = FUNC_8(VAR_4, VAR_8->zFilename, VAR_5);
      if( VAR_10==0 && ((VAR_11 = VAR_8->zFilename[VAR_5])==0 || VAR_11=='/' || VAR_11=='\\') ){
        if( VAR_8->nRef ){
          VAR_8->deleteOnClose = 1;
        }else{
          VAR_6 = VAR_2.pOrigVfs->xDelete(VAR_2.pOrigVfs, VAR_8->zFilename, 0);
          FUNC_4(VAR_8);
          FUNC_1(VAR_7);
        }
      }
    }
  }
  FUNC_3();
  FUNC_5(VAR_4);
  return VAR_6;
}
