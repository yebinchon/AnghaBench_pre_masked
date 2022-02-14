
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct process {int dummy; } ;
struct pdb_lookup {int kind; int filename; int age; int guid; int timestamp; } ;
struct TYPE_2__ {int PdbUnmatched; } ;
struct module {TYPE_1__ module; } ;
typedef int * HANDLE ;
typedef int BOOL ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,int ,int ,int *,int ,int ,int *) ;
 int * FUNC_2 (int *,int *,int ,int ,int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;


 int FUNC_3 (char*,int ) ;
 int FUNC_4 (struct process const*,struct module*,int ,int *,int ,int ,char*,int *) ;

__attribute__((used)) static HANDLE FUNC_5(const struct process* VAR_8,
                           const struct pdb_lookup* VAR_9,
                           struct module* VAR_10)
{
    HANDLE VAR_11, VAR_12 = ((void*)0);
    char VAR_13[VAR_5];
    BOOL VAR_14 = VAR_0;

    switch (VAR_9->kind)
    {
    case 128:
        VAR_14 = FUNC_4(VAR_8, VAR_10, VAR_9->filename, ((void*)0), VAR_9->timestamp,
                                    VAR_9->age, VAR_13, &VAR_10->module.PdbUnmatched);
        break;
    case 129:
        VAR_14 = FUNC_4(VAR_8, VAR_10, VAR_9->filename, &VAR_9->guid, 0,
                                    VAR_9->age, VAR_13, &VAR_10->module.PdbUnmatched);
        break;
    }
    if (!VAR_14)
    {
        FUNC_3("\tCouldn't find %s\n", VAR_9->filename);
        return ((void*)0);
    }
    if ((VAR_11 = FUNC_1(VAR_13, VAR_3, VAR_2, ((void*)0),
                             VAR_6, VAR_1, ((void*)0))) != VAR_4)
    {
        VAR_12 = FUNC_2(VAR_11, ((void*)0), VAR_7, 0, 0, ((void*)0));
        FUNC_0(VAR_11);
    }
    return VAR_12;
}
