
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_7__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int (* xDelete ) (TYPE_1__*,char const*,int) ;} ;
typedef TYPE_1__ sqlite3_vfs ;
typedef int quotaGroup ;
struct TYPE_9__ {int deleteOnClose; scalar_t__ nRef; } ;
typedef TYPE_2__ quotaFile ;
struct TYPE_10__ {TYPE_1__* pOrigVfs; } ;


 int VAR_0 ;
 TYPE_7__ VAR_1 ;
 int FUNC_0 () ;
 TYPE_2__* FUNC_1 (int *,char const*,int ) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (char const*) ;
 int FUNC_4 () ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_1__*,char const*,int) ;

__attribute__((used)) static int FUNC_7(
  sqlite3_vfs *VAR_2,
  const char *VAR_3,
  int VAR_4
){
  int VAR_5;
  quotaFile *VAR_6;
  quotaGroup *VAR_7;
  sqlite3_vfs *VAR_8 = VAR_1.pOrigVfs;


  VAR_5 = VAR_8->xDelete(VAR_8, VAR_3, VAR_4);




  if( VAR_5==VAR_0 ){
    FUNC_0();
    VAR_7 = FUNC_3(VAR_3);
    if( VAR_7 ){
      VAR_6 = FUNC_1(VAR_7, VAR_3, 0);
      if( VAR_6 ){
        if( VAR_6->nRef ){
          VAR_6->deleteOnClose = 1;
        }else{
          FUNC_5(VAR_6);
          FUNC_2(VAR_7);
        }
      }
    }
    FUNC_4();
  }
  return VAR_5;
}
