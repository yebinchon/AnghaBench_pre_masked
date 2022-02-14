
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__* pMethods; } ;
typedef TYPE_2__ sqlite3_file ;
struct TYPE_10__ {int nDatabase; TYPE_2__* pFile; } ;
typedef TYPE_3__ fs_real_file ;
struct TYPE_11__ {scalar_t__ eType; TYPE_3__* pReal; } ;
typedef TYPE_4__ fs_file ;
struct TYPE_8__ {int (* xWrite ) (TYPE_2__*,unsigned char*,int,int ) ;int (* xSync ) (TYPE_2__*,int) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,unsigned char*,int,int ) ;
 int FUNC_1 (TYPE_2__*,int) ;

__attribute__((used)) static int FUNC_2(sqlite3_file *VAR_3, int VAR_4){
  fs_file *VAR_5 = (fs_file *)VAR_3;
  fs_real_file *VAR_6 = VAR_5->pReal;
  sqlite3_file *VAR_7 = VAR_6->pFile;
  int VAR_8 = VAR_1;

  if( VAR_5->eType==VAR_0 ){
    unsigned char VAR_9[4];
    VAR_9[0] = (VAR_6->nDatabase&0xFF000000)>>24;
    VAR_9[1] = (unsigned char)((VAR_6->nDatabase&0x00FF0000)>>16);
    VAR_9[2] = (VAR_6->nDatabase&0x0000FF00)>>8;
    VAR_9[3] = (VAR_6->nDatabase&0x000000FF);
    VAR_8 = VAR_7->pMethods->xWrite(VAR_7, VAR_9, 4, 0);
  }
  if( VAR_8==VAR_1 ){
    VAR_8 = VAR_7->pMethods->xSync(VAR_7, VAR_4&(~VAR_2));
  }

  return VAR_8;
}
