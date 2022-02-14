
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int pFilter; int dir; int achName; } ;
typedef TYPE_1__ PIN_INFO ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void FUNC_1(PIN_INFO * VAR_0, const PIN_INFO * VAR_1)
{




    FUNC_0(VAR_0->achName, VAR_1->achName);
    VAR_0->dir = VAR_1->dir;
    VAR_0->pFilter = VAR_1->pFilter;
}
