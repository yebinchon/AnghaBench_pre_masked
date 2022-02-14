
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int guint8 ;
typedef int gboolean ;


 int VAR_0 ;
 int FUNC_0 (unsigned char*,char const*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (unsigned char*,char*,int) ;
 scalar_t__ FUNC_3 (int *,int,int **,int*) ;
 int FUNC_4 (char*,char const*) ;
 scalar_t__ FUNC_5 (char*,char const*) ;

__attribute__((used)) static gboolean
FUNC_6 (const char *VAR_1, uint8_t *VAR_2, int VAR_3)
{
    guint8 *VAR_4;
    int VAR_5;
    unsigned char VAR_6[20];
    char VAR_7[41];

    if (FUNC_3 (VAR_2, VAR_3, &VAR_4, &VAR_5) < 0) {
        FUNC_4 ("Failed to decompress fs object %s.\n", VAR_1);
        return VAR_0;
    }

    FUNC_0 (VAR_6, (const char *)VAR_4, VAR_5);
    FUNC_2 (VAR_6, VAR_7, 20);

    FUNC_1 (VAR_4);
    return (FUNC_5(VAR_7, VAR_1) == 0);
}
