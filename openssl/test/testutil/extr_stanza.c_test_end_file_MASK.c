
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int fp; int numskip; int errors; int numtests; } ;
typedef TYPE_1__ STANZA ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int ,int ,int ) ;

int FUNC_2(STANZA *VAR_0)
{
    FUNC_1("Completed %d tests with %d errors and %d skipped",
              VAR_0->numtests, VAR_0->errors, VAR_0->numskip);
    FUNC_0(VAR_0->fp);
    return 1;
}
