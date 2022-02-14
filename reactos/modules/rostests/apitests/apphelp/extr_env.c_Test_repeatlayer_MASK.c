
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ QuadPart; } ;
struct TYPE_5__ {scalar_t__ QuadPart; } ;
struct TYPE_7__ {scalar_t__ AppCompatInfo; scalar_t__ ShimDataSize; int * pShimData; TYPE_2__ AppCompatFlagsUser; TYPE_1__ AppCompatFlags; } ;
typedef TYPE_3__ test_RemoteShimInfo ;
typedef int WCHAR ;
typedef int HANDLE ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (char*,char*) ;
 int VAR_1 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *,int *,int,char const**) ;
 int FUNC_4 (int *,int ,char const**) ;
 int FUNC_5 (int *,int *,int ,char const**) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_6 (int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_7 (int ,TYPE_3__*) ;
 int FUNC_8 (int,char*,...) ;
 int FUNC_9 (scalar_t__) ;

__attribute__((used)) static void FUNC_10(WCHAR VAR_6[256])
{
    static const char* VAR_7[] = {
        "256Color", "256Color", "256Color", "256Color",
        "256Color", "256Color", "256Color", "256Color" };

    HANDLE VAR_8;
    test_RemoteShimInfo VAR_9;
    BOOL VAR_10;

    FUNC_1("__COMPAT_LAYER", "256Color 256Color 256Color 256Color 256Color 256Color 256Color 256Color");


    VAR_8 = FUNC_6(VAR_1);
    VAR_10 = FUNC_7(VAR_8, &VAR_9);
    FUNC_2(VAR_8, 0);
    FUNC_0(VAR_8);

    if (VAR_10)
    {
        FUNC_8(VAR_9.AppCompatFlags.QuadPart == 0, "Expected AppCompatFlags to be 0, was: %s\n", FUNC_9(VAR_9.AppCompatFlags.QuadPart));
        FUNC_8(VAR_9.AppCompatFlagsUser.QuadPart == 0, "Expected AppCompatFlagsUser to be 0, was: %s\n", FUNC_9(VAR_9.AppCompatFlagsUser.QuadPart));
        FUNC_8(VAR_9.AppCompatInfo == 0, "Expected AppCompatInfo to be 0, was: %p\n", VAR_9.AppCompatInfo);
        FUNC_8(VAR_9.pShimData != ((void*)0), "Expected pShimData to be valid, was NULL\n");
        FUNC_8(VAR_9.ShimDataSize == VAR_4, "Expected ShimDataSize to be %u, was: %u\n", VAR_4, VAR_9.ShimDataSize);
        if (VAR_9.pShimData)
        {

            if (VAR_5 < VAR_2)
                FUNC_4(VAR_9.pShimData, VAR_0, VAR_7);
            else if (VAR_5 < VAR_3)
                FUNC_5(VAR_9.pShimData, VAR_6, VAR_0, VAR_7);
            else
                FUNC_3(VAR_9.pShimData, VAR_6, 1, VAR_7);
        }
    }
    else
    {
        FUNC_8(0, "Unable to get process info!\n");
    }

}
