
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int format ;







 scalar_t__ FUNC_0 (char*,char const*,int) ;
 char* FUNC_1 (char*,char) ;

int FUNC_2(char *VAR_0)
{
    int VAR_1;
    static const char *VAR_2[] = {"pgx", "bin", "img", "j3d", "jp3d", "j2k"};
    static const int VAR_3[] = { 128, 132, 131, 129, 129, 130};
    char * VAR_4 = FUNC_1(VAR_0, '.');
    if (VAR_4) {
        VAR_4++;
        for (VAR_1 = 0; VAR_1 < sizeof(VAR_3) / sizeof(*VAR_3); VAR_1++) {
            if (FUNC_0(VAR_4, VAR_2[VAR_1], 3) == 0) {
                return VAR_3[VAR_1];
            }
        }
    }

    return -1;
}
