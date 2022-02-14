
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct argv {int * argv; int argc; } ;


 int VAR_0 ;
 struct argv FUNC_0 (struct argv*,int ) ;
 struct argv FUNC_1 () ;
 int FUNC_2 (struct argv*) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static void
FUNC_5(void **VAR_1)
{
    struct argv VAR_2 = FUNC_1();
    struct argv VAR_3;

    VAR_3 = FUNC_0(&VAR_2, VAR_0);
    FUNC_3(VAR_3.argc, 1);
    FUNC_4(VAR_3.argv[0], VAR_0);
    FUNC_2(&VAR_3);

    FUNC_2(&VAR_2);
}
