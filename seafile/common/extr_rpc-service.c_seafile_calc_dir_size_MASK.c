
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int gint64 ;
typedef int GError ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*,int **) ;
 int FUNC_1 (int **,int ,int ,char*) ;
 int FUNC_2 (char*,char const*) ;

int
FUNC_3 (const char *VAR_2, GError **VAR_3)
{
    if (!VAR_2) {
        FUNC_1 (VAR_3, VAR_0, VAR_1, "Argument should not be null");
        return -1;
    }

    gint64 VAR_4 = FUNC_0(VAR_2, VAR_3);
    if (VAR_4 < 0) {
        FUNC_2 ("failed to calculate dir size for %s\n", VAR_2);
        return -1;
    }


    int VAR_5 = (int) (VAR_4 >> 20);
    return VAR_5;
}
