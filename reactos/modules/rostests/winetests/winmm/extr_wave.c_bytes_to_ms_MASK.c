
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int nSamplesPerSec; } ;
typedef TYPE_1__* LPWAVEFORMATEX ;
typedef int DWORD ;


 int FUNC_0 (int,TYPE_1__*) ;

DWORD FUNC_1(DWORD VAR_0, LPWAVEFORMATEX VAR_1)
{
    return FUNC_0(VAR_0, VAR_1) * 1000 / VAR_1->nSamplesPerSec;
}
