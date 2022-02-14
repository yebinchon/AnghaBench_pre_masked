
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ServiceVersionInfo {int type; scalar_t__ is_a; int value; struct ServiceVersionInfo* next; } ;
struct ServiceProbeMatch {char* service; struct ServiceVersionInfo* versioninfo; scalar_t__ is_include_newlines; scalar_t__ is_case_insensitive; int regex_length; int regex; struct ServiceProbeMatch* next; } ;
struct NmapServiceProbeList {unsigned int count; struct NmapServiceProbe** list; int exclude; } ;
struct NmapServiceProbe {int protocol; char* name; int rarity; int totalwaitms; int tcpwrappedms; struct ServiceProbeMatch* match; int sslports; int ports; int hellolength; int hellostring; } ;
typedef int FILE ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *,int ,int ,char) ;
 int FUNC_2 (int *,int ,int ,char) ;
 int FUNC_3 (int *,int *,char*,int ) ;
 int FUNC_4 (int ) ;

void
FUNC_5(const struct NmapServiceProbeList *VAR_2, FILE *VAR_3)
{
    unsigned VAR_4;
    if (VAR_2 == ((void*)0))
        return;

    FUNC_3(&VAR_2->exclude, VAR_3, "Exclude", ~0);

    for (VAR_4=0; VAR_4<VAR_2->count; VAR_4++) {
        struct NmapServiceProbe *VAR_5 = VAR_2->list[VAR_4];
        struct ServiceProbeMatch *VAR_6;


        FUNC_0(VAR_3, "Probe %s %s q",
                (VAR_5->protocol==6)?"TCP":"UDP",
                VAR_5->name);


        FUNC_2(VAR_3, VAR_5->hellostring, VAR_5->hellolength, '|');

        FUNC_0(VAR_3, "\n");
        if (VAR_5->rarity)
            FUNC_0(VAR_3, "rarity %u\n", VAR_5->rarity);
        if (VAR_5->totalwaitms)
            FUNC_0(VAR_3, "totalwaitms %u\n", VAR_5->totalwaitms);
        if (VAR_5->tcpwrappedms)
            FUNC_0(VAR_3, "tcpwrappedms %u\n", VAR_5->tcpwrappedms);
        FUNC_3(&VAR_5->ports, VAR_3, "ports", (VAR_5->protocol==6)?VAR_0:VAR_1);
        FUNC_3(&VAR_5->sslports, VAR_3, "sslports", (VAR_5->protocol==6)?VAR_0:VAR_1);

        for (VAR_6=VAR_5->match; VAR_6; VAR_6 = VAR_6->next) {
            struct ServiceVersionInfo *VAR_7;

            FUNC_0(VAR_3, "match %s m", VAR_6->service);
            FUNC_1(VAR_3, VAR_6->regex, VAR_6->regex_length, '/');
            if (VAR_6->is_case_insensitive)
                FUNC_0(VAR_3, "i");
            if (VAR_6->is_include_newlines)
                FUNC_0(VAR_3, "s");
            FUNC_0(VAR_3, " ");

            for (VAR_7=VAR_6->versioninfo; VAR_7; VAR_7=VAR_7->next) {
                const char *VAR_8 = "";
                switch (VAR_7->type) {
                    case 129: VAR_8 = "u"; break;
                    case 130: VAR_8 = "p"; break;
                    case 128: VAR_8 = "v"; break;
                    case 132: VAR_8 = "i"; break;
                    case 133: VAR_8 = "h"; break;
                    case 131: VAR_8 = "o"; break;
                    case 134: VAR_8 = "e"; break;
                    case 135: VAR_8 = "cpe:"; break;
                }
                FUNC_0(VAR_3, "%s", VAR_8);
                FUNC_1(VAR_3, VAR_7->value, FUNC_4(VAR_7->value), '/');
                if (VAR_7->is_a)
                    FUNC_0(VAR_3, "a");
                FUNC_0(VAR_3, " ");
            }
            FUNC_0(VAR_3, "\n");
        }

    }
}
