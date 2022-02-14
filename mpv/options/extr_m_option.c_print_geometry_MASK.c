
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct m_geometry {scalar_t__ y_sign; scalar_t__ x_sign; scalar_t__ xy_valid; scalar_t__ wh_valid; } ;
typedef int m_option_t ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_1 (char*,char*) ;
 char* FUNC_2 (int *,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static char *FUNC_3(const m_option_t *VAR_8, const void *VAR_9)
{
    const struct m_geometry *VAR_10 = VAR_9;
    char *VAR_11 = FUNC_2(((void*)0), "");
    if (VAR_10->wh_valid || VAR_10->xy_valid) {
        if (VAR_10->wh_valid) {
            FUNC_0(VAR_2, VAR_3);
            VAR_11 = FUNC_1(VAR_11, "x");
            FUNC_0(VAR_0, VAR_1);
        }
        if (VAR_10->xy_valid) {
            VAR_11 = FUNC_1(VAR_11, VAR_10->x_sign ? "-" : "+");
            FUNC_0(VAR_4, VAR_5);
            VAR_11 = FUNC_1(VAR_11, VAR_10->y_sign ? "-" : "+");
            FUNC_0(VAR_6, VAR_7);
        }
    }
    return VAR_11;
}
