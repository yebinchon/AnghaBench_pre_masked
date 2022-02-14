
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct db_stmt {int (* step ) (struct db_stmt const*,struct db_row*) ;} ;
struct db_row {int dummy; } ;


 int FUNC_0 (struct db_stmt const*,struct db_row*) ;

inline bool FUNC_1(const struct db_stmt *VAR_0, struct db_row *VAR_1)
{
    return VAR_0->step(VAR_0, VAR_1);
}
