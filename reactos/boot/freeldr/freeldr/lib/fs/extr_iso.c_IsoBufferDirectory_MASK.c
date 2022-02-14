
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_3__ {int LowPart; scalar_t__ HighPart; } ;
typedef scalar_t__ PVOID ;
typedef TYPE_1__ LARGE_INTEGER ;
typedef scalar_t__ ARC_STATUS ;


 scalar_t__ FUNC_0 (int,scalar_t__,int,int*) ;
 scalar_t__ FUNC_1 (int,TYPE_1__*,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_2 (int,int ) ;
 int FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (int,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (char*,int,...) ;

__attribute__((used)) static ARC_STATUS FUNC_6(ULONG VAR_6, ULONG VAR_7, ULONG VAR_8,
    PVOID* VAR_9)
{
    PVOID VAR_10;
    ULONG VAR_11;
    LARGE_INTEGER VAR_12;
    ULONG VAR_13;
    ARC_STATUS VAR_14;

    FUNC_5("IsoBufferDirectory() DirectoryStartSector = %d DirectoryLength = %d\n", VAR_7, VAR_8);

    VAR_11 = FUNC_4(VAR_8, VAR_3) / VAR_3;
    FUNC_5("Trying to read (DirectoryCount) %d sectors.\n", VAR_11);




    FUNC_5("Trying to allocate (DirectoryLength) %d bytes.\n", VAR_8);
    VAR_10 = FUNC_2(VAR_8, VAR_5);
    if (!VAR_10)
        return VAR_1;




    VAR_12.HighPart = 0;
    VAR_12.LowPart = VAR_7 * VAR_3;
    VAR_14 = FUNC_1(VAR_6, &VAR_12, VAR_4);
    if (VAR_14 != VAR_2)
    {
        FUNC_3(VAR_10, VAR_5);
        return VAR_14;
    }
    VAR_14 = FUNC_0(VAR_6, VAR_10, VAR_11 * VAR_3, &VAR_13);
    if (VAR_14 != VAR_2 || VAR_13 != VAR_11 * VAR_3)
    {
        FUNC_3(VAR_10, VAR_5);
        return VAR_0;
    }

    *VAR_9 = VAR_10;
    return VAR_2;
}
