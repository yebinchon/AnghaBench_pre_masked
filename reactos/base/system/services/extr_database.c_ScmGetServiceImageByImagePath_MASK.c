
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {struct TYPE_8__* Flink; } ;
struct TYPE_7__ {int pszImagePath; } ;
typedef TYPE_1__* PSERVICE_IMAGE ;
typedef TYPE_2__* PLIST_ENTRY ;
typedef int LPWSTR ;


 TYPE_1__* FUNC_0 (TYPE_2__*,int ,int ) ;
 int FUNC_1 (char*,...) ;
 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int ,int ) ;

__attribute__((used)) static PSERVICE_IMAGE
FUNC_3(LPWSTR VAR_3)
{
    PLIST_ENTRY VAR_4;
    PSERVICE_IMAGE VAR_5;

    FUNC_1("ScmGetServiceImageByImagePath(%S) called\n", VAR_3);

    VAR_4 = VAR_1.Flink;
    while (VAR_4 != &VAR_1)
    {
        VAR_5 = FUNC_0(VAR_4,
                                         VAR_2,
                                         VAR_0);
        if (FUNC_2(VAR_5->pszImagePath, VAR_3) == 0)
        {
            FUNC_1("Found image: '%S'\n", VAR_5->pszImagePath);
            return VAR_5;
        }

        VAR_4 = VAR_4->Flink;
    }

    FUNC_1("Couldn't find a matching image\n");

    return ((void*)0);

}
