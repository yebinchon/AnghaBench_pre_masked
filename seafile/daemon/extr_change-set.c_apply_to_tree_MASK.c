
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int gboolean ;
typedef int SeafStat ;
typedef int ChangeSetDirent ;
typedef int ChangeSet ;






 int FUNC_0 (int *,unsigned char*,int *,char const*,char const*,int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *,char const*,int *) ;

__attribute__((used)) static void
FUNC_3 (ChangeSet *VAR_0,
               char VAR_1,
               unsigned char *VAR_2,
               SeafStat *VAR_3,
               const char *VAR_4,
               const char *VAR_5,
               const char *VAR_6)
{
    ChangeSetDirent *VAR_7, *VAR_8;
    gboolean VAR_9;

    switch (VAR_1) {
    case 131:
    case 129:
    case 130:
        FUNC_0 (VAR_0, VAR_2, VAR_3, VAR_4, VAR_5, ((void*)0));
        break;
    case 128:
        VAR_7 = FUNC_2 (VAR_0, VAR_5, &VAR_9);
        if (!VAR_7)
            break;

        VAR_8 = FUNC_2 (VAR_0, VAR_6, &VAR_9);
        FUNC_1 (VAR_8);
        FUNC_0 (VAR_0, ((void*)0), ((void*)0), ((void*)0), VAR_6, VAR_7);

        break;
    }
}
