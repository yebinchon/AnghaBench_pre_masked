
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_7__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {TYPE_1__* apt; } ;
struct TYPE_9__ {int oxid; scalar_t__ main; } ;
typedef int DWORD ;
typedef TYPE_1__ APARTMENT ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 () ;
 TYPE_7__* FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 TYPE_1__* VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_4 (char*,int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_5 (TYPE_1__*) ;
 void* FUNC_6 (int) ;
 int FUNC_7 (TYPE_1__*) ;
 int VAR_4 ;
 int FUNC_8 (int ) ;

__attribute__((used)) static APARTMENT *FUNC_9(DWORD VAR_5)
{
    APARTMENT *VAR_6 = FUNC_0();

    if (!VAR_6)
    {
        if (VAR_5 & VAR_0)
        {
            FUNC_2(&VAR_4);

            VAR_6 = FUNC_6(VAR_5);
            if (!VAR_2)
            {
                VAR_2 = VAR_6;
                VAR_6->main = VAR_3;
                FUNC_4("Created main-threaded apartment with OXID %s\n", FUNC_8(VAR_6->oxid));
            }

            FUNC_3(&VAR_4);

            if (VAR_6->main)
                FUNC_7(VAR_6);
        }
        else
        {
            FUNC_2(&VAR_4);




            if (VAR_1)
            {
                FUNC_4("entering the multithreaded apartment %s\n", FUNC_8(VAR_1->oxid));
                FUNC_5(VAR_1);
            }
            else
                VAR_1 = FUNC_6(VAR_5);

            VAR_6 = VAR_1;

            FUNC_3(&VAR_4);
        }
        FUNC_1()->apt = VAR_6;
    }

    return VAR_6;
}
