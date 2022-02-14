
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int WCHAR ;
typedef scalar_t__ UINT ;
struct TYPE_11__ {scalar_t__ log_file; } ;
struct TYPE_10__ {int hdr; } ;
typedef TYPE_1__ MSIRECORD ;
typedef TYPE_2__ MSIPACKAGE ;
typedef char* MSIHANDLE ;
typedef char* LPWSTR ;
typedef scalar_t__ INT ;
typedef int INSTALLMESSAGE ;
typedef int DWORD ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (TYPE_2__*,TYPE_1__*,char*,int*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,...) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,char*,int,char*,int,int *,int *) ;
 int FUNC_5 (scalar_t__,char*,int,int*,int *) ;
 char* FUNC_6 (int *) ;
 char* FUNC_7 (char*) ;
 char* FUNC_8 (char*) ;
 int FUNC_9 (TYPE_1__*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_10 (int ,int,char*) ;
 scalar_t__ FUNC_11 (int ,int,char*) ;
 scalar_t__ FUNC_12 (int ,int,char*) ;
 scalar_t__ FUNC_13 (TYPE_2__*,int,TYPE_1__*,char*) ;
 int VAR_10 ;
 char* FUNC_14 (int) ;
 int FUNC_15 (char*) ;

INT FUNC_16(MSIPACKAGE *VAR_11, INSTALLMESSAGE VAR_12, MSIRECORD *VAR_13)
{
    LPWSTR VAR_14 = {0};
    DWORD VAR_15;
    DWORD VAR_16 = 1 << (VAR_12 >> 24);
    UINT VAR_17;
    INT VAR_18 = 0;
    char *VAR_19;

    FUNC_2("%x\n", VAR_12);
    if (FUNC_3(VAR_10)) FUNC_9(VAR_13);

    if (!VAR_11 || !VAR_13)
        VAR_14 = ((void*)0);
    else {
        VAR_17 = FUNC_0(VAR_11, VAR_13, VAR_14, &VAR_15);
        if (VAR_17 != VAR_3 && VAR_17 != VAR_1)
            return VAR_17;
        VAR_15++;
        VAR_14 = FUNC_14(VAR_15 * sizeof(WCHAR));
        if (!VAR_14) return VAR_2;
        FUNC_0(VAR_11, VAR_13, VAR_14, &VAR_15);
    }


    VAR_15 = FUNC_4( VAR_0, 0, VAR_14, -1, ((void*)0), 0, ((void*)0), ((void*)0) );
    VAR_19 = FUNC_14( VAR_15 );
    FUNC_4( VAR_0, 0, VAR_14, -1, VAR_19, VAR_15, ((void*)0), ((void*)0) );

    if (&FUNC_11 && (VAR_9 & VAR_16))
    {
        MSIHANDLE VAR_20 = FUNC_6(&VAR_13->hdr);
        FUNC_2("Calling UI handler %p(pvContext=%p, iMessageType=%08x, hRecord=%u)\n",
              FUNC_11, VAR_7, VAR_12, VAR_20);
        VAR_18 = FUNC_11( VAR_7, VAR_12, VAR_20 );
        FUNC_1( VAR_20 );
    }
    if (!VAR_18 && &FUNC_12 && (VAR_8 & VAR_16))
    {
        FUNC_2("Calling UI handler %p(pvContext=%p, iMessageType=%08x, szMessage=%s)\n",
              FUNC_12, VAR_6, VAR_12, FUNC_8(VAR_14));
        VAR_18 = FUNC_12( VAR_6, VAR_12, VAR_14 );
    }
    else if (!VAR_18 && &FUNC_10 && (VAR_8 & VAR_16))
    {
        FUNC_2("Calling UI handler %p(pvContext=%p, iMessageType=%08x, szMessage=%s)\n",
              FUNC_10, VAR_6, VAR_12, FUNC_7(VAR_19));
        VAR_18 = FUNC_10( VAR_6, VAR_12, VAR_19 );
    }

    if (!VAR_18)
        VAR_18 = FUNC_13(VAR_11, VAR_12, VAR_13, VAR_14);

    if (!VAR_18 && VAR_11 && VAR_11->log_file != VAR_5 &&
        (VAR_12 & 0xff000000) != VAR_4)
    {
        DWORD VAR_21;
        FUNC_5( VAR_11->log_file, VAR_19, VAR_15 - 1, &VAR_21, ((void*)0) );
        FUNC_5( VAR_11->log_file, "\n", 1, &VAR_21, ((void*)0) );
    }
    FUNC_15( VAR_19 );
    FUNC_15( VAR_14 );

    return VAR_18;
}
