
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sqlite3 ;
struct TYPE_3__ {scalar_t__ file_format; int enc; int fkeyHash; int trigHash; int idxHash; int tblHash; } ;
typedef TYPE_1__ Schema ;
typedef int Btree ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int,int ) ;
 scalar_t__ FUNC_1 (int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_1 ;

Schema *FUNC_4(sqlite3 *VAR_2, Btree *VAR_3){
  Schema * VAR_4;
  if( VAR_3 ){
    VAR_4 = (Schema *)FUNC_0(VAR_3, sizeof(Schema), VAR_1);
  }else{
    VAR_4 = (Schema *)FUNC_1(0, sizeof(Schema));
  }
  if( !VAR_4 ){
    FUNC_3(VAR_2);
  }else if ( 0==VAR_4->file_format ){
    FUNC_2(&VAR_4->tblHash);
    FUNC_2(&VAR_4->idxHash);
    FUNC_2(&VAR_4->trigHash);
    FUNC_2(&VAR_4->fkeyHash);
    VAR_4->enc = VAR_0;
  }
  return VAR_4;
}
