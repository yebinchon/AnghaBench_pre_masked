
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_7__ {TYPE_3__* Buffer; } ;
struct TYPE_6__ {TYPE_3__* Buffer; } ;
struct TYPE_8__ {TYPE_2__ AdminComment; TYPE_1__ Name; } ;
typedef TYPE_3__* PALIAS_GENERAL_INFORMATION ;


 int FUNC_0 (TYPE_3__*) ;

__attribute__((used)) static
VOID
FUNC_1(PALIAS_GENERAL_INFORMATION VAR_0)
{
    if (VAR_0->Name.Buffer != ((void*)0))
        FUNC_0(VAR_0->Name.Buffer);

    if (VAR_0->AdminComment.Buffer != ((void*)0))
        FUNC_0(VAR_0->AdminComment.Buffer);

    FUNC_0(VAR_0);
}
