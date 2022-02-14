
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {char* buf; char* len; } ;
struct TYPE_5__ {scalar_t__ nCallingConvention; int uFlags; int nNumber; TYPE_3__ strName; TYPE_3__ strTarget; } ;
typedef int FILE ;
typedef TYPE_1__ EXPORT ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,TYPE_1__*,TYPE_3__*,int) ;
 scalar_t__ FUNC_1 (char*,char) ;
 int FUNC_2 (int *,char*,...) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;

void
FUNC_3(FILE *VAR_9, EXPORT *VAR_10)
{
    FUNC_0(VAR_9, VAR_10, &VAR_10->strName, 0);

    if (VAR_6)
    {

        FUNC_2(VAR_9, "=_stub_");
        FUNC_0(VAR_9, VAR_10, &VAR_10->strName, 0);
    }
    else if (VAR_10->strTarget.buf)
    {
        if (VAR_10->strName.buf[0] == '?')
        {


        }
        else
        {
            FUNC_2(VAR_9, "=");


            if ((VAR_8 == VAR_0) && FUNC_1(VAR_10->strName.buf, '@') &&
                !FUNC_1(VAR_10->strTarget.buf, '@') &&
                ((VAR_10->nCallingConvention == VAR_2) ||
                (VAR_10->nCallingConvention == VAR_1)) )
            {
                FUNC_0(VAR_9, VAR_10, &VAR_10->strTarget, 1);
            }
            else
            {

                FUNC_2(VAR_9, "%.*s", VAR_10->strTarget.len, VAR_10->strTarget.buf);
            }
        }
    }
    else if (((VAR_10->uFlags & VAR_5) || (VAR_10->nCallingConvention == VAR_3)) &&
             (VAR_10->strName.buf[0] == '?'))
    {

        FUNC_2(VAR_9, "=stub_function%d", VAR_10->nNumber);
    }
    else if (VAR_7 && ((VAR_10->uFlags & VAR_4) == 0) && (VAR_10->nCallingConvention == VAR_2) &&
            (VAR_10->strName.buf[0] != '?'))
    {

        FUNC_2(VAR_9, "=$relaytrace$%.*s", VAR_10->strName.len, VAR_10->strName.buf);
    }
}
