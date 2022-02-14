
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct RangeList {unsigned int count; TYPE_1__* list; } ;
struct TYPE_2__ {int begin; int end; } ;
typedef int FILE ;
 int FUNC_0 (int *,char*,...) ;

__attribute__((used)) static void
FUNC_1(const struct RangeList *VAR_0, FILE *VAR_1, const char *VAR_2, int VAR_3)
{
    unsigned VAR_4;


    if (VAR_0 == ((void*)0) || VAR_0->count == 0)
        return;


    FUNC_0(VAR_1, "%s ", VAR_2);


    for (VAR_4=0; VAR_4<VAR_0->count; VAR_4++) {
        int VAR_5;
        int VAR_6 = VAR_0->list[VAR_4].begin;
        int VAR_7 = VAR_0->list[VAR_4].end;

        if (130 <= VAR_6 && VAR_6 < 129)
            VAR_5 = 130;
        else if (129 <= VAR_6 && VAR_6 < 131)
            VAR_5 = 129;
        else
            VAR_5 = 131;


        VAR_6 -= VAR_5;
        VAR_7 -= VAR_5;


        if (VAR_4)
            FUNC_0(VAR_1, ",");


        if (VAR_3 != VAR_5) {
            VAR_3 = VAR_5;
            switch (VAR_5) {
                case 130: FUNC_0(VAR_1, "T:"); break;
                case 129: FUNC_0(VAR_1, "U:"); break;
                case 131: FUNC_0(VAR_1, "S"); break;
                case 133: FUNC_0(VAR_1, "e"); break;
                case 132: FUNC_0(VAR_1, "t"); break;
                case 134: FUNC_0(VAR_1, "A"); break;
                case 128: FUNC_0(VAR_1, "v"); break;
            }
        }
        FUNC_0(VAR_1, "%u", VAR_6);
        if (VAR_7 > VAR_6)
            FUNC_0(VAR_1, "-%u", VAR_7);
    }
    FUNC_0(VAR_1, "\n");
}
