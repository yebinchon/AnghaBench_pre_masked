
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SyncStatusTree {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (struct SyncStatusTree*,char*,int ) ;
 int FUNC_2 (struct SyncStatusTree*,char*) ;
 int FUNC_3 (struct SyncStatusTree*,char*) ;
 struct SyncStatusTree* FUNC_4 () ;

int FUNC_5 (int VAR_2, char **VAR_3)
{
    struct SyncStatusTree *VAR_4;
    int VAR_5;

    VAR_4 = FUNC_4 ();

    FUNC_1 (VAR_4, "a/b/c.txt", VAR_1);
    FUNC_1 (VAR_4, "a/b/c/d", VAR_0);
    FUNC_1 (VAR_4, "a/xxx.txt", VAR_1);

    FUNC_0 ("test after add\n");

    VAR_5 = FUNC_3 (VAR_4, "a/b/c.txt");
    FUNC_0 ("a/b/c.txt: %d\n", VAR_5);

    VAR_5 = FUNC_3 (VAR_4, "a/b/c/d");
    FUNC_0 ("a/b/c/d: %d\n", VAR_5);

    VAR_5 = FUNC_3 (VAR_4, "a/d/f.foo");
    FUNC_0 ("a/d/f.foo: %d\n", VAR_5);

    VAR_5 = FUNC_3 (VAR_4, "a/b");
    FUNC_0 ("a/b: %d\n", VAR_5);

    FUNC_2 (VAR_4, "a/b/c.txt");
    FUNC_2 (VAR_4, "a/b/c/d");
    FUNC_2 (VAR_4, "a/xxx.txt");
    FUNC_2 (VAR_4, "a/c.pdf");

    FUNC_0 ("test after del\n");

    VAR_5 = FUNC_3 (VAR_4, "a/b/c.txt");
    FUNC_0 ("a/b/c.txt: %d\n", VAR_5);

    VAR_5 = FUNC_3 (VAR_4, "a/b/c/d");
    FUNC_0 ("a/b/c/d: %d\n", VAR_5);

    VAR_5 = FUNC_3 (VAR_4, "a/b");
    FUNC_0 ("a/b: %d\n", VAR_5);

    VAR_5 = FUNC_3 (VAR_4, "a");
    FUNC_0 ("a: %d\n", VAR_5);
}
