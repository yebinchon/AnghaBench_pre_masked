
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* cd; } ;
typedef TYPE_3__ cdda_priv ;
struct TYPE_6__ {int tracks; TYPE_1__* disc_toc; } ;
struct TYPE_5__ {unsigned int dwStartSector; } ;



__attribute__((used)) static int FUNC_0(cdda_priv *VAR_0, unsigned int VAR_1)
{
    int VAR_2;
    for (VAR_2 = VAR_0->cd->tracks; VAR_2 >= 0; --VAR_2)
        if (VAR_0->cd->disc_toc[VAR_2].dwStartSector <= VAR_1)
            break;
    return VAR_2;
}
