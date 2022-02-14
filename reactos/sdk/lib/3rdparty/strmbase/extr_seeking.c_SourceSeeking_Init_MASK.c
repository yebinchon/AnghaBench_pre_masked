
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ULONGLONG ;
struct TYPE_4__ {int const* lpVtbl; } ;
struct TYPE_5__ {int refCount; int dwCapabilities; int llStop; int llDuration; double dRate; int crst; int timeformat; scalar_t__ llCurrent; scalar_t__ fnChangeStart; scalar_t__ fnChangeStop; scalar_t__ fnChangeRate; TYPE_1__ IMediaSeeking_iface; } ;
typedef scalar_t__ SourceSeeking_ChangeStop ;
typedef scalar_t__ SourceSeeking_ChangeStart ;
typedef scalar_t__ SourceSeeking_ChangeRate ;
typedef TYPE_2__ SourceSeeking ;
typedef int PCRITICAL_SECTION ;
typedef int IMediaSeekingVtbl ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;

HRESULT FUNC_1(SourceSeeking *VAR_7, const IMediaSeekingVtbl *VAR_8, SourceSeeking_ChangeStop VAR_9, SourceSeeking_ChangeStart VAR_10, SourceSeeking_ChangeRate VAR_11, PCRITICAL_SECTION VAR_12)
{
    FUNC_0(VAR_9 && VAR_10 && VAR_11);

    VAR_7->IMediaSeeking_iface.lpVtbl = VAR_8;
    VAR_7->refCount = 1;
    VAR_7->fnChangeRate = VAR_11;
    VAR_7->fnChangeStop = VAR_9;
    VAR_7->fnChangeStart = VAR_10;
    VAR_7->dwCapabilities = VAR_4 |
        VAR_3 |
        VAR_2 |
        VAR_1 |
        VAR_0;
    VAR_7->llCurrent = 0;
    VAR_7->llStop = ((ULONGLONG)0x80000000) << 32;
    VAR_7->llDuration = VAR_7->llStop;
    VAR_7->dRate = 1.0;
    VAR_7->timeformat = VAR_6;
    VAR_7->crst = VAR_12;
    return VAR_5;
}
