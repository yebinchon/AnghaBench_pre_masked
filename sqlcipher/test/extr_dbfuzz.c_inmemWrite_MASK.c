
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ sqlite3_int64 ;
typedef int sqlite3_file ;
struct TYPE_3__ {TYPE_2__* pVFile; } ;
typedef TYPE_1__ VHandle ;
struct TYPE_4__ {scalar_t__ sz; unsigned char* a; } ;
typedef TYPE_2__ VFile ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__,void const*,int) ;
 int FUNC_1 (unsigned char*,int ,int) ;
 unsigned char* FUNC_2 (unsigned char*,int) ;

__attribute__((used)) static int FUNC_3(
  sqlite3_file *VAR_3,
  const void *VAR_4,
  int VAR_5,
  sqlite3_int64 VAR_6
){
  VHandle *VAR_7 = (VHandle*)VAR_3;
  VFile *VAR_8 = VAR_7->pVFile;
  if( VAR_6+VAR_5 > VAR_8->sz ){
    unsigned char *VAR_9;
    if( VAR_6+VAR_5 >= VAR_0 ){
      return VAR_1;
    }
    VAR_9 = FUNC_2(VAR_8->a, (int)(VAR_6+VAR_5));
    if( VAR_9==0 ){
      return VAR_1;
    }
    VAR_8->a = VAR_9;
    if( VAR_6 > VAR_8->sz ){
      FUNC_1(VAR_8->a + VAR_8->sz, 0, (int)(VAR_6 - VAR_8->sz));
    }
    VAR_8->sz = (int)(VAR_6 + VAR_5);
  }
  FUNC_0(VAR_8->a + VAR_6, VAR_4, VAR_5);
  return VAR_2;
}
