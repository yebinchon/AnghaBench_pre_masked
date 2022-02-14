
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int UNICODE_STRING ;
struct TYPE_6__ {scalar_t__ Context; scalar_t__ IsrRoutine; } ;
typedef scalar_t__ PVOID ;
typedef TYPE_1__* PINTERNAL_I8042_HOOK_KEYBOARD ;
typedef scalar_t__ PI8042_KEYBOARD_ISR ;
typedef int * PFILE_OBJECT ;
typedef int * PDEVICE_OBJECT ;
typedef int NTSTATUS ;
typedef int INTERNAL_I8042_HOOK_KEYBOARD ;
typedef int BOOLEAN ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 TYPE_1__* FUNC_2 (int ,int) ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int *,int ,int **,int **) ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_8 (int *,int ,TYPE_1__*,int) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (TYPE_1__*,int) ;

BOOLEAN FUNC_11(void)
{
 PINTERNAL_I8042_HOOK_KEYBOARD VAR_5;

    UNICODE_STRING VAR_6 = FUNC_9(L"\\Device\\Keyboard");
 PDEVICE_OBJECT VAR_7 = ((void*)0);
 PFILE_OBJECT VAR_8 = ((void*)0);
 NTSTATUS VAR_9;

 FUNC_1();


    if( !FUNC_6( VAR_9 = FUNC_4( &VAR_6, VAR_1, &VAR_8, &VAR_7 ) ) )
 {
  FUNC_0((0,"PatchKeyboardDriver: IoGetDeviceObjectPointer status: %x\n", VAR_9));
  return VAR_0;
 }
 VAR_5 = FUNC_2( VAR_3, sizeof( INTERNAL_I8042_HOOK_KEYBOARD ) );
 FUNC_10( VAR_5, sizeof( INTERNAL_I8042_HOOK_KEYBOARD ) );

 VAR_5->IsrRoutine = (PI8042_KEYBOARD_ISR) VAR_4;
 VAR_5->Context = (PVOID) ((void*)0);


 VAR_9 = FUNC_8( VAR_7, VAR_2,
   VAR_5, sizeof( INTERNAL_I8042_HOOK_KEYBOARD ) );
 FUNC_0((0,"PatchKeyboardDriver: PiceSendIoctl status: %x\n", VAR_9));


 FUNC_7(VAR_8);
 FUNC_3(VAR_5);

 FUNC_5();

    return FUNC_6(VAR_9);
}
