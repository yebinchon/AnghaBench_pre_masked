
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct db_stmt {int (* bind ) (struct db_stmt const*,struct db_row*,size_t) ;} ;
struct db_row {int dummy; } ;


 int FUNC_0 (struct db_stmt const*,struct db_row*,size_t) ;

inline bool FUNC_1(const struct db_stmt *VAR_0, struct db_row *VAR_1, size_t VAR_2)
{
    return VAR_0->bind(VAR_0, VAR_1, VAR_2);
}
