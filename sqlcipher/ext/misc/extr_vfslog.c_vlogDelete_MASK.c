
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sqlite3_vfs ;
typedef scalar_t__ sqlite3_uint64 ;
typedef int VLogLog ;
struct TYPE_3__ {int (* xDelete ) (TYPE_1__*,char const*,int) ;} ;


 TYPE_1__* FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,char const*,int) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (char const*) ;
 int FUNC_4 (int *,scalar_t__,scalar_t__,char*,int,int,int ,int) ;
 scalar_t__ FUNC_5 () ;

__attribute__((used)) static int FUNC_6(sqlite3_vfs *VAR_0, const char *VAR_1, int VAR_2){
  int VAR_3;
  sqlite3_uint64 VAR_4, VAR_5;
  VLogLog *VAR_6;
  VAR_4 = FUNC_5();
  VAR_3 = FUNC_0(VAR_0)->xDelete(FUNC_0(VAR_0), VAR_1, VAR_2);
  VAR_5 = FUNC_5() - VAR_4;
  VAR_6 = FUNC_3(VAR_1);
  FUNC_4(VAR_6, VAR_4, VAR_5, "DELETE", VAR_2, -1, 0, VAR_3);
  FUNC_2(VAR_6);
  return VAR_3;
}
