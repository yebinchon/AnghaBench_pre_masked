
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
typedef int HWAVEOUT ;
typedef scalar_t__ DWORD ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,char*,int ,...) ;
 scalar_t__ FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (char*,int ,int ) ;
 scalar_t__ FUNC_6 (int ,TYPE_1__*,int) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (scalar_t__) ;
 int VAR_8 ;

__attribute__((used)) static void FUNC_9(int VAR_9, HWAVEOUT VAR_10, DWORD VAR_11,
                           LPWAVEFORMATEX VAR_12 )
{
    MMTIME VAR_13;
    MMRESULT VAR_14;
    DWORD VAR_15;

    VAR_13.wType = VAR_2;
    VAR_14=FUNC_6(VAR_10, &VAR_13, sizeof(VAR_13) - 1);
    FUNC_3(VAR_14==VAR_0,
       "waveOutGetPosition(%s): rc=%s\n",FUNC_2(VAR_9),FUNC_7(VAR_14));

    VAR_13.wType = VAR_2;
    VAR_14=FUNC_6(VAR_10, &VAR_13, sizeof(VAR_13) + 1);
    FUNC_3(VAR_14==VAR_1,
       "waveOutGetPosition(%s): rc=%s\n",FUNC_2(VAR_9),FUNC_7(VAR_14));
    if (VAR_13.wType != VAR_2 && VAR_8 > 1)
        FUNC_5("waveOutGetPosition(%s): TIME_BYTES not supported, returned %s\n",
              FUNC_2(VAR_9),FUNC_8(VAR_13.wType));
    VAR_15 = FUNC_4(&VAR_13, VAR_12);
    FUNC_3(VAR_15 == VAR_11, "waveOutGetPosition(%s): returned %d bytes, "
       "should be %d\n", FUNC_2(VAR_9), VAR_15, VAR_11);

    VAR_13.wType = VAR_5;
    VAR_14=FUNC_6(VAR_10, &VAR_13, sizeof(VAR_13));
    FUNC_3(VAR_14==VAR_1,
       "waveOutGetPosition(%s): rc=%s\n",FUNC_2(VAR_9),FUNC_7(VAR_14));
    if (VAR_13.wType != VAR_5 && VAR_8 > 1)
        FUNC_5("waveOutGetPosition(%s): TIME_SAMPLES not supported, "
              "returned %s\n",FUNC_2(VAR_9),FUNC_8(VAR_13.wType));
    VAR_15 = FUNC_4(&VAR_13, VAR_12);
    FUNC_3(VAR_15 == VAR_11, "waveOutGetPosition(%s): returned %d samples "
       "(%d bytes), should be %d (%d bytes)\n", FUNC_2(VAR_9),
       FUNC_1(VAR_15, VAR_12), VAR_15,
       FUNC_1(VAR_11, VAR_12), VAR_11);

    VAR_13.wType = VAR_4;
    VAR_14=FUNC_6(VAR_10, &VAR_13, sizeof(VAR_13));
    FUNC_3(VAR_14==VAR_1,
       "waveOutGetPosition(%s): rc=%s\n",FUNC_2(VAR_9),FUNC_7(VAR_14));
    if (VAR_13.wType != VAR_4 && VAR_8 > 1)
        FUNC_5("waveOutGetPosition(%s): TIME_MS not supported, returned %s\n",
              FUNC_2(VAR_9), FUNC_8(VAR_13.wType));
    VAR_15 = FUNC_4(&VAR_13, VAR_12);
    FUNC_3(VAR_15 == VAR_11, "waveOutGetPosition(%s): returned %d ms, "
       "(%d bytes), should be %d (%d bytes)\n", FUNC_2(VAR_9),
       FUNC_0(VAR_15, VAR_12), VAR_15,
       FUNC_0(VAR_11, VAR_12), VAR_11);

    VAR_13.wType = VAR_6;
    VAR_14=FUNC_6(VAR_10, &VAR_13, sizeof(VAR_13));
    FUNC_3(VAR_14==VAR_1,
       "waveOutGetPosition(%s): rc=%s\n",FUNC_2(VAR_9),FUNC_7(VAR_14));
    if (VAR_13.wType != VAR_6 && VAR_8 > 1)
        FUNC_5("waveOutGetPosition(%s): TIME_SMPTE not supported, returned %s\n",
              FUNC_2(VAR_9),FUNC_8(VAR_13.wType));
    VAR_15 = FUNC_4(&VAR_13, VAR_12);
    FUNC_3(VAR_15 == VAR_11, "waveOutGetPosition(%s): SMPTE test failed\n",
       FUNC_2(VAR_9));

    VAR_13.wType = VAR_3;
    VAR_14=FUNC_6(VAR_10, &VAR_13, sizeof(VAR_13));
    FUNC_3(VAR_14==VAR_1,
       "waveOutGetPosition(%s): rc=%s\n",FUNC_2(VAR_9),FUNC_7(VAR_14));
    if (VAR_13.wType != VAR_3 && VAR_8 > 1)
        FUNC_5("waveOutGetPosition(%s): TIME_MIDI not supported, returned %s\n",
              FUNC_2(VAR_9),FUNC_8(VAR_13.wType));
    VAR_15 = FUNC_4(&VAR_13, VAR_12);
    FUNC_3(VAR_15 == VAR_11, "waveOutGetPosition(%s): MIDI test failed\n",
       FUNC_2(VAR_9));

    VAR_13.wType = VAR_7;
    VAR_14=FUNC_6(VAR_10, &VAR_13, sizeof(VAR_13));
    FUNC_3(VAR_14==VAR_1,
       "waveOutGetPosition(%s): rc=%s\n",FUNC_2(VAR_9),FUNC_7(VAR_14));
    if (VAR_13.wType != VAR_7 && VAR_8 > 1)
        FUNC_5("waveOutGetPosition(%s): TIME_TICKS not supported, returned %s\n",
              FUNC_2(VAR_9),FUNC_8(VAR_13.wType));
    VAR_15 = FUNC_4(&VAR_13, VAR_12);
    FUNC_3(VAR_15 == VAR_11, "waveOutGetPosition(%s): TICKS test failed\n",
       FUNC_2(VAR_9));
}
