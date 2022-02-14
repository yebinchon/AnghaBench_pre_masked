
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef scalar_t__ USHORT ;


 int VAR_0 ;
 int FUNC_0 (unsigned char**,scalar_t__*,scalar_t__*,int) ;

int FUNC_1(unsigned char **VAR_1, uint32_t *VAR_2, const char **VAR_3)
{
    int VAR_4;
    USHORT VAR_5;

    VAR_4 = FUNC_0(VAR_1, VAR_2, &VAR_5, sizeof(USHORT));
    if (VAR_4) goto out;
    if (*VAR_2 < VAR_5) {
        VAR_4 = VAR_0;
        goto out;
    }
    *VAR_3 = (const char*)*VAR_1;
    *VAR_1 += VAR_5;
    *VAR_2 -= VAR_5;
out:
    return VAR_4;
}
