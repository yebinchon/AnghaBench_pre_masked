
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct db_mysql {int con; } ;
struct db {int dummy; } ;


 int FUNC_0 (struct db*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct db *VAR_0)
{
    struct db_mysql *VAR_1 = (struct db_mysql *)VAR_0;

    FUNC_1(VAR_1->con);
    FUNC_0(VAR_0);
}
