
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {char* member_0; int name; int (* func ) (TYPE_1__*) ;int member_1; } ;
struct TYPE_7__ {int start; int test_file; } ;
typedef TYPE_1__ STANZA ;
typedef TYPE_2__ FILETEST ;


 int FUNC_0 (TYPE_2__ const*) ;
 int FUNC_1 (char*,int ,int ,...) ;
 int * FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_4(STANZA *VAR_0)
{
    static const FILETEST VAR_1[] = {
        {"Sum", 128},
        {"LShift1", 136},
        {"LShift", 137},
        {"RShift", 130},
        {"Square", 129},
        {"Product", 132},
        {"Quotient", 131},
        {"ModMul", 134},
        {"ModExp", 135},
        {"Exp", 139},
        {"ModSqrt", 133},
        {"GCD", 138},
    };
    int VAR_2 = FUNC_0(VAR_1);
    const FILETEST *VAR_3 = VAR_1;

    for ( ; --VAR_2 >= 0; VAR_3++) {
        if (FUNC_2(VAR_0, VAR_3->name) != ((void*)0)) {
            if (!VAR_3->func(VAR_0)) {
                FUNC_1("%s:%d: Failed %s test",
                          VAR_0->test_file, VAR_0->start, VAR_3->name);
                return 0;
            }
            return 1;
        }
    }
    FUNC_1("%s:%d: Unknown test", VAR_0->test_file, VAR_0->start);
    return 0;
}
