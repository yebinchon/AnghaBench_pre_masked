
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int sqlite3_vtab ;
typedef int sqlite3 ;
struct TYPE_2__ {int interp; } ;
typedef TYPE_1__ EchoModule ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *,void*,int,char const* const*,int **,char**) ;

__attribute__((used)) static int FUNC_2(
  sqlite3 *VAR_0,
  void *VAR_1,
  int VAR_2, const char *const*VAR_3,
  sqlite3_vtab **VAR_4,
  char **VAR_5
){
  FUNC_0(((EchoModule *)VAR_1)->interp, "xConnect");
  return FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
}
