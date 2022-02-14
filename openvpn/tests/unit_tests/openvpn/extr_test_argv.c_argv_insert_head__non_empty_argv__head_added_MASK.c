
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct argv {int argc; int * argv; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct argv FUNC_0 (struct argv*,int ) ;
 struct argv FUNC_1 () ;
 int FUNC_2 (struct argv*,char*,int ) ;
 int FUNC_3 (struct argv*) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static void
FUNC_6(void **VAR_2)
{
    struct argv VAR_3 = FUNC_1();
    struct argv VAR_4;
    int VAR_5;

    FUNC_2(&VAR_3, "%s", VAR_1);
    VAR_4 = FUNC_0(&VAR_3, VAR_0);
    FUNC_4(VAR_4.argc, VAR_3.argc + 1);
    for (VAR_5 = 0; VAR_5 < VAR_4.argc; VAR_5++) {
        if (VAR_5 == 0)
        {
            FUNC_5(VAR_4.argv[VAR_5], VAR_0);
        }
        else
        {
            FUNC_5(VAR_4.argv[VAR_5], VAR_3.argv[VAR_5 - 1]);
        }
    }
    FUNC_3(&VAR_4);

    FUNC_3(&VAR_3);
}
