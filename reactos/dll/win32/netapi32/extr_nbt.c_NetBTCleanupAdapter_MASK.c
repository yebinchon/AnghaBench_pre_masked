
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ nameCache; } ;
typedef TYPE_1__ NetBTAdapter ;


 int FUNC_0 () ;
 int FUNC_1 (int ,int ,void*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (char*,void*) ;

__attribute__((used)) static void FUNC_4(void *VAR_0)
{
    FUNC_3("adapt %p\n", VAR_0);
    if (VAR_0)
    {
        NetBTAdapter *VAR_1 = VAR_0;

        if (VAR_1->nameCache)
            FUNC_2(VAR_1->nameCache);
        FUNC_1(FUNC_0(), 0, VAR_0);
    }
}
