
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int json_t ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,char*,int,char*,char*,int,char*,int ,char*,char*,char*,char*,int,int,int) ;

__attribute__((used)) static void FUNC_2()
{
    json_t *VAR_0;

    VAR_0 = FUNC_1("{s:i,s:n,s:b,s:b,s:{s:s},s:[i,i,i]}",
                    "foo", 42,
                    "bar",
                    "baz", 1,
                    "qux", 0,
                    "alice", "bar", "baz",
                    "bob", 9, 8, 7);

    FUNC_0(VAR_0);
}
