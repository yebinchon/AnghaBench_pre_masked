
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct argv {scalar_t__* argv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct argv FUNC_0 () ;
 int FUNC_1 (struct argv*,char const*) ;
 int FUNC_2 (struct argv*) ;
 int FUNC_3 (char const*,int ,scalar_t__,int ,char const*) ;
 int FUNC_4 (int,char*,char const*,char const*) ;

__attribute__((used)) static bool
FUNC_5(const char *VAR_4, const char *VAR_5, const char *VAR_6)
{
    struct argv VAR_7;
    bool VAR_8;


    if (!VAR_4)
    {
        return 0;
    }


    VAR_7 = FUNC_0();
    FUNC_1(&VAR_7, VAR_4);


    if (VAR_7.argv[0])
    {




        VAR_8 = FUNC_3(VAR_6, VAR_0, VAR_7.argv[0], VAR_3, VAR_5);
    }
    else
    {
        FUNC_4(VAR_1|VAR_2, "%s fails with '%s': No path to executable.",
            VAR_5, VAR_4);
        VAR_8 = 1;
    }

    FUNC_2(&VAR_7);

    return VAR_8;
}
