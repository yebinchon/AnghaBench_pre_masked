
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_7__ {int dwFlags; struct TYPE_7__* lpNext; } ;
struct TYPE_6__ {scalar_t__ device_type; TYPE_2__* wave_queue; } ;
typedef TYPE_1__ SessionInfo ;
typedef TYPE_2__* PWAVEHDR ;
typedef int DWORD_PTR ;
typedef int DWORD ;


 int FUNC_0 (char*,TYPE_2__*) ;
 int FUNC_1 (TYPE_1__*,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;

VOID
FUNC_2(SessionInfo* VAR_5)
{
    PWAVEHDR VAR_6 = ((void*)0);


    while ( ( VAR_6 = VAR_5->wave_queue ) )
    {
        if ( VAR_6->dwFlags & VAR_0 )
        {
            DWORD VAR_7;


            VAR_6->dwFlags &= ~VAR_1;
            VAR_6->dwFlags |= VAR_0;


            VAR_5->wave_queue = VAR_6->lpNext;


            VAR_7 = (VAR_5->device_type == VAR_4) ? VAR_3 :
                                                                     VAR_2;

            FUNC_0("Notifying client that buffer 0x%p is done\n", VAR_6);


            FUNC_1(VAR_5, VAR_7, (DWORD_PTR) VAR_6, 0);
        }
    }


}
