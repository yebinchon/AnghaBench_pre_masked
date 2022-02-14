
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ServiceProbeFallback {char* name; struct ServiceProbeFallback* next; } ;
struct NmapServiceProbeList {char* filename; int line_number; } ;


 struct ServiceProbeFallback* FUNC_0 (int,int) ;
 char* FUNC_1 (size_t) ;
 int FUNC_2 (int ,char*,char*,int,unsigned int) ;
 scalar_t__ FUNC_3 (char const) ;
 int FUNC_4 (char*,char const*,size_t) ;
 int VAR_0 ;

__attribute__((used)) static struct ServiceProbeFallback *
FUNC_5(struct NmapServiceProbeList *VAR_1, const char *VAR_2, size_t VAR_3, size_t VAR_4)
{



    struct ServiceProbeFallback *VAR_5 = 0;

    while (VAR_3 < VAR_4) {
        size_t VAR_6;
        size_t VAR_7;
        struct ServiceProbeFallback *VAR_8;
        struct ServiceProbeFallback **VAR_9;


        VAR_6 = VAR_3;
        while (VAR_3 < VAR_4 && !FUNC_3(VAR_2[VAR_3]) && VAR_2[VAR_3] != ',')
            VAR_3++;
        VAR_7 = VAR_3 - VAR_6;
        while (VAR_3 < VAR_4 && (FUNC_3(VAR_2[VAR_3]) || VAR_2[VAR_3] == ','))
            VAR_3++;
        if (VAR_7 == 0) {
            FUNC_2(VAR_0, "%s:%u:%u: name too short\n", VAR_1->filename, VAR_1->line_number, (unsigned)VAR_6);
            break;
        }


        VAR_8 = FUNC_0(1, sizeof(*VAR_8));

        VAR_8->name = FUNC_1(VAR_7+1);
        FUNC_4(VAR_8->name, VAR_2+VAR_6, VAR_7+1);
        VAR_8->name[VAR_7] = '\0';


        for (VAR_9=&VAR_5; *VAR_9; VAR_9 = &(*VAR_9)->next)
            ;
        VAR_8->next = *VAR_9;
        *VAR_9 = VAR_8;

    }

    return VAR_5;
}
