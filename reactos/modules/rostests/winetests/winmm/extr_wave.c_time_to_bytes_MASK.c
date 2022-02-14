
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int hour; int min; int sec; int frame; } ;
struct TYPE_8__ {int cb; int sample; int ms; TYPE_1__ smpte; } ;
struct TYPE_10__ {scalar_t__ wType; TYPE_2__ u; } ;
struct TYPE_9__ {int nBlockAlign; int nAvgBytesPerSec; } ;
typedef TYPE_3__* LPWAVEFORMATEX ;
typedef TYPE_4__* LPMMTIME ;
typedef int DWORD ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*) ;

DWORD FUNC_1(LPMMTIME VAR_4, LPWAVEFORMATEX VAR_5)
{
    if (VAR_4->wType == VAR_0)
        return VAR_4->u.cb;
    else if (VAR_4->wType == VAR_2)
        return VAR_4->u.sample * VAR_5->nBlockAlign;
    else if (VAR_4->wType == VAR_1)
        return VAR_4->u.ms * VAR_5->nAvgBytesPerSec / 1000;
    else if (VAR_4->wType == VAR_3)
        return ((VAR_4->u.smpte.hour * 60 * 60) +
                (VAR_4->u.smpte.min * 60) +
                (VAR_4->u.smpte.sec)) * VAR_5->nAvgBytesPerSec +
                VAR_4->u.smpte.frame * VAR_5->nAvgBytesPerSec / 30;

    FUNC_0("FIXME: time_to_bytes() type not supported\n");
    return -1;
}
