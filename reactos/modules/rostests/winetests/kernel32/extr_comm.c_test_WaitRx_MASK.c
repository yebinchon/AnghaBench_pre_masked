
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int overlapped_w ;
typedef int overlapped ;
struct TYPE_6__ {scalar_t__ hEvent; } ;
typedef TYPE_1__ OVERLAPPED ;
typedef scalar_t__ HANDLE ;
typedef scalar_t__ DWORD ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int *,int ,scalar_t__,int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 (scalar_t__,TYPE_1__*,scalar_t__*,scalar_t__) ;
 scalar_t__ FUNC_4 () ;
 scalar_t__ VAR_3 ;
 int FUNC_5 (scalar_t__,scalar_t__) ;
 int FUNC_6 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_7 (scalar_t__,scalar_t__*,TYPE_1__*) ;
 scalar_t__ FUNC_8 (scalar_t__,int,int ) ;
 scalar_t__ FUNC_9 (scalar_t__,char*,int,scalar_t__*,TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*,int) ;
 int VAR_8 ;
 int FUNC_11 (int,char*,...) ;
 scalar_t__ FUNC_12 (int ) ;
 int FUNC_13 (char*,...) ;

__attribute__((used)) static void FUNC_14(void)
{
    OVERLAPPED VAR_9, VAR_10;
    HANDLE VAR_11, VAR_12, VAR_13;
    DWORD VAR_14, VAR_15, VAR_16, VAR_17, VAR_18 = VAR_2, VAR_19;
    DWORD VAR_20, VAR_21, VAR_22, VAR_23=0;

    if (!VAR_8) return;

    VAR_11 = FUNC_12(VAR_6);
    if (VAR_11 == VAR_3) return;

    FUNC_11(FUNC_5(VAR_11, VAR_1), "SetCommMask failed\n");
    VAR_12 = FUNC_1( ((void*)0), VAR_6, VAR_2, ((void*)0) );
    FUNC_11(VAR_12 != 0, "CreateEvent failed\n");
    FUNC_10( &VAR_9, sizeof(VAR_9));
    VAR_9.hEvent = VAR_12;

    VAR_13 = FUNC_1( ((void*)0), VAR_6, VAR_2, ((void*)0) );
    FUNC_11(VAR_13 != ((void*)0), "CreateEvent res %d\n", FUNC_2());
    FUNC_10( &VAR_10, sizeof(VAR_10));
    VAR_10.hEvent = VAR_13;

    VAR_14 = FUNC_4();
    VAR_18 = FUNC_7(VAR_11, &VAR_23, &VAR_9);
    VAR_20 = FUNC_2();
    VAR_15 = FUNC_4();
    FUNC_13("Success 0x%08x err %d evtmask 0x%08x\n", VAR_18, VAR_20, VAR_23);
    FUNC_11(VAR_18 || VAR_20 == VAR_0, "overlapped WaitCommEvent failed\n");
    FUNC_13("overlapped WaitCommEvent returned.\n");

    VAR_19= FUNC_9(VAR_11, "X", 1, &VAR_22, &VAR_10);
    VAR_21 = FUNC_2();
    FUNC_11(VAR_19 || VAR_21 == VAR_0,
       "overlapped WriteFile failed, err %d\n",
       VAR_21);

    if (!VAR_19 && (VAR_21 == VAR_0)) {
      VAR_19 = FUNC_8(VAR_13, VAR_5, VAR_6);
      VAR_21 = FUNC_2();
      FUNC_11(VAR_19 == VAR_7, "WaitForSingleObjectEx, res %d, err %d\n",
  VAR_19, VAR_21);
    }
    FUNC_6(VAR_5 >>1);
    VAR_19 = FUNC_3(VAR_11, &VAR_10, &VAR_22, VAR_2);
    VAR_21 = FUNC_2();

    FUNC_13("Write after Wait res 0x%08x err %d\n",VAR_19, VAR_21);
    FUNC_11(VAR_19 && VAR_22 ==1, "Write after Wait res 0x%08x err %d\n",
       VAR_19, VAR_21);

    if (!VAR_18 && (VAR_20 == VAR_0)) {
      VAR_18 = FUNC_8(VAR_12, VAR_5, VAR_6);
      VAR_20 = FUNC_2();
      FUNC_11(VAR_18 == VAR_7, "wait hComPortEvent, res 0x%08x, err %d\n",
  VAR_18, VAR_20);
    }
    VAR_18 = FUNC_3(VAR_11, &VAR_9, &VAR_22, VAR_2);
    VAR_20 = FUNC_2();
    VAR_16 = FUNC_4();
    FUNC_13("Success 0x%08x err %d evtmask 0x%08x diff1 %d, diff2 %d\n",
   VAR_18, VAR_20, VAR_23, VAR_15-VAR_14, VAR_16-VAR_14);

    FUNC_11(VAR_23 & VAR_1, "Detect  EV_RXCHAR: 0x%08x, expected 0x%08x\n",
       VAR_23, VAR_1);
    VAR_17 = VAR_16 - VAR_14;
    FUNC_11 ((VAR_17 > (VAR_5>>1) -VAR_4) && (VAR_17 < (VAR_5>>1) + VAR_4),
 "Unexpected time %d, expected around %d\n", VAR_17, VAR_5>>1);

    FUNC_0(VAR_11);
}
