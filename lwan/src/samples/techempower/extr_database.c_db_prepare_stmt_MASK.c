
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct db_stmt {int dummy; } ;
struct db {struct db_stmt* (* prepare ) (struct db const*,char const*,size_t const) ;} ;


 struct db_stmt* FUNC_0 (struct db const*,char const*,size_t const) ;

inline struct db_stmt *FUNC_1(const struct db *VAR_0, const char *VAR_1,
    const size_t VAR_2)
{
    return VAR_0->prepare(VAR_0, VAR_1, VAR_2);
}
