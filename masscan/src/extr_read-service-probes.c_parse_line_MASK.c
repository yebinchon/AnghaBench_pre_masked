
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ServiceProbeMatch {int is_softmatch; struct ServiceProbeMatch* next; } ;
struct ServiceProbeFallback {struct ServiceProbeFallback* next; } ;
struct RangeList {int count; int member_0; } ;
struct NmapServiceProbeList {char* filename; unsigned int line_number; int count; struct NmapServiceProbe** list; int exclude; } ;
struct NmapServiceProbe {struct ServiceProbeFallback* fallback; void* rarity; void* tcpwrappedms; void* totalwaitms; struct ServiceProbeMatch* match; int sslports; int ports; } ;
typedef enum SvcP_RecordType { ____Placeholder_SvcP_RecordType } SvcP_RecordType ;
 int FUNC_0 (int ,char*,char const*,unsigned int,unsigned int,...) ;
 scalar_t__ FUNC_1 (char const) ;
 scalar_t__ FUNC_2 (char const) ;
 struct ServiceProbeFallback* FUNC_3 (struct NmapServiceProbeList*,char const*,size_t,size_t) ;
 struct ServiceProbeMatch* FUNC_4 (struct NmapServiceProbeList*,char const*,size_t,size_t) ;
 void* FUNC_5 (struct NmapServiceProbeList*,char const*,size_t,size_t) ;
 struct RangeList FUNC_6 (struct NmapServiceProbeList*,char const*,size_t,size_t) ;
 int FUNC_7 (struct NmapServiceProbeList*,char const*,size_t,size_t) ;
 int FUNC_8 (char const*,size_t*,size_t) ;
 int FUNC_9 (int *,struct RangeList*) ;
 int FUNC_10 (struct RangeList*) ;
 int VAR_0 ;
 size_t FUNC_11 (char const*) ;

__attribute__((used)) static void
FUNC_12(struct NmapServiceProbeList *VAR_1, const char *VAR_2)
{
    const char *VAR_3 = VAR_1->filename;
    unsigned VAR_4 = VAR_1->line_number;
    size_t VAR_5;
    size_t VAR_6;
    enum SvcP_RecordType VAR_7;
    struct RangeList VAR_8 = {0};
    struct NmapServiceProbe *VAR_9;



    VAR_6 = 0;
    VAR_5 = FUNC_11(VAR_2);
    while (VAR_6 && FUNC_2(VAR_2[VAR_6]))
        VAR_6++;
    while (VAR_5 && FUNC_2(VAR_2[VAR_5-1]))
        VAR_5--;


    if (FUNC_1(VAR_2[VAR_6]))
        return;


    if (VAR_6 >= VAR_5)
        return;


    VAR_7 = FUNC_8(VAR_2, &VAR_6, VAR_5);


    switch ((int)VAR_7) {
        case 128:
            FUNC_0(VAR_0, "%s:%u:%u: unknown type: '%.*s'\n", VAR_3, VAR_4, (unsigned)VAR_6, (int)VAR_6-0, VAR_2);
            return;
        case 138:
            if (VAR_1->count) {


                FUNC_0(VAR_0, "%s:%u:%u: 'Exclude' directive only valid before any 'Probe'\n", VAR_3, VAR_4, (unsigned)VAR_6);
            } else {
                VAR_8 = FUNC_6(VAR_1, VAR_2, VAR_6, VAR_5);
                if (VAR_8.count == 0) {
                    FUNC_0(VAR_0, "%s:%u:%u: 'Exclude' bad format\n", VAR_3, VAR_4, (unsigned)VAR_6);
                } else {
                    FUNC_9(&VAR_1->exclude, &VAR_8);
                    FUNC_10(&VAR_8);
                }
            }
            return;
        case 134:


            FUNC_7(VAR_1, VAR_2, VAR_6, VAR_5);
            return;
    }





    if (VAR_1->count == 0) {
        FUNC_0(VAR_0, "%s:%u:%u: 'directive only valid after a 'Probe'\n", VAR_3, VAR_4, (unsigned)VAR_6);
        return;
    }
    VAR_9 = VAR_1->list[VAR_1->count-1];

    switch ((int)VAR_7) {
        case 135:
            VAR_8 = FUNC_6(VAR_1, VAR_2, VAR_6, VAR_5);
            if (VAR_8.count == 0) {
                FUNC_0(VAR_0, "%s:%u:%u: bad ports format\n", VAR_3, VAR_4, (unsigned)VAR_6);
            } else {
                FUNC_9(&VAR_9->ports, &VAR_8);
                FUNC_10(&VAR_8);
            }
            break;
        case 131:
            VAR_8 = FUNC_6(VAR_1, VAR_2, VAR_6, VAR_5);
            if (VAR_8.count == 0) {
                FUNC_0(VAR_0, "%s:%u:%u: bad ports format\n", VAR_3, VAR_4, (unsigned)VAR_6);
            } else {
                FUNC_9(&VAR_9->sslports, &VAR_8);
                FUNC_10(&VAR_8);
            }
            break;
        case 136:
        case 132:
            {
                struct ServiceProbeMatch *VAR_10;

                VAR_10 = FUNC_4(VAR_1, VAR_2, VAR_6, VAR_5);
                if (VAR_10) {
                    struct ServiceProbeMatch **VAR_11;


                    for (VAR_11 = &VAR_9->match; *VAR_11; VAR_11 = &(*VAR_11)->next)
                        ;
                    VAR_10->next = *VAR_11;
                    *VAR_11 = VAR_10;
                    VAR_10->is_softmatch = (VAR_7 == 132);
                }
            }
            break;

        case 129:
            VAR_9->totalwaitms = FUNC_5(VAR_1, VAR_2, VAR_6, VAR_5);
            break;
        case 130:
            VAR_9->tcpwrappedms = FUNC_5(VAR_1, VAR_2, VAR_6, VAR_5);
            break;
        case 133:
            VAR_9->rarity = FUNC_5(VAR_1, VAR_2, VAR_6, VAR_5);
            break;
        case 137:
        {
            struct ServiceProbeFallback *VAR_12;
            VAR_12 = FUNC_3(VAR_1, VAR_2, VAR_6, VAR_5);
            if (VAR_12) {
                VAR_12->next = VAR_9->fallback;
                VAR_9->fallback = VAR_12;
            }
        }
            break;
    }

}
