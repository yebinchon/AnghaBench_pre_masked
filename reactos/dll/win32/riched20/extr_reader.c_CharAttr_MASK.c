
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int rtfFCodePage; } ;
struct TYPE_7__ {int rtfMinor; int rtfParam; int unicodeLength; int codePage; int ansiCodePage; } ;
typedef TYPE_1__ RTF_Info ;
typedef TYPE_2__ RTFFont ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_2__* FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (char*,int ,int ) ;



__attribute__((used)) static void
FUNC_4(RTF_Info *VAR_1)
{
        RTFFont *VAR_2;

        switch (VAR_1->rtfMinor)
        {
        case 129:
                VAR_2 = FUNC_2(VAR_1, VAR_1->rtfParam);
                if (VAR_2)
                {
                        if (VAR_1->ansiCodePage != VAR_0 && VAR_1->codePage != VAR_2->rtfFCodePage)
                        {
                                FUNC_1(VAR_1);
                                VAR_1->codePage = VAR_2->rtfFCodePage;
                        }
                        FUNC_3("font %d codepage %d\n", VAR_1->rtfParam, VAR_1->codePage);
                }
                else
                        FUNC_0( "unknown font %d\n", VAR_1->rtfParam);
                break;
        case 128:
                VAR_1->unicodeLength = VAR_1->rtfParam;
                break;
        }
}
