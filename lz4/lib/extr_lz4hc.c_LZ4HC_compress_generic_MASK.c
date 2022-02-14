
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int limitedOutput_directive ;
struct TYPE_5__ {int * dictCtx; } ;
typedef TYPE_1__ LZ4HC_CCtx_internal ;


 int FUNC_0 (TYPE_1__* const,char const* const,char* const,int* const,int const,int,int ) ;
 int FUNC_1 (TYPE_1__* const,char const* const,char* const,int* const,int const,int,int ) ;

__attribute__((used)) static int
FUNC_2 (
        LZ4HC_CCtx_internal* const VAR_0,
        const char* const VAR_1,
        char* const VAR_2,
        int* const VAR_3,
        int const VAR_4,
        int VAR_5,
        limitedOutput_directive VAR_6
        )
{
    if (VAR_0->dictCtx == ((void*)0)) {
        return FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
    } else {
        return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
    }
}
