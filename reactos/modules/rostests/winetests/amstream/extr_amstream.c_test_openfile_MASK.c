
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IGraphBuilder ;
typedef int IAMMultiMediaStream ;
typedef scalar_t__ HRESULT ;


 scalar_t__ FUNC_0 (int *,int **) ;
 scalar_t__ FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ VAR_0 ;
 int * FUNC_4 () ;
 int VAR_1 ;
 int FUNC_5 (int,char*,...) ;

__attribute__((used)) static void FUNC_6(void)
{
    IAMMultiMediaStream *VAR_2;
    HRESULT VAR_3;
    IGraphBuilder* VAR_4;

    if (!(VAR_2 = FUNC_4()))
        return;

    VAR_3 = FUNC_0(VAR_2, &VAR_4);
    FUNC_5(VAR_3==VAR_0, "IAMMultiMediaStream_GetFilterGraph returned: %x\n", VAR_3);
    FUNC_5(VAR_4==((void*)0), "Filtergraph should not be created yet\n");

    if (VAR_4)
        FUNC_3(VAR_4);

    VAR_3 = FUNC_1(VAR_2, VAR_1, 0);
    FUNC_5(VAR_3==VAR_0, "IAMMultiMediaStream_OpenFile returned: %x\n", VAR_3);

    VAR_3 = FUNC_0(VAR_2, &VAR_4);
    FUNC_5(VAR_3==VAR_0, "IAMMultiMediaStream_GetFilterGraph returned: %x\n", VAR_3);
    FUNC_5(VAR_4!=((void*)0), "Filtergraph should be created\n");

    if (VAR_4)
        FUNC_3(VAR_4);

    FUNC_2(VAR_2);
}
