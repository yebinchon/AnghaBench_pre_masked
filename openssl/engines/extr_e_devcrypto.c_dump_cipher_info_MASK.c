
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int nid; int devcryptoid; } ;
struct TYPE_4__ {scalar_t__ status; char* driver_name; scalar_t__ accelerated; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 char* FUNC_0 (int) ;
 size_t FUNC_1 (TYPE_2__*) ;
 TYPE_2__* VAR_4 ;
 TYPE_1__* VAR_5 ;
 int FUNC_2 (int ,char*,...) ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_3(void)
{
    size_t VAR_7;
    const char *VAR_8;

    FUNC_2 (VAR_6, "Information about ciphers supported by the /dev/crypto"
             " engine:\n");

    FUNC_2(VAR_6, "CIOCGSESSINFO (session info call) unavailable\n");

    for (VAR_7 = 0; VAR_7 < FUNC_1(VAR_4); VAR_7++) {
        VAR_8 = FUNC_0(VAR_4[VAR_7].nid);
        FUNC_2 (VAR_6, "Cipher %s, NID=%d, /dev/crypto info: id=%d, ",
                 VAR_8 ? VAR_8 : "unknown", VAR_4[VAR_7].nid,
                 VAR_4[VAR_7].devcryptoid);
        if (VAR_5[VAR_7].status == VAR_3 ) {
            FUNC_2 (VAR_6, "CIOCGSESSION (session open call) failed\n");
            continue;
        }
        FUNC_2 (VAR_6, "driver=%s ", VAR_5[VAR_7].driver_name ?
                 VAR_5[VAR_7].driver_name : "unknown");
        if (VAR_5[VAR_7].accelerated == VAR_0)
            FUNC_2(VAR_6, "(hw accelerated)");
        else if (VAR_5[VAR_7].accelerated == VAR_1)
            FUNC_2(VAR_6, "(software)");
        else
            FUNC_2(VAR_6, "(acceleration status unknown)");
        if (VAR_5[VAR_7].status == VAR_2)
            FUNC_2 (VAR_6, ". Cipher setup failed");
        FUNC_2(VAR_6, "\n");
    }
    FUNC_2(VAR_6, "\n");
}
