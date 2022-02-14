
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int WORD ;
typedef int UCHAR ;
struct TYPE_4__ {int Address; scalar_t__ Size; scalar_t__ Handle; scalar_t__ LockCount; } ;
typedef TYPE_1__* PXMS_HANDLE ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (int *,int,scalar_t__) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static UCHAR FUNC_3(WORD VAR_7)
{
    DWORD VAR_8;
    PXMS_HANDLE VAR_9 = FUNC_0(VAR_7);

    if (!FUNC_2(VAR_9))
        return VAR_4;

    if (VAR_9->LockCount)
        return VAR_5;

    VAR_8 = (VAR_9->Address - VAR_2) / VAR_3;
    FUNC_1(&VAR_0, VAR_8, VAR_9->Size);

    VAR_9->Handle = 0;
    VAR_1 += VAR_9->Size;

    return VAR_6;
}
