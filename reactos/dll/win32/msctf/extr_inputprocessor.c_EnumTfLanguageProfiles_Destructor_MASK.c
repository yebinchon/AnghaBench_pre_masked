
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int catmgr; scalar_t__ langkey; scalar_t__ tipkey; } ;
typedef TYPE_1__ EnumTfLanguageProfiles ;


 int FUNC_0 () ;
 int FUNC_1 (int ,int ,TYPE_1__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (char*,TYPE_1__*) ;

__attribute__((used)) static void FUNC_5(EnumTfLanguageProfiles *VAR_0)
{
    FUNC_4("destroying %p\n", VAR_0);
    FUNC_3(VAR_0->tipkey);
    if (VAR_0->langkey)
        FUNC_3(VAR_0->langkey);
    FUNC_2(VAR_0->catmgr);
    FUNC_1(FUNC_0(),0,VAR_0);
}
