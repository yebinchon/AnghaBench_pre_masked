
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {char* id; char* name; } ;
struct TYPE_10__ {char* id; char* name; } ;
typedef TYPE_1__ RRDSET ;
typedef TYPE_2__ RRDDIM ;
typedef int BUFFER ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 char* FUNC_2 (int *) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (TYPE_1__*,int *) ;
 TYPE_2__* FUNC_5 (TYPE_1__*,char*,int *,int,int,int ) ;
 int FUNC_6 (TYPE_1__*,TYPE_2__*,char*) ;
 TYPE_1__* FUNC_7 (char*,char*,int *,char*,char*,char*,char*,char*,int *,int,int,int ) ;
 int FUNC_8 (TYPE_1__*,char*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_9(void) {
    FUNC_3(VAR_2, "Creating chart\n");
    RRDSET *VAR_3 = FUNC_7("chart", "ID", ((void*)0), "family", "context", "Unit Testing", "a value", "unittest", ((void*)0), 1, 1, VAR_0);
    FUNC_3(VAR_2, "Created chart with id '%s', name '%s'\n", VAR_3->id, VAR_3->name);

    FUNC_3(VAR_2, "Creating dimension DIM1\n");
    RRDDIM *VAR_4 = FUNC_5(VAR_3, "DIM1", ((void*)0), 1, 1, VAR_1);
    FUNC_3(VAR_2, "Created dimension with id '%s', name '%s'\n", VAR_4->id, VAR_4->name);

    FUNC_3(VAR_2, "Creating dimension DIM2\n");
    RRDDIM *VAR_5 = FUNC_5(VAR_3, "DIM2", ((void*)0), 1, 1, VAR_1);
    FUNC_3(VAR_2, "Created dimension with id '%s', name '%s'\n", VAR_5->id, VAR_5->name);

    FUNC_3(VAR_2, "Renaming chart to CHARTNAME1\n");
    FUNC_8(VAR_3, "CHARTNAME1");
    FUNC_3(VAR_2, "Renamed chart with id '%s' to name '%s'\n", VAR_3->id, VAR_3->name);

    FUNC_3(VAR_2, "Renaming chart to CHARTNAME2\n");
    FUNC_8(VAR_3, "CHARTNAME2");
    FUNC_3(VAR_2, "Renamed chart with id '%s' to name '%s'\n", VAR_3->id, VAR_3->name);

    FUNC_3(VAR_2, "Renaming dimension DIM1 to DIM1NAME1\n");
    FUNC_6(VAR_3, VAR_4, "DIM1NAME1");
    FUNC_3(VAR_2, "Renamed dimension with id '%s' to name '%s'\n", VAR_4->id, VAR_4->name);

    FUNC_3(VAR_2, "Renaming dimension DIM1 to DIM1NAME2\n");
    FUNC_6(VAR_3, VAR_4, "DIM1NAME2");
    FUNC_3(VAR_2, "Renamed dimension with id '%s' to name '%s'\n", VAR_4->id, VAR_4->name);

    FUNC_3(VAR_2, "Renaming dimension DIM2 to DIM2NAME1\n");
    FUNC_6(VAR_3, VAR_5, "DIM2NAME1");
    FUNC_3(VAR_2, "Renamed dimension with id '%s' to name '%s'\n", VAR_5->id, VAR_5->name);

    FUNC_3(VAR_2, "Renaming dimension DIM2 to DIM2NAME2\n");
    FUNC_6(VAR_3, VAR_5, "DIM2NAME2");
    FUNC_3(VAR_2, "Renamed dimension with id '%s' to name '%s'\n", VAR_5->id, VAR_5->name);

    BUFFER *VAR_6 = FUNC_0(1);
    FUNC_4(VAR_3, VAR_6);
    FUNC_3(VAR_2, "%s", FUNC_2(VAR_6));
    FUNC_1(VAR_6);
    return 1;
}
