
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ sv102_hidden; int sv102_disc; int sv102_users; int sv102_version_minor; int sv102_version_major; int sv102_comment; int sv102_name; } ;
struct TYPE_5__ {int svti0_networkaddress; int * svti0_transportname; } ;
typedef TYPE_1__* PSERVER_TRANSPORT_INFO_0 ;
typedef TYPE_2__* PSERVER_INFO_102 ;
typedef int PBYTE ;
typedef scalar_t__ NET_API_STATUS ;
typedef int INT ;
typedef size_t DWORD ;


 int FUNC_0 (int ,char*,int ,...) ;
 int FUNC_1 (int ,char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (int *,int ,int *,int ,size_t*,size_t*,int *) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,int) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static
INT
FUNC_6(
    PSERVER_INFO_102 VAR_5)
{
    PSERVER_TRANSPORT_INFO_0 VAR_6 = ((void*)0);
    DWORD VAR_7, VAR_8, VAR_9;
    INT VAR_10 = 38;
    NET_API_STATUS VAR_11;

    VAR_11 = FUNC_3(((void*)0), 0, (PBYTE*)&VAR_6,
                                    VAR_0,
                                    &VAR_7,
                                    &VAR_8,
                                    ((void*)0));
    if (VAR_11 != VAR_1)
        goto done;

    FUNC_5(4481, VAR_10);
    FUNC_0(VAR_4, L"\\\\%s\n", VAR_5->sv102_name);

    FUNC_5(4482, VAR_10);
    FUNC_0(VAR_4, L"%s\n\n", VAR_5->sv102_comment);

    FUNC_5(4484, VAR_10);
    FUNC_0(VAR_4, L"%lu.%lu\n",
              VAR_5->sv102_version_major,
              VAR_5->sv102_version_minor);

    FUNC_5(4489, VAR_10);
    FUNC_1(VAR_4, L"\n");
    for (VAR_9 = 0; VAR_9 < VAR_7; VAR_9++)
    {
        FUNC_0(VAR_4, L"      %s (%s)\n",
                  VAR_6[VAR_9].svti0_transportname[8],
                  VAR_6[VAR_9].svti0_networkaddress);
    }
    FUNC_1(VAR_4, L"\n");

    FUNC_5(4492, VAR_10);
    FUNC_4((VAR_5->sv102_hidden == VAR_2) ? 4300 : 4301);
    FUNC_1(VAR_4, L"\n");

    FUNC_5(4506, VAR_10);
    FUNC_0(VAR_4, L"%lu\n", VAR_5->sv102_users);

    FUNC_5(4511, VAR_10);
    FUNC_1(VAR_4, L"...\n\n");

    FUNC_5(4520, VAR_10);
    if (VAR_5->sv102_disc == VAR_3)
        FUNC_4(4306);
    else
        FUNC_0(VAR_4, L"%lu\n", VAR_5->sv102_disc);

done:
    if (VAR_6 != ((void*)0))
        FUNC_2(VAR_6);

    return 0;
}
