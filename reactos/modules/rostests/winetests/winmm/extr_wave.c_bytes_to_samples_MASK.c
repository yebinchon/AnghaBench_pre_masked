
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nBlockAlign; } ;
typedef TYPE_1__* LPWAVEFORMATEX ;
typedef int DWORD ;



DWORD FUNC_0(DWORD VAR_0, LPWAVEFORMATEX VAR_1)
{
    return VAR_0 / VAR_1->nBlockAlign;
}
