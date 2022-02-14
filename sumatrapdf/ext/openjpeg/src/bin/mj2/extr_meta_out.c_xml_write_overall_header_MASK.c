
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int minversion; int num_cl; int * cl; int brand; } ;
typedef TYPE_1__ opj_mj2_t ;
typedef int opj_event_mgr_t ;
typedef int FILE ;


 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int *,TYPE_1__*) ;
 int FUNC_3 (int *,int *,TYPE_1__*,unsigned int,int *) ;
 int FUNC_4 (int *,TYPE_1__*) ;

int FUNC_5(FILE *VAR_0, FILE *VAR_1, opj_mj2_t * VAR_2,
                             unsigned int VAR_3, opj_event_mgr_t *VAR_4)
{
    int VAR_5;
    char VAR_6[5];
    VAR_6[4] = '\0';

    FUNC_0(VAR_1,
            "  <JP2 BoxType=\"jP[space][space]\" Signature=\"0x0d0a870a\" />\n");

    FUNC_0(VAR_1, "  <FileType BoxType=\"ftyp\">\n");
    FUNC_1(VAR_2->brand, VAR_6);
    FUNC_0(VAR_1, "    <Brand>%s</Brand>\n",
            VAR_6);
    FUNC_0(VAR_1, "    <MinorVersion>%u</MinorVersion>\n",
            VAR_2->minversion);
    FUNC_0(VAR_1, "    <CompatibilityList Count=\"%d\">\n", VAR_2->num_cl);
    for (VAR_5 = VAR_2->num_cl - 1; VAR_5 > -1;
            VAR_5--) {
        FUNC_1(VAR_2->cl[VAR_5], VAR_6);
        FUNC_0(VAR_1, "      <CompatibleBrand>%s</CompatibleBrand>\n",
                VAR_6);
    }
    FUNC_0(VAR_1, "    </CompatibilityList>\n");
    FUNC_0(VAR_1, "  </FileType>\n");
    FUNC_3(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);



    FUNC_2(VAR_1,
                            VAR_2);
    FUNC_4(VAR_1,
                   VAR_2);
    return 0;
}
