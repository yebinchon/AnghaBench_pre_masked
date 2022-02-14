
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int mmtime ;
struct TYPE_4__ {scalar_t__ wType; } ;
typedef TYPE_1__ MMTIME ;
typedef scalar_t__ MMRESULT ;
typedef int LPWAVEFORMATEX ;
typedef int HWAVEIN ;
typedef scalar_t__ DWORD ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,char*,int ,...) ;
 scalar_t__ FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (char*,int ,int ) ;
 scalar_t__ FUNC_6 (int ,TYPE_1__*,int) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (scalar_t__) ;
 int VAR_7 ;

__attribute__((used)) static void FUNC_9(int VAR_8, HWAVEIN VAR_9, DWORD VAR_10,
                           LPWAVEFORMATEX VAR_11 )
{
    MMTIME VAR_12;
    MMRESULT VAR_13;
    DWORD VAR_14;

    VAR_12.wType = VAR_1;
    VAR_13=FUNC_6(VAR_9, &VAR_12, sizeof(VAR_12));
    FUNC_3(VAR_13==VAR_0,
       "waveInGetPosition(%s): rc=%s\n",FUNC_2(VAR_8),FUNC_7(VAR_13));
    if (VAR_12.wType != VAR_1 && VAR_7 > 1)
        FUNC_5("waveInGetPosition(%s): TIME_BYTES not supported, returned %s\n",
              FUNC_2(VAR_8),FUNC_8(VAR_12.wType));
    VAR_14 = FUNC_4(&VAR_12, VAR_11);
    FUNC_3(VAR_14 == VAR_10, "waveInGetPosition(%s): returned %d bytes, "
       "should be %d\n", FUNC_2(VAR_8), VAR_14, VAR_10);

    VAR_12.wType = VAR_4;
    VAR_13=FUNC_6(VAR_9, &VAR_12, sizeof(VAR_12));
    FUNC_3(VAR_13==VAR_0,
       "waveInGetPosition(%s): rc=%s\n",FUNC_2(VAR_8),FUNC_7(VAR_13));
    if (VAR_12.wType != VAR_4 && VAR_7 > 1)
        FUNC_5("waveInGetPosition(%s): TIME_SAMPLES not supported, "
              "returned %s\n",FUNC_2(VAR_8),FUNC_8(VAR_12.wType));
    VAR_14 = FUNC_4(&VAR_12, VAR_11);
    FUNC_3(VAR_14 == VAR_10, "waveInGetPosition(%s): returned %d samples, "
       "should be %d\n", FUNC_2(VAR_8), FUNC_1(VAR_14, VAR_11),
       FUNC_1(VAR_10, VAR_11));

    VAR_12.wType = VAR_3;
    VAR_13=FUNC_6(VAR_9, &VAR_12, sizeof(VAR_12));
    FUNC_3(VAR_13==VAR_0,
       "waveInGetPosition(%s): rc=%s\n",FUNC_2(VAR_8),FUNC_7(VAR_13));
    if (VAR_12.wType != VAR_3 && VAR_7 > 1)
        FUNC_5("waveInGetPosition(%s): TIME_MS not supported, returned %s\n",
              FUNC_2(VAR_8), FUNC_8(VAR_12.wType));
    VAR_14 = FUNC_4(&VAR_12, VAR_11);
    FUNC_3(VAR_14 == VAR_10, "waveInGetPosition(%s): returned %d ms, "
       "should be %d\n", FUNC_2(VAR_8), FUNC_0(VAR_14, VAR_11),
       FUNC_0(VAR_10, VAR_11));

    VAR_12.wType = VAR_5;
    VAR_13=FUNC_6(VAR_9, &VAR_12, sizeof(VAR_12));
    FUNC_3(VAR_13==VAR_0,
       "waveInGetPosition(%s): rc=%s\n",FUNC_2(VAR_8),FUNC_7(VAR_13));
    if (VAR_12.wType != VAR_5 && VAR_7 > 1)
        FUNC_5("waveInGetPosition(%s): TIME_SMPTE not supported, returned %s\n",
              FUNC_2(VAR_8),FUNC_8(VAR_12.wType));
    VAR_14 = FUNC_4(&VAR_12, VAR_11);
    FUNC_3(VAR_14 == VAR_10, "waveInGetPosition(%s): SMPTE test failed\n",
       FUNC_2(VAR_8));

    VAR_12.wType = VAR_2;
    VAR_13=FUNC_6(VAR_9, &VAR_12, sizeof(VAR_12));
    FUNC_3(VAR_13==VAR_0,
       "waveInGetPosition(%s): rc=%s\n",FUNC_2(VAR_8),FUNC_7(VAR_13));
    if (VAR_12.wType != VAR_2 && VAR_7 > 1)
        FUNC_5("waveInGetPosition(%s): TIME_MIDI not supported, returned %s\n",
              FUNC_2(VAR_8),FUNC_8(VAR_12.wType));
    VAR_14 = FUNC_4(&VAR_12, VAR_11);
    FUNC_3(VAR_14 == VAR_10, "waveInGetPosition(%s): MIDI test failed\n",
       FUNC_2(VAR_8));

    VAR_12.wType = VAR_6;
    VAR_13=FUNC_6(VAR_9, &VAR_12, sizeof(VAR_12));
    FUNC_3(VAR_13==VAR_0,
       "waveInGetPosition(%s): rc=%s\n",FUNC_2(VAR_8),FUNC_7(VAR_13));
    if (VAR_12.wType != VAR_6 && VAR_7 > 1)
        FUNC_5("waveInGetPosition(%s): TIME_TICKS not supported, returned %s\n",
              FUNC_2(VAR_8),FUNC_8(VAR_12.wType));
    VAR_14 = FUNC_4(&VAR_12, VAR_11);
    FUNC_3(VAR_14 == VAR_10, "waveInGetPosition(%s): TICKS test failed\n",
       FUNC_2(VAR_8));
}
