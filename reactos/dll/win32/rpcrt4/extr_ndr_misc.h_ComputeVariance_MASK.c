
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ ULONG_PTR ;
typedef scalar_t__ ULONG ;
struct TYPE_4__ {scalar_t__ ActualCount; scalar_t__ Offset; } ;
typedef TYPE_1__* PMIDL_STUB_MESSAGE ;
typedef int PFORMAT_STRING ;


 int FUNC_0 (TYPE_1__*,unsigned char*,int ,scalar_t__,scalar_t__*) ;

__attribute__((used)) static inline PFORMAT_STRING FUNC_1(PMIDL_STUB_MESSAGE VAR_0, unsigned char *VAR_1, PFORMAT_STRING VAR_2, ULONG VAR_3)
{
    PFORMAT_STRING VAR_4;
    ULONG_PTR VAR_5 = VAR_0->ActualCount;

    VAR_0->Offset = 0;
    VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, &VAR_5);
    VAR_0->ActualCount = (ULONG)VAR_5;
    return VAR_4;
}
