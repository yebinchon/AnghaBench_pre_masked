
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int long_buf ;
struct TYPE_6__ {char* member_0; int member_2; int member_4; int member_5; int member_6; int member_7; int member_8; int member_10; int member_12; int member_13; int member_14; int member_15; char* member_16; char* member_17; char* member_18; char* member_19; char* member_20; char* member_21; int member_11; int member_9; int member_3; int member_1; } ;
typedef TYPE_1__ crack_url_test_t ;
struct TYPE_7__ {char* lpszExtraInfo; char* lpszScheme; } ;
typedef TYPE_2__ URL_COMPONENTSA ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 () ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (char*,int ,int ,TYPE_2__*) ;
 int FUNC_2 (char*,char,int) ;
 int FUNC_3 (int,char*,scalar_t__,scalar_t__) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_2__*,int,int ,int ,int ,int ,int) ;

__attribute__((used)) static void FUNC_9(void)
{
    char VAR_2[6000];
    char VAR_3[sizeof(VAR_2) + 1000];
    crack_url_test_t VAR_4 =
        {VAR_3, 0, 4, VAR_1, 7, 14, -1, 80, -1, 0, -1, 0, 21, sizeof(VAR_2)-1, -1, 0,
         "http", "www.winehq.org", "", "", VAR_2, ""};
    crack_url_test_t VAR_5 =
        {VAR_3, 0, 4, VAR_1, 7, 14, -1, 80, -1, 0, -1, 0, 21, 6, 27, sizeof(VAR_2)-1,
         "http", "www.winehq.org", "", "", "/path/", VAR_2};
    URL_COMPONENTSA VAR_6;
    BOOL VAR_7;

    FUNC_2(VAR_2, 'x', sizeof(VAR_2));
    VAR_2[0] = '/';
    VAR_2[sizeof(VAR_2)-1] = 0;

    FUNC_5(VAR_3, "http://www.winehq.org");
    FUNC_4(VAR_3, VAR_2);
    FUNC_7(&VAR_4);

    FUNC_5(VAR_3, "http://www.winehq.org/path/");
    VAR_2[0] = '#';
    FUNC_4(VAR_3, VAR_2);
    FUNC_7(&VAR_5);

    FUNC_8(&VAR_6, 0, 0, 0, 0, 0, 100);
    VAR_6.lpszExtraInfo = VAR_2;
    VAR_7 = FUNC_1(VAR_3, FUNC_6(VAR_3), 0, &VAR_6);
    FUNC_3(!VAR_7 && FUNC_0() == VAR_0, "InternetCrackUrlA returned %x with error %d\n", VAR_7, FUNC_0());

    FUNC_8(&VAR_6, 4, 0, 0, 0, 0, 0);
    VAR_6.lpszScheme = VAR_2;
    VAR_7 = FUNC_1(VAR_3, FUNC_6(VAR_3), 0, &VAR_6);
    FUNC_3(!VAR_7 && FUNC_0() == VAR_0, "InternetCrackUrlA returned %x with error %d\n", VAR_7, FUNC_0());
}
