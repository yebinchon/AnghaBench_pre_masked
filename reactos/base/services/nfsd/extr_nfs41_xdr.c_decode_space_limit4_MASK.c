
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
typedef int bool_t ;
typedef int XDR ;


 int VAR_0 ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int*) ;

__attribute__((used)) static bool_t FUNC_4(
    XDR *VAR_1,
    uint64_t *VAR_2)
{
    uint32_t VAR_3;

    if (!FUNC_3(VAR_1, &VAR_3))
        return VAR_0;

    switch (VAR_3)
    {
    case 128:
        return FUNC_2(VAR_1, VAR_2);
    case 129:
        return FUNC_0(VAR_1, VAR_2);
    default:
        FUNC_1("decode_space_limit4: limitby %d invalid\n", VAR_3);
        return VAR_0;
    }
}
