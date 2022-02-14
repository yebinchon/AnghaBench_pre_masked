
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int U32 ;
typedef int HUF_DTable ;


 int* FUNC_0 (int ,int,int ) ;
 int FUNC_1 (int*) ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 int VAR_1 ;
 size_t FUNC_3 (int*,void*,size_t,void const*,size_t) ;
 int VAR_2 ;
 int FUNC_4 (int*,int) ;

size_t FUNC_5 (void* VAR_3, size_t VAR_4, const void* VAR_5, size_t VAR_6)
{
    HUF_DTable* VAR_7 = FUNC_0(VAR_2, sizeof(HUF_DTable) * FUNC_2(VAR_1-1), VAR_0);
    size_t VAR_8;

    if (!VAR_7)
        return 0;

    FUNC_4(VAR_7, sizeof(HUF_DTable) * FUNC_2(VAR_1-1));

    VAR_7[0] = (U32)(VAR_1-1) * 0x01000001;

    VAR_8 = FUNC_3 (VAR_7, VAR_3, VAR_4, VAR_5, VAR_6);

    FUNC_1(VAR_7);

    return VAR_8;
}
