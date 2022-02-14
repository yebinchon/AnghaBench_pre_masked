
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sqlite3_vfs ;
typedef int sqlite3_syscall_ptr ;
struct TYPE_3__ {int (* xGetSystemCall ) (TYPE_1__*,char const*) ;} ;


 TYPE_1__* FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,char const*) ;

__attribute__((used)) static sqlite3_syscall_ptr FUNC_2(
  sqlite3_vfs *VAR_0,
  const char *VAR_1
){
  return FUNC_0(VAR_0)->xGetSystemCall(FUNC_0(VAR_0),VAR_1);
}
