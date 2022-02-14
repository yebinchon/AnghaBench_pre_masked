
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * err; } ;
typedef TYPE_1__ RedisSock ;


 int FUNC_0 (TYPE_1__*,char*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(RedisSock *VAR_0)
{

    if (VAR_0 == ((void*)0) || VAR_0->err == ((void*)0))
        return;




    if (!FUNC_0(VAR_0, "ERR") &&
        !FUNC_0(VAR_0, "NOSCRIPT") &&
        !FUNC_0(VAR_0, "WRONGTYPE") &&
        !FUNC_0(VAR_0, "BUSYGROUP") &&
        !FUNC_0(VAR_0, "NOGROUP"))
    {
        FUNC_1( FUNC_2(VAR_0->err), 0);
    }
}
