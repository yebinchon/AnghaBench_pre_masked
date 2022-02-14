
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HUF_CElt ;
typedef int BYTE ;


 size_t FUNC_0 (int *,int,void const*,size_t,int const*,int const) ;
 size_t FUNC_1 (int *,int,void const*,size_t,int const*,int const) ;
 scalar_t__ FUNC_2 (size_t const) ;

__attribute__((used)) static size_t FUNC_3(
                BYTE* const VAR_0, BYTE* VAR_1, BYTE* const VAR_2,
                const void* VAR_3, size_t VAR_4,
                unsigned VAR_5, const HUF_CElt* VAR_6, const int VAR_7)
{
    size_t const VAR_8 = VAR_5 ?
                         FUNC_0(VAR_1, VAR_2 - VAR_1, VAR_3, VAR_4, VAR_6, VAR_7) :
                         FUNC_1(VAR_1, VAR_2 - VAR_1, VAR_3, VAR_4, VAR_6, VAR_7);
    if (FUNC_2(VAR_8)) { return VAR_8; }
    if (VAR_8==0) { return 0; }
    VAR_1 += VAR_8;

    if ((size_t)(VAR_1-VAR_0) >= VAR_4-1) { return 0; }
    return VAR_1-VAR_0;
}
