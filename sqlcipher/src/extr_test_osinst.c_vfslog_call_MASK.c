
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sqlite3_vfs ;
typedef int sqlite3_int64 ;
struct TYPE_3__ {int nBuf; int * aBuf; } ;
typedef TYPE_1__ VfslogVfs ;


 int FUNC_0 (unsigned char*,int) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(
  sqlite3_vfs *VAR_0,
  int VAR_1,
  int VAR_2,
  sqlite3_int64 VAR_3,
  int VAR_4,
  int VAR_5,
  int VAR_6
){
  VfslogVfs *VAR_7 = (VfslogVfs *)VAR_0;
  unsigned char *VAR_8;
  if( (24+VAR_7->nBuf)>sizeof(VAR_7->aBuf) ){
    FUNC_1(VAR_7);
  }
  VAR_8 = (unsigned char *)&VAR_7->aBuf[VAR_7->nBuf];
  FUNC_0(&VAR_8[0], VAR_1);
  FUNC_0(&VAR_8[4], VAR_2);
  FUNC_0(&VAR_8[8], (unsigned int)(VAR_3&0xffff));
  FUNC_0(&VAR_8[12], VAR_4);
  FUNC_0(&VAR_8[16], VAR_5);
  FUNC_0(&VAR_8[20], VAR_6);
  VAR_7->nBuf += 24;
}
