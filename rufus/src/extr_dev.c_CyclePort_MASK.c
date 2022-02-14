
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int cycle_port ;
struct TYPE_6__ {int ConnectionIndex; } ;
typedef TYPE_1__ USB_CYCLE_PORT_PARAMS ;
struct TYPE_7__ {int ** String; } ;
typedef scalar_t__ HANDLE ;
typedef int DWORD ;
typedef int BOOL ;


 scalar_t__ FUNC_0 (int *,int ,int ,int *,int ,int ,int *) ;
 int FUNC_1 (scalar_t__,int ,TYPE_1__*,int,TYPE_1__*,int,int*,int *) ;
 TYPE_3__ VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 () ;
 int FUNC_4 (TYPE_1__*,int ,int) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (char*,...) ;

BOOL FUNC_7(int VAR_10)
{
 static uint64_t VAR_11 = 0;
 BOOL VAR_12 = VAR_2;
 HANDLE VAR_13 = VAR_6;
 DWORD VAR_14;
 USB_CYCLE_PORT_PARAMS VAR_15;


 if (FUNC_2() < VAR_11 + 10000ULL) {
  FUNC_6("You must wait at least 10 seconds before trying to reset a device");
  return VAR_2;
 }

 if (VAR_0.String[VAR_10] == ((void*)0)) {
  FUNC_6("The device you are trying to reset does not appear to be a USB device...");
  return VAR_2;
 }

 VAR_11 = FUNC_2();

 VAR_13 = FUNC_0(VAR_0.String[VAR_10], VAR_5, VAR_4, ((void*)0), VAR_8, VAR_3, ((void*)0));
 if (VAR_13 == VAR_6) {
  FUNC_6("Could not open %s: %s", VAR_0.String[VAR_10], FUNC_3());
  goto out;
 }

 VAR_14 = sizeof(VAR_15);
 FUNC_4(&VAR_15, 0, VAR_14);
 VAR_15.ConnectionIndex = VAR_1[VAR_10];
 FUNC_6("Cycling port %d (reset) on %s", VAR_1[VAR_10], VAR_0.String[VAR_10]);


 if (!FUNC_1(VAR_13, VAR_7, &VAR_15, VAR_14, &VAR_15, VAR_14, &VAR_14, ((void*)0))) {
  FUNC_6("  Failed to cycle port: %s", FUNC_3());
  goto out;
 }
 FUNC_6("Please wait for the device to re-appear...");
 VAR_12 = VAR_9;

out:
 FUNC_5(VAR_13);
 return VAR_12;
}
