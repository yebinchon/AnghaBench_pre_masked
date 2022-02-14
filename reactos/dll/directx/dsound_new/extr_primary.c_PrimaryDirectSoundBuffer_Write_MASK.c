
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int hPin; } ;
struct TYPE_8__ {int Numerator; int Denominator; } ;
struct TYPE_9__ {int Size; TYPE_1__ PresentationTime; int Data; scalar_t__ DataUsed; scalar_t__ FrameExtent; int hEvent; } ;
typedef TYPE_2__ OVERLAPPED ;
typedef int LPVOID ;
typedef int LPDIRECTSOUNDBUFFER8 ;
typedef TYPE_3__* LPCDirectSoundBuffer ;
typedef TYPE_2__ KSSTREAM_HEADER ;
typedef scalar_t__ DWORD ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int *,int ,int ,int *) ;
 scalar_t__ FUNC_3 (int ,int ,int *,int ,TYPE_2__*,int,scalar_t__*,TYPE_2__*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (TYPE_2__*,int) ;
 int VAR_4 ;

DWORD
FUNC_5(
    LPDIRECTSOUNDBUFFER8 VAR_5,
    LPVOID VAR_6,
    DWORD VAR_7)
{
    KSSTREAM_HEADER VAR_8;
    DWORD VAR_9, VAR_10;
    OVERLAPPED VAR_11;

    LPCDirectSoundBuffer VAR_12 = (LPCDirectSoundBuffer)FUNC_1(VAR_5, VAR_0, VAR_4);

    FUNC_4(&VAR_11, sizeof(OVERLAPPED));
    VAR_11.hEvent = FUNC_2(((void*)0), VAR_2, VAR_2, ((void*)0));


    FUNC_0(VAR_12->hPin);
    FUNC_4(&VAR_8, sizeof(KSSTREAM_HEADER));

    VAR_8.FrameExtent = VAR_7;
    VAR_8.DataUsed = VAR_7;
    VAR_8.Data = VAR_6;
    VAR_8.Size = sizeof(KSSTREAM_HEADER);
    VAR_8.PresentationTime.Numerator = 1;
    VAR_8.PresentationTime.Denominator = 1;

    VAR_9 = FUNC_3(VAR_12->hPin, VAR_3, ((void*)0), 0, &VAR_8, sizeof(KSSTREAM_HEADER), &VAR_10, &VAR_11);

    if (VAR_9 != VAR_1)
        return 0;

    return VAR_10;
}
