
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int huffNodeTable ;
typedef int U32 ;
typedef int HUF_CElt ;


 int * FUNC_0 (int ,int,int ) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 size_t FUNC_2 (int *,int const*,int ,int ,int *,int) ;
 int VAR_1 ;

size_t FUNC_3 (HUF_CElt* VAR_2, const U32* VAR_3, U32 VAR_4, U32 VAR_5)
{
    huffNodeTable* VAR_6 = FUNC_0(VAR_1, sizeof(huffNodeTable), VAR_0);
    size_t VAR_7;

    if (!VAR_6)
        return 0;

    VAR_7 = FUNC_2(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, sizeof(huffNodeTable));

    FUNC_1(VAR_6);

    return VAR_7;
}
