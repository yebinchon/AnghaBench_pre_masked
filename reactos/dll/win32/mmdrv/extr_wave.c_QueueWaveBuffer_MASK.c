
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int dwFlags; struct TYPE_7__* lpNext; scalar_t__ reserved; scalar_t__ dwBytesRecorded; int lpData; } ;
struct TYPE_6__ {TYPE_2__* next_buffer; scalar_t__ buffer_position; TYPE_2__* wave_queue; } ;
typedef TYPE_1__ SessionInfo ;
typedef TYPE_2__* PWAVEHDR ;
typedef int MMRESULT ;
typedef TYPE_2__* LPWAVEHDR ;
typedef scalar_t__ DWORD_PTR ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

MMRESULT
FUNC_1(
    SessionInfo* VAR_7,
    LPWAVEHDR VAR_8)
{
    PWAVEHDR VAR_9, VAR_10;
    FUNC_0("Queueing wave buffer\n");

    if ( ! VAR_8 )
    {
        return VAR_0;
    }

    if ( ! VAR_8->lpData )
    {
        return VAR_0;
    }


    if ( ! ( VAR_8->dwFlags & VAR_6 ) )
    {
        FUNC_0("I was given a header which hasn't been prepared yet!\n");
        return VAR_3;
    }


    if ( VAR_8->dwFlags & VAR_5 )
    {
        FUNC_0("I was given a header for a buffer which is already playing\n");
        return VAR_2;
    }


    VAR_8->dwBytesRecorded = 0;


    VAR_8->dwFlags &= ~VAR_4;
    VAR_8->dwFlags |= VAR_5;


    VAR_8->reserved = (DWORD_PTR) VAR_7;


    VAR_10 = ((void*)0);
    VAR_9 = VAR_7->wave_queue;

    while ( VAR_9 )
    {
        VAR_10 = VAR_9;
        VAR_9 = VAR_9->lpNext;
    }


    VAR_9 = VAR_10;


    VAR_9->lpNext = VAR_8;
    VAR_8->lpNext = ((void*)0);
    return VAR_1;
}
