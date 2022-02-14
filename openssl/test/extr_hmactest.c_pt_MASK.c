
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*,unsigned char) ;

__attribute__((used)) static char *FUNC_1(unsigned char *VAR_0, unsigned int VAR_1)
{
    unsigned int VAR_2;
    static char VAR_3[80];

    for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++)
        FUNC_0(&(VAR_3[VAR_2 * 2]), "%02x", VAR_0[VAR_2]);
    return VAR_3;
}
