
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct argv {int argc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct argv FUNC_0 () ;
 int FUNC_1 (struct argv*,char*,int ,int ,int ) ;
 int FUNC_2 (struct argv*,char*,...) ;
 int FUNC_3 (struct argv*) ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static void
FUNC_5(void **VAR_4)
{
    struct argv VAR_5 = FUNC_0();

    FUNC_1(&VAR_5, "%s %s %s", VAR_2, VAR_3, VAR_0);
    FUNC_2(&VAR_5, "%s", VAR_1);
    FUNC_2(&VAR_5, "foo");
    FUNC_4(VAR_5.argc, 5);

    FUNC_3(&VAR_5);
}
