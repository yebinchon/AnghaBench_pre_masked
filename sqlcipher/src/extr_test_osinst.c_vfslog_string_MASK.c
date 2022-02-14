
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sqlite3_vfs ;
struct TYPE_3__ {int nBuf; int * aBuf; } ;
typedef TYPE_1__ VfslogVfs ;


 int FUNC_0 (unsigned char*,char const*,int) ;
 int FUNC_1 (unsigned char*,int) ;
 scalar_t__ FUNC_2 (char const*) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_4(sqlite3_vfs *VAR_0, const char *VAR_1){
  VfslogVfs *VAR_2 = (VfslogVfs *)VAR_0;
  unsigned char *VAR_3;
  int VAR_4 = VAR_1 ? (int)FUNC_2(VAR_1) : 0;
  if( (4+VAR_4+VAR_2->nBuf)>sizeof(VAR_2->aBuf) ){
    FUNC_3(VAR_2);
  }
  VAR_3 = (unsigned char *)&VAR_2->aBuf[VAR_2->nBuf];
  FUNC_1(&VAR_3[0], VAR_4);
  if( VAR_1 ){
    FUNC_0(&VAR_3[4], VAR_1, VAR_4);
  }
  VAR_2->nBuf += (4 + VAR_4);
}
