
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct argv {int argc; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct argv FUNC_0 () ;
 int FUNC_1 (struct argv*,char*,int ,int ,...) ;
 int FUNC_2 (struct argv*) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static void
FUNC_4(void **VAR_2)
{
    struct argv VAR_3 = FUNC_0();

    FUNC_1(&VAR_3, "%s%sc", VAR_0, VAR_1);
    FUNC_3(VAR_3.argc, 1);

    FUNC_1(&VAR_3, "%s%sc %d", VAR_0, VAR_1, 42);
    FUNC_3(VAR_3.argc, 2);

    FUNC_1(&VAR_3, "foo %s%sc %s x y", VAR_1, VAR_0, "foo");
    FUNC_3(VAR_3.argc, 5);

    FUNC_2(&VAR_3);
}
