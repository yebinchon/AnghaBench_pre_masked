
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
typedef int bool_t ;
typedef int XDR ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int*) ;

__attribute__((used)) static bool_t FUNC_1(
    XDR *VAR_2,
    uint64_t *VAR_3)
{
    uint32_t VAR_4, VAR_5;

    if (!FUNC_0(VAR_2, &VAR_4))
        return VAR_0;

    if (!FUNC_0(VAR_2, &VAR_5))
        return VAR_0;

    *VAR_3 = VAR_4 * VAR_5;
    return VAR_1;
}
