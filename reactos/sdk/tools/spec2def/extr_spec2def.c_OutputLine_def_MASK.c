
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int buf; int len; } ;
struct TYPE_7__ {int uFlags; int nOrdinal; scalar_t__ nCallingConvention; TYPE_1__ strName; } ;
typedef int FILE ;
typedef TYPE_2__ EXPORT ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,TYPE_2__*) ;
 int FUNC_2 (int *,TYPE_2__*) ;
 int FUNC_3 (int *,char*,...) ;
 scalar_t__ VAR_4 ;

int
FUNC_4(FILE *VAR_5, EXPORT *VAR_6)
{
    FUNC_0("OutputLine_def: '%.*s'...\n", VAR_6->strName.len, VAR_6->strName.buf);
    FUNC_3(VAR_5, " ");

    if (VAR_4)
        FUNC_2(VAR_5, VAR_6);
    else
        FUNC_1(VAR_5, VAR_6);

    if (VAR_6->uFlags & VAR_2)
    {
        FUNC_3(VAR_5, " @%d", VAR_6->nOrdinal);
    }

    if (VAR_6->uFlags & VAR_1)
    {
        FUNC_3(VAR_5, " NONAME");
    }


    if (VAR_6->uFlags & VAR_3)
    {
        FUNC_3(VAR_5, " PRIVATE");
    }
    else if (VAR_6->nCallingConvention == VAR_0)
    {
        FUNC_3(VAR_5, " DATA");
    }

    FUNC_3(VAR_5, "\n");

    return 1;
}
