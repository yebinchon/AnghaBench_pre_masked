
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sqlite3_vfs ;
typedef scalar_t__ sqlite3_uint64 ;
struct TYPE_3__ {int (* xAccess ) (TYPE_1__*,char const*,int,int*) ;} ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,char const*,int,int*) ;
 int FUNC_2 (int *,int ,int ,scalar_t__,int,int,int) ;
 int FUNC_3 (int *,char const*) ;
 scalar_t__ FUNC_4 () ;

__attribute__((used)) static int FUNC_5(
  sqlite3_vfs *VAR_1,
  const char *VAR_2,
  int VAR_3,
  int *VAR_4
){
  int VAR_5;
  sqlite3_uint64 VAR_6;
  VAR_6 = FUNC_4();
  VAR_5 = FUNC_0(VAR_1)->xAccess(FUNC_0(VAR_1), VAR_2, VAR_3, VAR_4);
  VAR_6 = FUNC_4() - VAR_6;
  FUNC_2(VAR_1, VAR_0, 0, VAR_6, VAR_5, VAR_3, *VAR_4);
  FUNC_3(VAR_1, VAR_2);
  return VAR_5;
}
