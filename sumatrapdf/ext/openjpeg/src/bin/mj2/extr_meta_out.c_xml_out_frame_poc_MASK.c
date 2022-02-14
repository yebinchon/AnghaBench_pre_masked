
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int POC; int numpocs; TYPE_2__* pocs; } ;
typedef TYPE_1__ opj_tcp_t ;
struct TYPE_6__ {int compno0; int layno1; int resno1; int compno1; int prg; int resno0; } ;
typedef TYPE_2__ opj_poc_t ;
typedef int FILE ;


 int FUNC_0 (int *,char*,char*,...) ;
 TYPE_1__* VAR_0 ;
 scalar_t__ VAR_1 ;

void FUNC_1(FILE* VAR_2,
                       opj_tcp_t *VAR_3)
{

    int VAR_4;
    opj_poc_t *VAR_5;
    char VAR_6[13] = "            ";
    char* VAR_7 = VAR_6;
    if (VAR_3 == VAR_0) {
        VAR_7++;
        VAR_7++;
    }

    if (VAR_3->POC != 1) {
        return;
    }

    FUNC_0(VAR_2, "%s<ProgressionOrderChange Marker=\"POC\">\n",
            VAR_7);




    for (VAR_4 = 0; VAR_4 < VAR_3->numpocs; VAR_4++) {
        VAR_5 = &VAR_3->pocs[VAR_4];
        FUNC_0(VAR_2, "%s  <Progression Num=\"%d\">\n", VAR_7, VAR_4 + 1);
        FUNC_0(VAR_2, "%S    <RSpoc>%d</RSpoc>\n", VAR_7,
                VAR_5->resno0);
        if (VAR_1) {
            FUNC_0(VAR_2,
                    "%s    <!-- Resolution level index (inclusive) for progression start. Range: 0 to 33 -->\n",
                    VAR_7);
        }
        FUNC_0(VAR_2, "%s    <CSpoc>%d</CSpoc>\n", VAR_7,
                VAR_5->compno0);
        if (VAR_1) {
            FUNC_0(VAR_2,
                    "%s    <!-- Component index (inclusive) for progression start. -->\n", VAR_7);
        }
        FUNC_0(VAR_2, "%s    <LYEpoc>%d</LYEpoc>\n", VAR_7,
                VAR_5->layno1);
        if (VAR_1) {
            FUNC_0(VAR_2, "%s    <!-- Layer index (exclusive) for progression end. -->\n",
                    VAR_7);
        }
        FUNC_0(VAR_2, "%s    <REpoc>%d</REpoc>\n", VAR_7,
                VAR_5->resno1);
        if (VAR_1) {
            FUNC_0(VAR_2,
                    "%s    <!-- Resolution level index (exclusive) for progression end. Range: RSpoc to 33 -->\n",
                    VAR_7);
        }
        FUNC_0(VAR_2, "%s    <CEpoc>%d</CEpoc>\n", VAR_7,
                VAR_5->compno1);
        if (VAR_1) {
            FUNC_0(VAR_2,
                    "%s    <!-- Component index (exclusive) for progression end.  Minimum: CSpoc -->\n",
                    VAR_7);
        }
        FUNC_0(VAR_2, "%s    <Ppoc>%d</Ppoc>\n", VAR_7, VAR_5->prg);
        if (VAR_1) {
            FUNC_0(VAR_2, "%s    <!-- Defined Progression Order Values are: -->\n", VAR_7);
            FUNC_0(VAR_2,
                    "%s    <!-- 0 = LRCP; 1 = RLCP; 2 = RPCL; 3 = PCRL; 4 = CPRL -->\n", VAR_7);
            FUNC_0(VAR_2,
                    "%s    <!-- where L = \"layer\", R = \"resolution level\", C = \"component\", P = \"position\". -->\n",
                    VAR_7);
        }
        FUNC_0(VAR_2, "%s  </Progression>\n", VAR_7);
    }
    FUNC_0(VAR_2, "%s</ProgressionOrderChange\n", VAR_7);
}
