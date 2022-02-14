
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_3__ {int MixerId; int * hmx; } ;
typedef TYPE_1__* PSND_MIXER ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

VOID
FUNC_1(PSND_MIXER VAR_1)
{
    if (VAR_1->hmx != ((void*)0))
    {
      FUNC_0(VAR_1->hmx);
      VAR_1->hmx = ((void*)0);
      VAR_1->MixerId = VAR_0;
    }
}
