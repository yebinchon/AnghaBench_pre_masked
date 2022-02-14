
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct bluray_priv_s {int bd; } ;
struct TYPE_6__ {struct bluray_priv_s* priv; } ;
typedef TYPE_1__ stream_t ;
struct TYPE_7__ {int bdplus_handled; int libbdplus_detected; scalar_t__ bdplus_detected; int aacs_error_code; int aacs_handled; int libaacs_detected; scalar_t__ aacs_detected; int bluray_detected; } ;
typedef TYPE_2__ BLURAY_DISC_INFO ;


 int FUNC_0 (TYPE_1__*,char*,...) ;
 int FUNC_1 (int ) ;
 TYPE_2__* FUNC_2 (int ) ;

__attribute__((used)) static bool FUNC_3(stream_t *VAR_0)
{
    struct bluray_priv_s *VAR_1 = VAR_0->priv;
    const BLURAY_DISC_INFO *VAR_2 = FUNC_2(VAR_1->bd);


    if (!VAR_2->bluray_detected) {
        FUNC_0(VAR_0, "Given stream is not a Blu-ray.\n");
        return 0;
    }


    if (VAR_2->aacs_detected) {
        if (!VAR_2->libaacs_detected) {
            FUNC_0(VAR_0, "AACS encryption detected but cannot find libaacs.\n");
            return 0;
        }
        if (!VAR_2->aacs_handled) {
            FUNC_0(VAR_0, "AACS error: %s\n", FUNC_1(VAR_2->aacs_error_code));
            return 0;
        }
    }


    if (VAR_2->bdplus_detected) {
        if (!VAR_2->libbdplus_detected) {
            FUNC_0(VAR_0, "BD+ encryption detected but cannot find libbdplus.\n");
            return 0;
        }
        if (!VAR_2->bdplus_handled) {
            FUNC_0(VAR_0, "Cannot decrypt BD+ encryption.\n");
            return 0;
        }
    }

    return 1;
}
