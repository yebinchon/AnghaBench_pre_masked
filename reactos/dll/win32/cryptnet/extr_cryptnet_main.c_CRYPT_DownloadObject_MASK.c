
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct InetContext {int timeout; int event; scalar_t__ error; } ;
typedef int buffer ;
struct TYPE_10__ {int pbData; int cbData; int * member_1; int member_0; } ;
struct TYPE_9__ {int member_0; int dwBufferLength; int lpvBuffer; int member_1; } ;
struct TYPE_8__ {int cBlob; TYPE_1__* rgBlob; } ;
struct TYPE_7__ {int cbData; int pbData; } ;
typedef int PCRYPT_RETRIEVE_AUX_INFO ;
typedef TYPE_2__* PCRYPT_BLOB_ARRAY ;
typedef TYPE_3__ INTERNET_BUFFERSA ;
typedef int HINTERNET ;
typedef int DWORD_PTR ;
typedef int DWORD ;
typedef TYPE_4__ CRYPT_DATA_BLOB ;
typedef scalar_t__ BOOL ;


 void* FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_3 () ;
 int VAR_4 ;
 scalar_t__ FUNC_4 (int ,int*,int ,int ) ;
 scalar_t__ FUNC_5 (int ,TYPE_3__*,int ,int ) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (char*,scalar_t__) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_8 (int ,int ) ;

__attribute__((used)) static BOOL FUNC_9(DWORD VAR_7, HINTERNET VAR_8,
 struct InetContext *VAR_9, PCRYPT_BLOB_ARRAY VAR_10,
 PCRYPT_RETRIEVE_AUX_INFO VAR_11)
{
    CRYPT_DATA_BLOB VAR_12 = { 0, ((void*)0) };
    DWORD VAR_13;
    BOOL VAR_14;

    do {
        if ((VAR_14 = FUNC_4(VAR_8, &VAR_13, 0, 0)))
        {
            if (VAR_13)
            {
                if (VAR_12.pbData)
                    VAR_12.pbData = FUNC_2(VAR_12.pbData,
                     VAR_12.cbData + VAR_13);
                else
                    VAR_12.pbData = FUNC_0(VAR_13);
                if (VAR_12.pbData)
                {
                    INTERNET_BUFFERSA VAR_15 = { sizeof(VAR_15), 0 };

                    VAR_15.dwBufferLength = VAR_13;
                    VAR_15.lpvBuffer = VAR_12.pbData + VAR_12.cbData;
                    if (!(VAR_14 = FUNC_5(VAR_8, &VAR_15, VAR_4,
                     (DWORD_PTR)VAR_9)))
                    {
                        if (FUNC_3() == VAR_0)
                        {
                            if (FUNC_8(VAR_9->event,
                             VAR_9->timeout) == VAR_6)
                                FUNC_6(VAR_2);
                            else if (VAR_9->error)
                                FUNC_6(VAR_9->error);
                            else
                                VAR_14 = VAR_5;
                        }
                    }
                    if (VAR_14)
                        VAR_12.cbData += VAR_15.dwBufferLength;
                }
                else
                {
                    FUNC_6(VAR_1);
                    VAR_14 = VAR_3;
                }
            }
        }
        else if (FUNC_3() == VAR_0)
        {
            if (FUNC_8(VAR_9->event, VAR_9->timeout) ==
             VAR_6)
                FUNC_6(VAR_2);
            else
                VAR_14 = VAR_5;
        }
    } while (VAR_14 && VAR_13);
    if (VAR_14)
    {
        VAR_10->rgBlob = FUNC_0(sizeof(CRYPT_DATA_BLOB));
        if (!VAR_10->rgBlob)
        {
            FUNC_1(VAR_12.pbData);
            FUNC_6(VAR_1);
            VAR_14 = VAR_3;
        }
        else
        {
            VAR_10->rgBlob[0].cbData = VAR_12.cbData;
            VAR_10->rgBlob[0].pbData = VAR_12.pbData;
            VAR_10->cBlob = 1;
        }
    }
    FUNC_7("returning %d\n", VAR_14);
    return VAR_14;
}
