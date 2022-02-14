
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dec3n {scalar_t__ w; scalar_t__ z; scalar_t__ y; scalar_t__ x; } ;
typedef int UINT ;
typedef scalar_t__ INT ;
typedef int const FLOAT ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 struct dec3n FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__) ;
 int FUNC_3 (void*,void*,int) ;

__attribute__((used)) static BOOL FUNC_4(void *VAR_2, void *VAR_3, FLOAT VAR_4)
{
    const UINT VAR_5 = 511;
    DWORD *VAR_6 = VAR_2;
    DWORD *VAR_7 = VAR_3;
    struct dec3n VAR_8 = FUNC_1(*VAR_6);
    struct dec3n VAR_9 = FUNC_1(*VAR_7);
    INT VAR_10 = (INT)(VAR_4 * VAR_5);
    INT VAR_11 = FUNC_0(VAR_8 - VAR_9);
    INT VAR_12 = FUNC_0(VAR_8 - VAR_9);
    INT VAR_13 = FUNC_0(VAR_8 - VAR_9);
    INT VAR_14 = FUNC_0(VAR_8 - VAR_9);
    INT VAR_15 = FUNC_2(VAR_11, VAR_12);
    VAR_15 = FUNC_2(VAR_13, VAR_15);
    VAR_15 = FUNC_2(VAR_14, VAR_15);

    if (VAR_15 <= VAR_10)
    {
        FUNC_3(VAR_2, VAR_3, sizeof(DWORD));

        return VAR_1;
    }

    return VAR_0;
}
