
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ FLOAT ;
typedef int D3DXFLOAT16 ;
typedef int BOOL ;


 int FUNC_0 (scalar_t__*,int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__) ;
 int FUNC_3 (void*,void*,int) ;

__attribute__((used)) static BOOL FUNC_4(void *VAR_3, void *VAR_4, FLOAT VAR_5)
{
    D3DXFLOAT16 *VAR_6 = VAR_3;
    D3DXFLOAT16 *VAR_7 = VAR_4;
    FLOAT VAR_8;
    FLOAT VAR_9;
    FLOAT VAR_10;

    FLOAT VAR_11[2];
    FLOAT VAR_12[2];

    FUNC_0(VAR_11, VAR_6, 2);
    FUNC_0(VAR_12, VAR_7, 2);

    VAR_8 = FUNC_1(VAR_11[0] - VAR_12[0]);
    VAR_9 = FUNC_1(VAR_11[1] - VAR_12[1]);
    VAR_10 = FUNC_2(VAR_8, VAR_9);

    if (VAR_10 <= VAR_5)
    {
        FUNC_3(VAR_3, VAR_4, 2 * sizeof(D3DXFLOAT16));

        return VAR_2;
    }

    return VAR_0;

}
