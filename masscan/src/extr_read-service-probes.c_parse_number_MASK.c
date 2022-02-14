
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct NmapServiceProbeList {char* filename; int line_number; } ;


 int FUNC_0 (int ,char*,char*,int,unsigned int,char const) ;
 scalar_t__ FUNC_1 (char const) ;
 scalar_t__ FUNC_2 (char const) ;
 scalar_t__ FUNC_3 (char const) ;
 int VAR_0 ;

__attribute__((used)) static unsigned
FUNC_4(struct NmapServiceProbeList *VAR_1, const char *VAR_2, size_t VAR_3, size_t VAR_4)
{





    unsigned VAR_5 = 0;

    while (VAR_3 < VAR_4 && FUNC_1(VAR_2[VAR_3])) {
        VAR_5 = VAR_5 * 10;
        VAR_5 = VAR_5 + (VAR_2[VAR_3] - '0');
        VAR_3++;
    }
    while (VAR_3 < VAR_4 && FUNC_3(VAR_2[VAR_3]))
        VAR_3++;

    if (VAR_3 != VAR_4) {
        FUNC_0(VAR_0, "%s:%u:%u: unexpected character '%c'\n", VAR_1->filename, VAR_1->line_number, (unsigned)VAR_3, FUNC_2(VAR_2[VAR_3])?VAR_2[VAR_3]:'.');
    }

    return VAR_5;
}
