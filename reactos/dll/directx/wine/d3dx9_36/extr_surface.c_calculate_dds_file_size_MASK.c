
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dds_header {int dummy; } ;
typedef scalar_t__ UINT ;
typedef int D3DFORMAT ;


 int FUNC_0 (int ,scalar_t__,scalar_t__,scalar_t__*,scalar_t__*) ;
 scalar_t__ FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static UINT FUNC_2(D3DFORMAT VAR_0, UINT VAR_1, UINT VAR_2, UINT VAR_3,
    UINT VAR_4, UINT VAR_5)
{
    UINT VAR_6, VAR_7 = 0;

    for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++)
    {
        UINT VAR_8, VAR_9 = 0;
        FUNC_0(VAR_0, VAR_1, VAR_2, &VAR_8, &VAR_9);
        VAR_9 *= VAR_3;
        VAR_7 += VAR_9;
        VAR_1 = FUNC_1(1, VAR_1 / 2);
        VAR_2 = FUNC_1(1, VAR_2 / 2);
        VAR_3 = FUNC_1(1, VAR_3 / 2);
    }

    VAR_7 *= VAR_5;
    VAR_7 += sizeof(struct dds_header);
    return VAR_7;
}
