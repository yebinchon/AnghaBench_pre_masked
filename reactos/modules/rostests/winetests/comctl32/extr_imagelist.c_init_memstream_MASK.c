
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * lpVtbl; } ;
struct memstream {int stream; TYPE_1__ IStream_iface; } ;
typedef scalar_t__ HRESULT ;


 scalar_t__ FUNC_0 (int *,int ,int *) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,char*,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct memstream *VAR_3)
{
    HRESULT VAR_4;

    VAR_3->IStream_iface.lpVtbl = &VAR_2;
    VAR_4 = FUNC_0(((void*)0), VAR_1, &VAR_3->stream);
    FUNC_1(VAR_4 == VAR_0, "Failed to create a stream, hr %#x.\n", VAR_4);
}
