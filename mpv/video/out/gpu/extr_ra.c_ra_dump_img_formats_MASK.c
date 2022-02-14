
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ra_imgfmt_desc {int dummy; } ;
struct ra {int log; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ra*,int,char*,...) ;
 char* FUNC_1 (int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (struct ra*,struct ra_imgfmt_desc*,int) ;
 scalar_t__ FUNC_4 (struct ra*,int,struct ra_imgfmt_desc*) ;
 scalar_t__ FUNC_5 (char const*,char*) ;

void FUNC_6(struct ra *VAR_2, int VAR_3)
{
    if (!FUNC_2(VAR_2->log, VAR_3))
        return;
    FUNC_0(VAR_2, VAR_3, "Image formats:\n");
    for (int VAR_4 = VAR_1; VAR_4 < VAR_0; VAR_4++) {
        const char *VAR_5 = FUNC_1(VAR_4);
        if (FUNC_5(VAR_5, "unknown") == 0)
            continue;
        FUNC_0(VAR_2, VAR_3, "  %s", VAR_5);
        struct ra_imgfmt_desc VAR_6;
        if (FUNC_4(VAR_2, VAR_4, &VAR_6)) {
            FUNC_0(VAR_2, VAR_3, " => ");
            FUNC_3(VAR_2, &VAR_6, VAR_3);
        } else {
            FUNC_0(VAR_2, VAR_3, "\n");
        }
    }
}
