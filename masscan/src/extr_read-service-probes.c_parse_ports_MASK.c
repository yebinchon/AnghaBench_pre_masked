
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct RangeList {int member_0; } ;
struct NmapServiceProbeList {char* filename; int line_number; } ;


 int FUNC_0 (size_t) ;
 int FUNC_1 (int ,char*,char*,int,unsigned int) ;
 char* FUNC_2 (struct RangeList*,char const*,unsigned int*,int ) ;
 int FUNC_3 (struct RangeList*) ;
 int VAR_0 ;

__attribute__((used)) static struct RangeList
FUNC_4(struct NmapServiceProbeList *VAR_1, const char *VAR_2, size_t VAR_3, size_t VAR_4)
{






    unsigned VAR_5 = 0;
    const char *VAR_6;
    struct RangeList VAR_7 = {0};

    FUNC_0(VAR_4);

    VAR_6 = FUNC_2(&VAR_7, VAR_2 + VAR_3, &VAR_5, 0);

    if (VAR_5) {
        FUNC_1(VAR_0, "%s:%u:%u: bad port spec\n", VAR_1->filename, VAR_1->line_number, (unsigned)(VAR_6-VAR_2));
        FUNC_3(&VAR_7);
    }

    return VAR_7;
}
