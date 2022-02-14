
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef char* sds ;
struct TYPE_5__ {unsigned long replicate; scalar_t__ migrating_count; char** migrating; scalar_t__ importing_count; char** importing; scalar_t__ current_epoch; int slots_count; int port; int ip; int name; } ;
typedef TYPE_1__ clusterManagerNode ;


 char* FUNC_0 (TYPE_1__*) ;
 char* FUNC_1 (TYPE_1__*) ;
 char* FUNC_2 (char*,char*) ;
 char* FUNC_3 (char*,char*,char*,...) ;
 char* FUNC_4 (char*,char*,unsigned long,...) ;
 char* FUNC_5 () ;
 int FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (char*) ;
 char* FUNC_8 (char*,char) ;

__attribute__((used)) static sds FUNC_9(clusterManagerNode *VAR_0,
                                     unsigned long VAR_1)
{
    sds VAR_2 = FUNC_5();
    sds VAR_3 = FUNC_5();
    if (VAR_0->replicate)
        VAR_3 = FUNC_4(VAR_3, "\"%s\"", VAR_0->replicate);
    else
        VAR_3 = FUNC_2(VAR_3, "null");
    sds VAR_4 = FUNC_1(VAR_0);
    sds VAR_5 = FUNC_0(VAR_0);
    char *VAR_6 = VAR_4;
    while ((VAR_6 = FUNC_8(VAR_6, '-')) != ((void*)0))
        *(VAR_6++) = ',';
    VAR_2 = FUNC_4(VAR_2,
        "  {\n"
        "    \"name\": \"%s\",\n"
        "    \"host\": \"%s\",\n"
        "    \"port\": %d,\n"
        "    \"replicate\": %s,\n"
        "    \"slots\": [%s],\n"
        "    \"slots_count\": %d,\n"
        "    \"flags\": \"%s\",\n"
        "    \"current_epoch\": %llu",
        VAR_0->name,
        VAR_0->ip,
        VAR_0->port,
        VAR_3,
        VAR_4,
        VAR_0->slots_count,
        VAR_5,
        (unsigned long long)VAR_0->current_epoch
    );
    if (VAR_1 > 0) {
        VAR_2 = FUNC_4(VAR_2, ",\n    \"cluster_errors\": %lu",
                            VAR_1);
    }
    if (VAR_0->migrating_count > 0 && VAR_0->migrating != ((void*)0)) {
        int VAR_7 = 0;
        sds VAR_8 = FUNC_5();
        for (; VAR_7 < VAR_0->migrating_count; VAR_7 += 2) {
            sds VAR_9 = VAR_0->migrating[VAR_7];
            sds VAR_10 = VAR_0->migrating[VAR_7 + 1];
            if (VAR_9 && VAR_10) {
                if (FUNC_7(VAR_8) > 0) VAR_8 = FUNC_2(VAR_8, ",");
                VAR_8 = FUNC_3(VAR_8, "\"%S\": \"%S\"", VAR_9, VAR_10);
            }
        }
        if (FUNC_7(VAR_8) > 0)
            VAR_2 = FUNC_3(VAR_2, ",\n    \"migrating\": {%S}", VAR_8);
        FUNC_6(VAR_8);
    }
    if (VAR_0->importing_count > 0 && VAR_0->importing != ((void*)0)) {
        int VAR_11 = 0;
        sds VAR_12 = FUNC_5();
        for (; VAR_11 < VAR_0->importing_count; VAR_11 += 2) {
            sds VAR_13 = VAR_0->importing[VAR_11];
            sds VAR_14 = VAR_0->importing[VAR_11 + 1];
            if (VAR_13 && VAR_14) {
                if (FUNC_7(VAR_12) > 0) VAR_12 = FUNC_2(VAR_12, ",");
                VAR_12 = FUNC_3(VAR_12, "\"%S\": \"%S\"", VAR_13, VAR_14);
            }
        }
        if (FUNC_7(VAR_12) > 0)
            VAR_2 = FUNC_3(VAR_2, ",\n    \"importing\": {%S}", VAR_12);
        FUNC_6(VAR_12);
    }
    VAR_2 = FUNC_2(VAR_2, "\n  }");
    FUNC_6(VAR_3);
    FUNC_6(VAR_4);
    FUNC_6(VAR_5);
    return VAR_2;
}
