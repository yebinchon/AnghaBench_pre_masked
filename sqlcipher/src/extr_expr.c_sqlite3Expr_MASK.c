
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sqlite3 ;
struct TYPE_3__ {char const* z; int n; } ;
typedef TYPE_1__ Token ;
typedef int Expr ;


 int * FUNC_0 (int *,int,TYPE_1__*,int ) ;
 int FUNC_1 (char const*) ;

Expr *FUNC_2(
  sqlite3 *VAR_0,
  int VAR_1,
  const char *VAR_2
){
  Token VAR_3;
  VAR_3.z = VAR_2;
  VAR_3.n = FUNC_1(VAR_2);
  return FUNC_0(VAR_0, VAR_1, &VAR_3, 0);
}
