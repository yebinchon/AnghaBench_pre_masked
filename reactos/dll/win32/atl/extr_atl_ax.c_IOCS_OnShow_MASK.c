
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ fActive; int control; } ;
typedef TYPE_1__ IOCS ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_0( IOCS *VAR_1, BOOL VAR_2 )
{
    if (!VAR_1->control || VAR_1->fActive || !VAR_2 )
        return;

    VAR_1->fActive = VAR_0;
}
