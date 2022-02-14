
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int USHORT ;
struct TYPE_3__ {int hFile; } ;
typedef TYPE_1__ SIP_SUBJECTINFO ;
typedef int LONG ;
typedef int DWORD ;
typedef int BYTE ;
typedef int BOOL ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 void* FUNC_1 (int*) ;
 int FUNC_2 (int*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ,int*,int,int*,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_4 (int ,int,int *,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,...) ;
 int VAR_7 ;
 int FUNC_7 (char*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;

__attribute__((used)) static BOOL FUNC_8(SIP_SUBJECTINFO *VAR_20,
 DWORD *VAR_21, DWORD VAR_22, DWORD *VAR_23,
 BYTE *VAR_24)
{
    int VAR_25;
    LONG VAR_26, VAR_27;
    USHORT VAR_28;
    BYTE VAR_29[64];
    DWORD VAR_30, VAR_31, VAR_32;

    FUNC_6("(%p %p %d %p %p)\n", VAR_20, VAR_21, VAR_22,
          VAR_23, VAR_24);


    VAR_26 = FUNC_4(VAR_20->hFile, 0L, ((void*)0), VAR_4);

    if (FUNC_4(VAR_20->hFile, 0, ((void*)0), VAR_5) == VAR_2)
    {
        FUNC_6("seek error\n");
        return VAR_1;
    }

    VAR_27 = FUNC_4(VAR_20->hFile, 0L, ((void*)0), VAR_4);
    if ((VAR_27 == -1) || (VAR_26 == -1) ||
     (FUNC_4(VAR_20->hFile, 0, ((void*)0), VAR_6) == VAR_2))
    {
        FUNC_6("seek error\n");
        return VAR_1;
    }


    if (!FUNC_3(VAR_20->hFile, VAR_29, VAR_13, &VAR_32, ((void*)0)) ||
     VAR_32 != VAR_13)
    {
        FUNC_6("reading header failed\n");
        return VAR_1;
    }


    if (FUNC_2(VAR_29+VAR_14) != 0x4643534d)
    {
        FUNC_7("cabinet signature not present\n");
        return VAR_1;
    }




    if ((VAR_29[VAR_11] > 1) ||
        (VAR_29[VAR_11] == 1 && VAR_29[VAR_12] > 3))
    {
        FUNC_7("cabinet format version > 1.3\n");
        return VAR_1;
    }


    VAR_28 = FUNC_1(VAR_29+VAR_10);

    if (!(VAR_28 & VAR_9))
    {
        FUNC_6("no header present, not signed\n");
        return VAR_1;
    }

    if (!FUNC_3(VAR_20->hFile, VAR_29, VAR_16, &VAR_32, ((void*)0)) ||
     VAR_32 != VAR_16)
    {
        FUNC_0("bunk reserve-sizes?\n");
        return VAR_1;
    }

    VAR_25 = FUNC_1(VAR_29+VAR_15);
    if (!VAR_25)
    {
        FUNC_6("no header_resv, not signed\n");
        return VAR_1;
    }
    else if (VAR_25 < VAR_19)
    {
        FUNC_6("header_resv too small, not signed\n");
        return VAR_1;
    }

    if (VAR_25 > 60000)
    {
        FUNC_7("WARNING; header reserved space > 60000\n");
    }

    if (!FUNC_3(VAR_20->hFile, VAR_29, VAR_19, &VAR_32, ((void*)0)) ||
     VAR_32 != VAR_19)
    {
        FUNC_0("couldn't read reserve\n");
        return VAR_1;
    }

    VAR_30 = FUNC_2(VAR_29+VAR_17);
    FUNC_6("cert_offset: %d\n", VAR_30);
    VAR_31 = FUNC_2(VAR_29+VAR_18);
    FUNC_6("cert_size: %d\n", VAR_31);


    if (VAR_30 > VAR_27 || VAR_31 > VAR_27 ||
     VAR_30 + VAR_31 > VAR_27)
    {
        FUNC_7("offset beyond file, not attempting to read\n");
        return VAR_1;
    }

    FUNC_4(VAR_20->hFile, VAR_26, ((void*)0), VAR_6);
    if (!VAR_24)
    {
        *VAR_23 = VAR_31;
        return VAR_7;
    }
    if (*VAR_23 < VAR_31)
    {
        *VAR_23 = VAR_31;
        FUNC_5(VAR_0);
        return VAR_1;
    }
    if (FUNC_4(VAR_20->hFile, VAR_30, ((void*)0), VAR_6) == VAR_2)
    {
        FUNC_0("couldn't seek to cert location\n");
        return VAR_1;
    }
    if (!FUNC_3(VAR_20->hFile, VAR_24, VAR_31, &VAR_32,
     ((void*)0)) || VAR_32 != VAR_31)
    {
        FUNC_0("couldn't read cert\n");
        FUNC_4(VAR_20->hFile, VAR_26, ((void*)0), VAR_6);
        return VAR_1;
    }




    *VAR_21 = VAR_8 | VAR_3;

    FUNC_4(VAR_20->hFile, VAR_26, ((void*)0), VAR_6);
    return VAR_7;
}
