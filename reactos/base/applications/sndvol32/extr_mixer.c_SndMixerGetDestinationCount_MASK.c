
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ cDestinations; } ;
struct TYPE_5__ {TYPE_1__ Caps; scalar_t__ hmx; } ;
typedef TYPE_2__* PSND_MIXER ;
typedef int INT ;



INT
FUNC_0(PSND_MIXER VAR_0)
{
    return (VAR_0->hmx ? (INT)VAR_0->Caps.cDestinations : -1);
}
