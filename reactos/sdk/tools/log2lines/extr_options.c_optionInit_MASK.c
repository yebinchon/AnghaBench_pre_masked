
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int buildrev; int range; int rev; } ;


 char const* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int ) ;
 char* FUNC_2 (int ) ;
 int FUNC_3 (int,char*,int ) ;
 int FUNC_4 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 char* VAR_10 ;
 int VAR_11 ;
 TYPE_1__ VAR_12 ;
 int FUNC_5 (int ,char const*) ;
 int FUNC_6 (int ,char const*) ;
 int FUNC_7 (int) ;

int FUNC_8(int VAR_13, const char **VAR_14)
{
    int VAR_15;
    char *VAR_16;

    VAR_10 = "a";
    FUNC_6(VAR_7, "");
    FUNC_6(VAR_9, "");
    FUNC_6(VAR_4, VAR_0);
    FUNC_6(VAR_6, "");
    if ((VAR_16 = FUNC_2(VAR_3)))
        FUNC_6(VAR_6, VAR_16);
    VAR_12.rev = FUNC_0(((void*)0), 1);
    VAR_12.range = VAR_1;
    VAR_12.buildrev = FUNC_1(VAR_7);
    FUNC_3(1, "Trunk build revision: %d\n", VAR_12.buildrev);

    FUNC_6(VAR_11, "");



    if ((VAR_13 == 1) ||
        ((VAR_13 == 2) && (VAR_14[1][0] == '/') && (VAR_14[1][1] == '?')))
    {
        VAR_8++;
        FUNC_7(1);
        return -1;
    }

    for (VAR_15 = 1; VAR_15 < VAR_13; VAR_15++)
    {

        if ((VAR_14[VAR_15][0] == '-') && (VAR_15+1 < VAR_13))
        {

            switch (VAR_14[VAR_15][1])
            {
            case 'd':
                FUNC_6(VAR_7, VAR_14[VAR_15+1]);
                break;
            case 'L':
                VAR_10 = "w";

            case 'l':
                FUNC_6(VAR_9, VAR_14[VAR_15+1]);
                break;
            case 'P':
                if (!VAR_5)
                    VAR_5 = FUNC_4(VAR_2);
                FUNC_6(VAR_5, VAR_14[VAR_15+1]);
                break;
            case 'z':
                FUNC_6(VAR_4, VAR_14[VAR_15+1]);
                break;
            }
        }

        FUNC_5(VAR_11, VAR_14[VAR_15]);
        FUNC_5(VAR_11, " ");
    }

    FUNC_3(4,"opt_scanned=[%s]\n",VAR_11);

    return 0;
}
