
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int UCHAR ;
struct TYPE_4__ {int CommitWaveBuffer; int Close; int Open; int SetWaveFormat; int QueryWaveFormatSupport; int GetCapabilities; } ;
typedef scalar_t__ PWSTR ;
typedef int PVOID ;
typedef int * PSOUND_DEVICE ;
typedef int MMRESULT ;
typedef TYPE_1__ MMFUNCTION_TABLE ;
typedef int BOOLEAN ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int ,int **) ;
 int FUNC_3 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (char*,scalar_t__) ;
 int VAR_5 ;
 int FUNC_5 (int *,TYPE_1__*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_6 (TYPE_1__*,int) ;
 int FUNC_7 (scalar_t__) ;

BOOLEAN FUNC_8(
    UCHAR VAR_8,
    PWSTR VAR_9)
{
    MMRESULT VAR_10;
    PSOUND_DEVICE VAR_11 = ((void*)0);
    MMFUNCTION_TABLE VAR_12;
    PWSTR VAR_13;

    FUNC_4(L"(Callback) Found device: %wS\n", VAR_9);

    VAR_13 = FUNC_0(FUNC_7(VAR_9));

    if ( ! VAR_13 )
        return VAR_1;

    FUNC_1(VAR_13, VAR_9);

    VAR_10 = FUNC_2(VAR_8, (PVOID) VAR_13, &VAR_11);

    if ( ! FUNC_3(VAR_10) )
        return VAR_1;


    FUNC_6(&VAR_12, sizeof(MMFUNCTION_TABLE));
    VAR_12.GetCapabilities = VAR_2;
    VAR_12.QueryWaveFormatSupport = VAR_4;
    VAR_12.SetWaveFormat = VAR_5;
    VAR_12.Open = VAR_3;
    VAR_12.Close = VAR_0;
    VAR_12.CommitWaveBuffer = VAR_7;


    FUNC_5(VAR_11, &VAR_12);

    return VAR_6;
}
