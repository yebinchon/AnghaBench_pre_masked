
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct NmapServiceProbeList {unsigned int line_number; scalar_t__ filename; } ;
typedef int line ;
typedef int FILE ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (char*,int,int *) ;
 int * FUNC_2 (char const*,char*) ;
 struct NmapServiceProbeList* FUNC_3 (char const*) ;
 int FUNC_4 (struct NmapServiceProbeList*,int ) ;
 int FUNC_5 (struct NmapServiceProbeList*,char*) ;
 int FUNC_6 (char const*) ;
 int VAR_0 ;

struct NmapServiceProbeList *
FUNC_7(const char *VAR_1)
{
    FILE *VAR_2;
    char VAR_3[32768];
    struct NmapServiceProbeList *VAR_4;




    VAR_2 = FUNC_2(VAR_1, "rt");
    if (VAR_2 == ((void*)0)) {
        FUNC_6(VAR_1);
        return 0;
    }




    VAR_4 = FUNC_3(VAR_1);




    while (FUNC_1(VAR_3, sizeof(VAR_3), VAR_2)) {


        VAR_4->line_number++;


        FUNC_5(VAR_4, VAR_3);
    }

    FUNC_0(VAR_2);
    VAR_4->filename = 0;
    VAR_4->line_number = (unsigned)~0;

    FUNC_4(VAR_4, VAR_0);

    return VAR_4;
}
