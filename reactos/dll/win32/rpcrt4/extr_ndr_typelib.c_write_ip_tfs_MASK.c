
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GUID ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 int FUNC_0 (unsigned char*,int const*,int) ;

__attribute__((used)) static size_t FUNC_1(unsigned char *VAR_2, size_t *VAR_3, const GUID *VAR_4)
{
    size_t VAR_5 = *VAR_3;

    if (VAR_2)
    {
        VAR_2[*VAR_3] = VAR_1;
        VAR_2[*VAR_3+1] = VAR_0;
        FUNC_0(VAR_2 + *VAR_3 + 2, VAR_4, sizeof(*VAR_4));
    }
    *VAR_3 += 2 + sizeof(*VAR_4);

    return VAR_5;
}
