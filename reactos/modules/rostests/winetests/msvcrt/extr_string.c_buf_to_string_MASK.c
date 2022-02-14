
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*,unsigned char) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static char *FUNC_2(const unsigned char *VAR_0, int VAR_1, int VAR_2)
{
    static char VAR_3[2][1024];
    char *VAR_4 = VAR_3[VAR_2];
    int VAR_5;

    for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++)
    {
        FUNC_0(VAR_4, "%02x ", (unsigned char)VAR_0[VAR_5]);
        VAR_4 += FUNC_1(VAR_4);
    }
    return VAR_3[VAR_2];
}
