
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int function; int parameter; } ;
struct TYPE_6__ {int * wave_queue; TYPE_1__ thread; int kernel_device_handle; } ;
typedef TYPE_2__ SessionInfo ;
typedef int PBYTE ;
typedef int MMRESULT ;
typedef int LPWAVEHDR ;
typedef int DWORD ;


 int FUNC_0 (char*) ;

 int FUNC_1 (int ,int ,int ,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (int ,int ,int ,int) ;
 int VAR_7 ;
DWORD
FUNC_4(SessionInfo* VAR_8)
{
    MMRESULT VAR_9 = VAR_6;

    switch ( VAR_8->thread.function )
    {
        case 128 :
        {
            VAR_9 = FUNC_2(VAR_8,
                                     (LPWAVEHDR) VAR_8->thread.parameter);
            break;
        }

        case 133 :
        {

            break;
        }

        case 134 :
        {

            break;
        }

        case 132 :
        {

            break;
        }

        case 136 :
        {

            break;
        }

        case 131 :
        {
            VAR_9 = FUNC_3(VAR_8->kernel_device_handle,
                                   VAR_3,
                                   (PBYTE) VAR_8->thread.parameter,
                                   sizeof(DWORD));
            break;
        }

        case 138 :
        {
            VAR_9 = FUNC_1(VAR_8->kernel_device_handle,
                                   VAR_0,
                                   (PBYTE) VAR_8->thread.parameter,
                                   sizeof(DWORD));
            break;
        }

        case 129 :
        {
            break;
        }

        case 135 :
        {





            break;
        }

        case 130 :
        {
            VAR_9 = FUNC_3(VAR_8->kernel_device_handle,
                                   VAR_4,
                                   (PBYTE) VAR_8->thread.parameter,
                                   sizeof(DWORD));
            break;
        }

        case 137 :
        {
            VAR_9 = FUNC_1(VAR_8->kernel_device_handle,
                                   VAR_1,
                                   (PBYTE) VAR_8->thread.parameter,
                                   sizeof(DWORD));
            break;
        }

        case 139 :
        {
            FUNC_0("Thread was asked if OK to close device\n");

            if ( VAR_8->wave_queue != ((void*)0) )
                VAR_9 = VAR_7;
            else
                VAR_9 = VAR_6;

            break;
        }

        case 140 :
        {
            FUNC_0("Terminating thread...\n");
            VAR_9 = VAR_6;
            break;
        }

        default :
        {
            FUNC_0("INVALID FUNCTION\n");
            VAR_9 = VAR_5;
            break;
        }
    }



    return VAR_9;
}
