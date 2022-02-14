
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
    FLOAT VAR_11;
    FLOAT VAR_12;

    FLOAT VAR_13[4];
    FLOAT VAR_14[4];

    FUNC_0(VAR_13, VAR_6, 4);
    FUNC_0(VAR_14, VAR_7, 4);

    VAR_8 = FUNC_1(VAR_13[0] - VAR_14[0]);
    VAR_9 = FUNC_1(VAR_13[1] - VAR_14[1]);
    VAR_10 = FUNC_1(VAR_13[2] - VAR_14[2]);
    VAR_11 = FUNC_1(VAR_13[3] - VAR_14[3]);
    VAR_12 = FUNC_2(VAR_8, VAR_9);
    VAR_12 = FUNC_2(VAR_10, VAR_12);
    VAR_12 = FUNC_2(VAR_11, VAR_12);

    if (VAR_12 <= VAR_5)
    {
        FUNC_3(VAR_3, VAR_4, 4 * sizeof(D3DXFLOAT16));

        return VAR_2;
    }

    return VAR_0;

}
