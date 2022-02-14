
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char const* test_file; int fp; } ;
typedef TYPE_1__ STANZA ;


 int FUNC_0 (char const*,char*) ;
 int FUNC_1 (char*,char const*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;
 int FUNC_4 (char const*) ;

int FUNC_5(STANZA *VAR_0, const char *VAR_1)
{
    FUNC_1("Reading %s", VAR_1);
    FUNC_4(VAR_1);
    FUNC_3(VAR_0, 0, sizeof(*VAR_0));
    if (!FUNC_2(VAR_0->fp = FUNC_0(VAR_1, "r")))
        return 0;
    VAR_0->test_file = VAR_1;
    return 1;
}
