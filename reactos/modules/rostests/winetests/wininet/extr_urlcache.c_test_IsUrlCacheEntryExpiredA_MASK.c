
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


typedef int ULONGLONG ;
struct TYPE_12__ {int LowPart; int HighPart; } ;
struct TYPE_13__ {int QuadPart; TYPE_1__ u; } ;
typedef TYPE_2__ ULARGE_INTEGER ;
struct TYPE_15__ {int dwLowDateTime; int dwHighDateTime; } ;
struct TYPE_11__ {int dwLowDateTime; int dwHighDateTime; } ;
struct TYPE_14__ {TYPE_10__ LastModifiedTime; TYPE_10__ ExpireTime; } ;
typedef TYPE_3__ INTERNET_CACHE_ENTRY_INFOA ;
typedef TYPE_4__ FILETIME ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_10__*) ;
 int FUNC_3 (char const*,TYPE_3__*,int *) ;
 TYPE_3__* FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ,int ,TYPE_3__*) ;
 int FUNC_6 (char const*,int,TYPE_4__*) ;
 int FUNC_7 (char const*,TYPE_3__*,int ) ;
 int VAR_3 ;
 int FUNC_8 (int,char*,...) ;
 char const* VAR_4 ;

__attribute__((used)) static void FUNC_9(void)
{
    static const char VAR_5[] =
        "What's the airspeed velocity of an unladen swallow?";
    BOOL VAR_6;
    FILETIME VAR_7;
    DWORD VAR_8;
    INTERNET_CACHE_ENTRY_INFOA *VAR_9;
    ULARGE_INTEGER VAR_10;




    VAR_6 = FUNC_6(((void*)0), 0, ((void*)0));
    FUNC_8(VAR_6 != VAR_3, "IsUrlCacheEntryExpiredA returned %x\n", VAR_6);
    VAR_7.dwLowDateTime = 0xdeadbeef;
    VAR_7.dwHighDateTime = 0xbaadf00d;
    VAR_6 = FUNC_6(((void*)0), 0, &VAR_7);
    FUNC_8(VAR_6 != VAR_3, "IsUrlCacheEntryExpiredA returned %x\n", VAR_6);
    FUNC_8(VAR_7.dwLowDateTime == 0xdeadbeef && VAR_7.dwHighDateTime == 0xbaadf00d,
       "expected time to be unchanged, got (%u,%u)\n",
       VAR_7.dwLowDateTime, VAR_7.dwHighDateTime);
    VAR_6 = FUNC_6(VAR_4, 0, ((void*)0));
    FUNC_8(VAR_6 != VAR_3, "IsUrlCacheEntryExpiredA returned %x\n", VAR_6);





    VAR_7.dwLowDateTime = 0xdeadbeef;
    VAR_7.dwHighDateTime = 0xbaadf00d;
    VAR_6 = FUNC_6(VAR_4, 0, &VAR_7);
    FUNC_8(!VAR_6, "expected FALSE\n");
    FUNC_8(!VAR_7.dwLowDateTime && !VAR_7.dwHighDateTime,
       "expected time (0,0), got (%u,%u)\n",
       VAR_7.dwLowDateTime, VAR_7.dwHighDateTime);


    VAR_7.dwLowDateTime = 0xdeadbeef;
    VAR_7.dwHighDateTime = 0xbaadf00d;
    VAR_6 = FUNC_6(VAR_4, 0xffffffff, &VAR_7);
    FUNC_8(!VAR_6, "expected FALSE\n");
    FUNC_8(!VAR_7.dwLowDateTime && !VAR_7.dwHighDateTime,
       "expected time (0,0), got (%u,%u)\n",
       VAR_7.dwLowDateTime, VAR_7.dwHighDateTime);


    VAR_6 = FUNC_3(VAR_4, ((void*)0), &VAR_8);
    FUNC_8(!VAR_6, "GetUrlCacheEntryInfo should have failed\n");
    FUNC_8(FUNC_0() == VAR_2,
       "expected ERROR_INSUFFICIENT_BUFFER, got %d\n", FUNC_0());
    VAR_9 = FUNC_4(FUNC_1(), 0, VAR_8);
    VAR_6 = FUNC_3(VAR_4, VAR_9, &VAR_8);
    FUNC_8(VAR_6, "GetUrlCacheEntryInfo failed: %d\n", FUNC_0());
    FUNC_2(&VAR_9->ExpireTime);
    VAR_10.u.LowPart = VAR_9->ExpireTime.dwLowDateTime;
    VAR_10.u.HighPart = VAR_9->ExpireTime.dwHighDateTime;
    VAR_10.QuadPart -= 10 * 60 * (ULONGLONG)10000000;
    VAR_9->ExpireTime.dwLowDateTime = VAR_10.u.LowPart;
    VAR_9->ExpireTime.dwHighDateTime = VAR_10.u.HighPart;
    VAR_6 = FUNC_7(VAR_4, VAR_9, VAR_0);
    FUNC_8(VAR_6, "SetUrlCacheEntryInfo failed: %d\n", FUNC_0());
    VAR_7.dwLowDateTime = 0xdeadbeef;
    VAR_7.dwHighDateTime = 0xbaadf00d;

    VAR_6 = FUNC_6(VAR_4, 0, &VAR_7);
    FUNC_8(VAR_6, "expected TRUE\n");

    FUNC_8(!VAR_7.dwLowDateTime && !VAR_7.dwHighDateTime,
       "expected time (0,0), got (%u,%u)\n",
       VAR_7.dwLowDateTime, VAR_7.dwHighDateTime);

    VAR_10.QuadPart += 20 * 60 * (ULONGLONG)10000000;
    VAR_9->ExpireTime.dwLowDateTime = VAR_10.u.LowPart;
    VAR_9->ExpireTime.dwHighDateTime = VAR_10.u.HighPart;
    VAR_6 = FUNC_7(VAR_4, VAR_9, VAR_0);
    FUNC_8(VAR_6, "SetUrlCacheEntryInfo failed: %d\n", FUNC_0());
    VAR_7.dwLowDateTime = 0xdeadbeef;
    VAR_7.dwHighDateTime = 0xbaadf00d;

    VAR_6 = FUNC_6(VAR_4, 0, &VAR_7);
    FUNC_8(!VAR_6, "expected FALSE\n");

    FUNC_8(!VAR_7.dwLowDateTime && !VAR_7.dwHighDateTime,
       "expected time (0,0), got (%u,%u)\n",
       VAR_7.dwLowDateTime, VAR_7.dwHighDateTime);

    FUNC_2(&VAR_9->LastModifiedTime);
    VAR_6 = FUNC_7(VAR_4, VAR_9, VAR_1);
    FUNC_8(VAR_6, "SetUrlCacheEntryInfo failed: %d\n", FUNC_0());

    VAR_6 = FUNC_6(VAR_4, 0, &VAR_7);
    FUNC_8(!VAR_6, "expected FALSE\n");

    FUNC_8(VAR_7.dwLowDateTime == VAR_9->LastModifiedTime.dwLowDateTime &&
       VAR_7.dwHighDateTime == VAR_9->LastModifiedTime.dwHighDateTime,
       "expected time (%u,%u), got (%u,%u)\n",
       VAR_9->LastModifiedTime.dwLowDateTime,
       VAR_9->LastModifiedTime.dwHighDateTime,
       VAR_7.dwLowDateTime, VAR_7.dwHighDateTime);
    FUNC_5(FUNC_1(), 0, VAR_9);


    VAR_7.dwLowDateTime = 0xdeadbeef;
    VAR_7.dwHighDateTime = 0xbaadf00d;
    VAR_6 = FUNC_6(VAR_5, 0, &VAR_7);
    FUNC_8(VAR_6 != VAR_3, "IsUrlCacheEntryExpiredA returned %x\n", VAR_6);
    FUNC_8(!VAR_7.dwLowDateTime && !VAR_7.dwHighDateTime,
       "expected time (0,0), got (%u,%u)\n",
       VAR_7.dwLowDateTime, VAR_7.dwHighDateTime);
}
