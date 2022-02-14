
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int rtfMinor; int ansiCodePage; int codePage; int rtfParam; } ;
typedef TYPE_1__ RTF_Info ;


 int VAR_0 ;
 int FUNC_0 (char*,int,int ) ;



__attribute__((used)) static void
FUNC_1(RTF_Info *VAR_1)
{
        FUNC_0("minor %d, param %d\n", VAR_1->rtfMinor, VAR_1->rtfParam);

        switch (VAR_1->rtfMinor)
        {
        case 129:
                VAR_1->codePage = VAR_1->ansiCodePage = VAR_1->rtfParam;
                break;
        case 128:
                VAR_1->codePage = VAR_1->ansiCodePage = VAR_0;
                break;
        }
}
