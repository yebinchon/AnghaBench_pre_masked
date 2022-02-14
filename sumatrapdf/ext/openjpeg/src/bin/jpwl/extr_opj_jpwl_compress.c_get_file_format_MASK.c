
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int format ;
 scalar_t__ FUNC_0 (char*,char const*) ;
 char* FUNC_1 (char*,char) ;

__attribute__((used)) static int FUNC_2(char *VAR_0)
{
    unsigned int VAR_1;
    static const char *VAR_2[] = {
        "pgx", "pnm", "pgm", "ppm", "pbm", "pam", "bmp", "tif", "raw", "tga", "png", "j2k", "jp2", "j2c", "jpc"
    };
    static const int VAR_3[] = {
        133, 131, 131, 131, 131, 131, 136, 128, 130, 129, 132, 135, 134, 135, 135
    };
    char * VAR_4 = FUNC_1(VAR_0, '.');
    if (VAR_4 == ((void*)0)) {
        return -1;
    }
    VAR_4++;
    for (VAR_1 = 0; VAR_1 < sizeof(VAR_3) / sizeof(*VAR_3); VAR_1++) {
        if (FUNC_0(VAR_4, VAR_2[VAR_1]) == 0) {
            return VAR_3[VAR_1];
        }
    }
    return -1;
}
