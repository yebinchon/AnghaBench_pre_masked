
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct udec3 {scalar_t__ x; scalar_t__ y; scalar_t__ z; scalar_t__ w; } ;
typedef scalar_t__ UINT ;
typedef int FLOAT ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 struct udec3 FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 (void*,void*,int) ;

__attribute__((used)) static BOOL FUNC_3(void *VAR_2, void *VAR_3, FLOAT VAR_4)
{
    DWORD *VAR_5 = VAR_2;
    DWORD *VAR_6 = VAR_3;
    struct udec3 VAR_7 = FUNC_0(*VAR_5);
    struct udec3 VAR_8 = FUNC_0(*VAR_6);
    UINT VAR_9 = (UINT)VAR_4;
    UINT VAR_10 = VAR_7 > VAR_8 ? VAR_7 - VAR_8 : VAR_8 - VAR_7;
    UINT VAR_11 = VAR_7 > VAR_8 ? VAR_7 - VAR_8 : VAR_8 - VAR_7;
    UINT VAR_12 = VAR_7 > VAR_8 ? VAR_7 - VAR_8 : VAR_8 - VAR_7;
    UINT VAR_13 = VAR_7 > VAR_8 ? VAR_7 - VAR_8 : VAR_8 - VAR_7;
    UINT VAR_14 = FUNC_1(VAR_10, VAR_11);
    VAR_14 = FUNC_1(VAR_12, VAR_14);
    VAR_14 = FUNC_1(VAR_13, VAR_14);

    if (VAR_14 <= VAR_9)
    {
        FUNC_2(VAR_2, VAR_3, sizeof(DWORD));

        return VAR_1;
    }

    return VAR_0;
}
