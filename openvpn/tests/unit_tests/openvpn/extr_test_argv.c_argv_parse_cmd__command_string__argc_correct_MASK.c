
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct argv {int argc; } ;


 int VAR_0 ;
 struct argv FUNC_0 () ;
 int FUNC_1 (struct argv*,int ) ;
 int FUNC_2 (struct argv*) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static void
FUNC_4(void **VAR_1)
{
    struct argv VAR_2 = FUNC_0();

    FUNC_1(&VAR_2, VAR_0);
    FUNC_3(VAR_2.argc, 3);

    FUNC_2(&VAR_2);
}
