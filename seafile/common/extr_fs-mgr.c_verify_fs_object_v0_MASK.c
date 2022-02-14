
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int gboolean ;


 int VAR_0 ;


 int VAR_1 ;
 int FUNC_0 (char const*,int *,int,int ) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (char const*,int *,int,int ) ;
 int FUNC_3 (char const*,int *,int,int ) ;

__attribute__((used)) static gboolean
FUNC_4 (const char *VAR_2,
                     uint8_t *VAR_3,
                     int VAR_4,
                     gboolean VAR_5)
{
    gboolean VAR_6 = VAR_1;

    int VAR_7 = FUNC_0 (VAR_2, VAR_3, VAR_4, VAR_0);
    switch (VAR_7) {
    case 128:
        VAR_6 = FUNC_3 (VAR_2, VAR_3, VAR_4, VAR_5);
        break;
    case 129:
        VAR_6 = FUNC_2 (VAR_2, VAR_3, VAR_4, VAR_5);
        break;
    default:
        FUNC_1 ("Invalid meta data type: %d.\n", VAR_7);
        return VAR_0;
    }

    return VAR_6;
}
