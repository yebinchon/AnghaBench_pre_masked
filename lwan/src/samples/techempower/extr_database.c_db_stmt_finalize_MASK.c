
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct db_stmt {int (* finalize ) (struct db_stmt*) ;} ;


 int FUNC_0 (struct db_stmt*) ;

inline void FUNC_1(struct db_stmt *VAR_0)
{
    VAR_0->finalize(VAR_0);
}
