
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int gboolean ;
typedef int GError ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int **,int ,int ,char*) ;
 int FUNC_1 (char const*) ;

__attribute__((used)) static gboolean
FUNC_2 (const char *VAR_4, int VAR_5, const char *VAR_6,
                       const char *VAR_7,
                       GError **VAR_8)
{
    if (!VAR_4) {
        FUNC_0 (VAR_8, VAR_1, VAR_2,
                     "Magic must be specified");
        return VAR_0;
    }

    if (VAR_5 != 1 && VAR_5 != 2 && VAR_5 != 3) {
        FUNC_0 (VAR_8, VAR_1, VAR_2,
                     "Unsupported enc version");
        return VAR_0;
    }

    if (VAR_5 >= 2) {
        if (!VAR_6 || FUNC_1(VAR_6) != 96) {
            FUNC_0 (VAR_8, VAR_1, VAR_2,
                         "Random key not specified");
            return VAR_0;
        }
        if (VAR_5 == 3 && (!(VAR_7) || FUNC_1(VAR_7) != 64) ) {
            FUNC_0 (VAR_8, VAR_1, VAR_2,
                         "Repo salt not specified");
            return VAR_0;
        }
    }

    return VAR_3;
}
