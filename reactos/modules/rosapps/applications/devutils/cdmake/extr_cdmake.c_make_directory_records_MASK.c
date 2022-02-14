
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct stat {int st_ctime; int st_mode; } ;
struct dirent {scalar_t__* d_name; scalar_t__ d_type; } ;
typedef int buf ;
struct TYPE_7__ {TYPE_1__* next_in_path_table; } ;
struct TYPE_6__ {int level; int * first_record; int date_and_time; struct TYPE_6__* next_in_path_table; } ;
typedef TYPE_1__* PDIR_RECORD ;
typedef int DIR ;


 char* VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__* VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (scalar_t__*) ;
 int FUNC_3 (int *) ;
 int VAR_8 ;
 int FUNC_4 (int *,int *) ;
 char* VAR_9 ;
 int VAR_10 ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (char*,int) ;
 TYPE_1__* FUNC_7 (struct dirent*,struct stat*,TYPE_1__*) ;
 int * FUNC_8 (scalar_t__*) ;
 int FUNC_9 (char*,int,...) ;
 struct dirent* FUNC_10 (int *) ;
 TYPE_2__ VAR_11 ;
 int * FUNC_11 (int *,int ,int ) ;
 scalar_t__* VAR_12 ;
 int FUNC_12 (char*,struct stat*) ;
 int FUNC_13 (char*,scalar_t__*) ;
 scalar_t__ FUNC_14 (scalar_t__*,char*) ;
 int FUNC_15 (char*,scalar_t__*) ;
 scalar_t__* FUNC_16 (int ) ;
 scalar_t__ VAR_13 ;

__attribute__((used)) static void
FUNC_17(PDIR_RECORD VAR_14)
{
    PDIR_RECORD VAR_15;
    DIR *VAR_16;
    struct dirent *VAR_17;
    char *VAR_18;
    struct stat VAR_19;
    char VAR_20[VAR_6];

    VAR_14->first_record = ((void*)0);
    VAR_16 = FUNC_8(VAR_12);
    if (VAR_16 != ((void*)0))
    {
        while ((VAR_17 = FUNC_10(VAR_16)) != ((void*)0))
        {
            if (FUNC_14(VAR_17->d_name, ".") == 0 || FUNC_14(VAR_17->d_name, "..") == 0)
                continue;


            if (VAR_12[0] == VAR_1)
            {
                FUNC_15(VAR_20, VAR_12);
                FUNC_13(VAR_20, VAR_2);
                FUNC_13(VAR_20, VAR_17->d_name);
            }
            else
            {
                if (!FUNC_6(VAR_20, sizeof(VAR_20)))
                    FUNC_5("Cannot get CWD: %s\n", FUNC_16(VAR_10));
                FUNC_13(VAR_20, VAR_2);
                FUNC_13(VAR_20, VAR_12);
                FUNC_13(VAR_20, VAR_17->d_name);
            }

            if (FUNC_12(VAR_20, &VAR_19) == -1)
            {
                FUNC_5("Cannot access '%s' (%s)\n", VAR_20, FUNC_16(VAR_10));
                return;
            }

            if (FUNC_0(VAR_19.st_mode))
            {
                VAR_18 = VAR_9;
                FUNC_2(VAR_17->d_name);
                *VAR_9++ = VAR_1;
                *VAR_9 = 0;
                if (VAR_13 == VAR_7)
                {
                    FUNC_9("%d: directory %s\n", VAR_14->level + 1, VAR_12);
                }

                if (VAR_14->level < VAR_5)
                {
                    VAR_15 = FUNC_7(VAR_17, &VAR_19, VAR_14);
                    VAR_15->next_in_path_table = VAR_11.next_in_path_table;
                    VAR_11.next_in_path_table = VAR_15;
                    VAR_15->level = VAR_14->level + 1;
                    FUNC_17(VAR_15);
                }
                else
                {
                    FUNC_5("Directory is nested too deep");
                }

                VAR_9 = VAR_18;
                *VAR_9 = 0;
            }
            else if (FUNC_1(VAR_19.st_mode))
            {
                if (FUNC_14(VAR_17->d_name, VAR_0) == 0)
                {
                    FUNC_4(&VAR_14->date_and_time, &VAR_19.st_ctime);
                }
                else
                {
                    if (VAR_13 == VAR_7)
                    {
                        FUNC_9("%d: file %s\n", VAR_14->level, VAR_20);
                    }
                    (void) FUNC_7(VAR_17, &VAR_19, VAR_14);
                }
            }
        }
        FUNC_3(VAR_16);
    }
    else
    {
        FUNC_5("Cannot open '%s'\n", VAR_12);
        return;
    }




    VAR_14->first_record = FUNC_11(VAR_14->first_record, 0, VAR_8);
}
