
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
typedef scalar_t__ u32 ;
typedef scalar_t__ ULONG ;
struct TYPE_5__ {int DeviceId; } ;
struct TYPE_4__ {int QuadPart; } ;
typedef TYPE_1__ LARGE_INTEGER ;
typedef int BOOLEAN ;
typedef scalar_t__ ARC_STATUS ;


 scalar_t__ FUNC_0 (int ,void*,scalar_t__,scalar_t__*) ;
 scalar_t__ FUNC_1 (int ,TYPE_1__*,int ) ;
 TYPE_2__* VAR_0 ;
 int FUNC_2 (char*,scalar_t__) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static BOOLEAN FUNC_3(u64 VAR_5, void *VAR_6, u32 VAR_7)
{
    LARGE_INTEGER VAR_8;
    ULONG VAR_9;
    ARC_STATUS VAR_10;

    if (!VAR_6)
        return VAR_2;

    VAR_8.QuadPart = VAR_5;
    VAR_10 = FUNC_1(VAR_0->DeviceId, &VAR_8, VAR_3);
    if (VAR_10 != VAR_1)
    {
        FUNC_2("ArcSeek returned status %lu\n", VAR_10);
        return VAR_2;
    }

    VAR_10 = FUNC_0(VAR_0->DeviceId, VAR_6, VAR_7, &VAR_9);
    if (VAR_10 != VAR_1 || VAR_9 != VAR_7)
    {
        FUNC_2("ArcRead returned status %lu\n", VAR_10);
        return VAR_2;
    }

    return VAR_4;
}
