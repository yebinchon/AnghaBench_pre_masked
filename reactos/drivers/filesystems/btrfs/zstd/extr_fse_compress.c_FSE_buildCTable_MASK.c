
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FSE_FUNCTION_TYPE ;
typedef int FSE_CTable ;


 int * FUNC_0 (int ,int,int ) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_2 (int *,short const*,unsigned int,unsigned int,int *,int) ;
 int VAR_2 ;

size_t FUNC_3(FSE_CTable* VAR_3, const short* VAR_4, unsigned VAR_5, unsigned VAR_6)
{
    FSE_FUNCTION_TYPE* VAR_7 = FUNC_0(VAR_2, sizeof(FSE_FUNCTION_TYPE) * VAR_1, VAR_0);
    size_t VAR_8;

    if (!VAR_7)
        return 0;

    VAR_8 = FUNC_2(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, sizeof(FSE_FUNCTION_TYPE) * VAR_1);

    FUNC_1(VAR_7);

    return VAR_8;
}
