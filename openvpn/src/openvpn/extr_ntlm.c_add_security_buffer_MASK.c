
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned char*,void*,unsigned char) ;

__attribute__((used)) static void
FUNC_1(int VAR_0, void *VAR_1, int VAR_2,
                    unsigned char *VAR_3, int *VAR_4)
{


    VAR_3[VAR_0] = (unsigned char)VAR_2;
    VAR_3[VAR_0 + 2] = VAR_3[VAR_0];
    VAR_3[VAR_0 + 4] = (unsigned char)(*VAR_4 & 0xff);
    VAR_3[VAR_0 + 5] = (unsigned char)((*VAR_4 >> 8) & 0xff);
    FUNC_0(&VAR_3[*VAR_4], VAR_1, VAR_3[VAR_0]);
    *VAR_4 += VAR_2;
}
