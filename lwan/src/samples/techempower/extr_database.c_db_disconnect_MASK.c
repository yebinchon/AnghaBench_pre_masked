
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct db {int (* disconnect ) (struct db*) ;} ;


 int FUNC_0 (struct db*) ;

inline void FUNC_1(struct db *VAR_0)
{
    VAR_0->disconnect(VAR_0);
}
