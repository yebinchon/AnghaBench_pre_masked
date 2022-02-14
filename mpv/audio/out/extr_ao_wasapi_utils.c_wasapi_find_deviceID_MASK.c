
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct enumerator {long long count; } ;
struct device_desc {int name; int id; } ;
struct ao {int log; } ;
struct TYPE_8__ {int len; } ;
typedef TYPE_1__ bstr ;
typedef long long UINT ;
typedef int * LPWSTR ;


 long long FUNC_0 (TYPE_1__) ;
 int FUNC_1 (struct ao*,char*,long long) ;
 int FUNC_2 (struct ao*,char*,...) ;
 int FUNC_3 (struct ao*,char*,...) ;
 int FUNC_4 (struct ao*,char*,long long,int ,int ) ;
 int FUNC_5 (struct device_desc*,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_1__*,char*) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (TYPE_1__,int ) ;
 long long FUNC_10 (TYPE_1__,TYPE_1__*,int) ;
 struct enumerator* FUNC_11 (int ) ;
 struct device_desc* FUNC_12 (struct enumerator*) ;
 int FUNC_13 (struct enumerator*) ;
 struct device_desc* FUNC_14 (struct enumerator*,long long) ;
 int * FUNC_15 (int ,struct device_desc*) ;
 int FUNC_16 (struct device_desc*) ;
 TYPE_1__ FUNC_17 (struct ao*) ;

LPWSTR FUNC_18(struct ao *VAR_0)
{
    LPWSTR VAR_1 = ((void*)0);
    bstr VAR_2 = FUNC_17(VAR_0);
    FUNC_1(VAR_0, "Find device \'%.*s\'\n", FUNC_0(VAR_2));

    struct device_desc *VAR_3 = ((void*)0);
    struct enumerator *VAR_4 = FUNC_11(VAR_0->log);
    if (!VAR_4)
        goto exit_label;

    if (!VAR_4->count) {
        FUNC_2(VAR_0, "There are no playback devices available\n");
        goto exit_label;
    }

    if (!VAR_2.len) {
        FUNC_3(VAR_0, "No device specified. Selecting default.\n");
        VAR_3 = FUNC_12(VAR_4);
        VAR_1 = FUNC_15(VAR_0->log, VAR_3);
        goto exit_label;
    }


    bstr VAR_5;
    long long VAR_6 = FUNC_10(VAR_2, &VAR_5, 10);
    if (!VAR_5.len && 0 <= VAR_6 && VAR_6 < (long long)VAR_4->count) {
        FUNC_3(VAR_0, "Selecting device by number: #%lld\n", VAR_6);
        VAR_3 = FUNC_14(VAR_4, VAR_6);
        VAR_1 = FUNC_15(VAR_0->log, VAR_3);
        goto exit_label;
    }


    FUNC_7(&VAR_2, "{0.0.0.00000000}.");
    for (UINT VAR_7 = 0; VAR_7 < VAR_4->count; VAR_7++) {
        VAR_3 = FUNC_14(VAR_4, VAR_7);
        if (!VAR_3)
            goto exit_label;

        if (FUNC_9(VAR_2, FUNC_8(FUNC_6(VAR_3->id))) == 0) {
            FUNC_3(VAR_0, "Selecting device by id: \'%.*s\'\n", FUNC_0(VAR_2));
            VAR_1 = FUNC_15(VAR_0->log, VAR_3);
            goto exit_label;
        }

        if (FUNC_9(VAR_2, FUNC_8(FUNC_6(VAR_3->name))) == 0) {
            if (!VAR_1) {
                FUNC_3(VAR_0, "Selecting device by name: \'%.*s\'\n", FUNC_0(VAR_2));
                VAR_1 = FUNC_15(VAR_0->log, VAR_3);
            } else {
                FUNC_4(VAR_0, "Multiple devices matched \'%.*s\'."
                        "Ignoring device \'%s\' (%s).\n",
                        FUNC_0(VAR_2), VAR_3->id, VAR_3->name);
            }
        }
        FUNC_5(VAR_3, FUNC_16(VAR_3));
    }

    if (!VAR_1)
        FUNC_2(VAR_0, "Failed to find device \'%.*s\'\n", FUNC_0(VAR_2));

exit_label:
    FUNC_16(VAR_3);
    FUNC_13(VAR_4);
    return VAR_1;
}
