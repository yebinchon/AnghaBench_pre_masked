
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ServiceVersionInfo {struct ServiceVersionInfo* name; struct ServiceVersionInfo* next; struct ServiceVersionInfo* fallback; struct ServiceVersionInfo* value; struct ServiceVersionInfo* versioninfo; struct ServiceVersionInfo* service; struct ServiceVersionInfo* regex; struct ServiceVersionInfo* match; int sslports; int ports; struct ServiceVersionInfo* hellostring; } ;
struct ServiceProbeMatch {struct ServiceProbeMatch* name; struct ServiceProbeMatch* next; struct ServiceProbeMatch* fallback; struct ServiceProbeMatch* value; struct ServiceProbeMatch* versioninfo; struct ServiceProbeMatch* service; struct ServiceProbeMatch* regex; struct ServiceProbeMatch* match; int sslports; int ports; struct ServiceProbeMatch* hellostring; } ;
struct ServiceProbeFallback {struct ServiceProbeFallback* name; struct ServiceProbeFallback* next; struct ServiceProbeFallback* fallback; struct ServiceProbeFallback* value; struct ServiceProbeFallback* versioninfo; struct ServiceProbeFallback* service; struct ServiceProbeFallback* regex; struct ServiceProbeFallback* match; int sslports; int ports; struct ServiceProbeFallback* hellostring; } ;
struct NmapServiceProbe {struct NmapServiceProbe* name; struct NmapServiceProbe* next; struct NmapServiceProbe* fallback; struct NmapServiceProbe* value; struct NmapServiceProbe* versioninfo; struct NmapServiceProbe* service; struct NmapServiceProbe* regex; struct NmapServiceProbe* match; int sslports; int ports; struct NmapServiceProbe* hellostring; } ;


 int FUNC_0 (struct ServiceVersionInfo*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(struct NmapServiceProbe *VAR_0)
{
    if (VAR_0->name)
        FUNC_0(VAR_0->name);
    if (VAR_0->hellostring)
        FUNC_0(VAR_0->hellostring);
    FUNC_1(&VAR_0->ports);
    FUNC_1(&VAR_0->sslports);
    while (VAR_0->match) {
        struct ServiceProbeMatch *VAR_1 = VAR_0->match;
        VAR_0->match = VAR_1->next;
        FUNC_0(VAR_1->regex);
        FUNC_0(VAR_1->service);
        while (VAR_1->versioninfo) {
            struct ServiceVersionInfo *VAR_2 = VAR_1->versioninfo;
            VAR_1->versioninfo = VAR_2->next;
            if (VAR_2->value)
                FUNC_0(VAR_2->value);
            FUNC_0(VAR_2);
        }
        FUNC_0(VAR_1);
    }
    while (VAR_0->fallback) {
        struct ServiceProbeFallback *VAR_3;

        VAR_3 = VAR_0->fallback;
        VAR_0->fallback = VAR_3->next;
        if (VAR_3->name)
            FUNC_0(VAR_3->name);
        FUNC_0(VAR_3);
    }

    FUNC_0(VAR_0);
}
