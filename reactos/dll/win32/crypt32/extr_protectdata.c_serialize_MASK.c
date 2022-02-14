
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_14__ {int cbData; int * pbData; } ;
struct TYPE_13__ {int cbData; int * pbData; } ;
struct TYPE_12__ {int cbData; int * pbData; } ;
struct TYPE_11__ {int cbData; int * pbData; } ;
struct TYPE_10__ {int cbData; int * pbData; } ;
struct TYPE_9__ {int cbData; int * pbData; } ;
struct protect_data_t {TYPE_6__ fingerprint; TYPE_5__ cipher; TYPE_4__ salt; int hash_len; int hash_alg; int null1; TYPE_3__ data0; int cipher_key_len; int cipher_alg; scalar_t__ szDataDescr; int null0; TYPE_2__ info1; int count1; TYPE_1__ info0; int count0; } ;
typedef int WCHAR ;
struct TYPE_15__ {int cbData; int * pbData; } ;
typedef int DWORD ;
typedef TYPE_7__ DATA_BLOB ;
typedef int BYTE ;
typedef int BOOL ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_1 (int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*) ;
 int VAR_2 ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ,int **) ;
 int FUNC_6 (int *,int **,int,int,int ) ;

__attribute__((used)) static
BOOL FUNC_7(const struct protect_data_t *VAR_3, DATA_BLOB *VAR_4)
{
    BYTE * VAR_5;
    DWORD VAR_6;
    DWORD VAR_7;

    FUNC_3("called\n");

    if (!VAR_3 || !VAR_3->szDataDescr || !VAR_4 ||
        !VAR_3->info0.pbData || !VAR_3->info1.pbData ||
        !VAR_3->data0.pbData || !VAR_3->salt.pbData ||
        !VAR_3->cipher.pbData || !VAR_3->fingerprint.pbData)
    {
        return VAR_0;
    }

    if (VAR_3->info0.cbData!=16)
    {
        FUNC_0("protect_data_t info0 not 16 bytes long\n");
    }

    if (VAR_3->info1.cbData!=16)
    {
        FUNC_0("protect_data_t info1 not 16 bytes long\n");
    }

    VAR_6=FUNC_4(VAR_3->szDataDescr);

    VAR_4->cbData=0;
    VAR_4->cbData+=sizeof(DWORD)*8;
    VAR_4->cbData+=sizeof(DWORD)*4;
    VAR_4->cbData+=VAR_3->info0.cbData;
    VAR_4->cbData+=VAR_3->info1.cbData;
    VAR_4->cbData+=(VAR_6+1)*sizeof(WCHAR) + 4;
    VAR_4->cbData+=VAR_3->data0.cbData;
    VAR_4->cbData+=VAR_3->salt.cbData;
    VAR_4->cbData+=VAR_3->cipher.cbData;
    VAR_4->cbData+=VAR_3->fingerprint.cbData;


    VAR_7 = VAR_4->cbData;



    VAR_4->pbData=FUNC_1(VAR_1,VAR_4->cbData);
    if (!VAR_4->pbData) return VAR_0;

    VAR_5=VAR_4->pbData;


    FUNC_5(VAR_3->count0,&VAR_5);



    FUNC_6(VAR_3->info0.pbData,&VAR_5,
                     VAR_3->info0.cbData,sizeof(BYTE),VAR_0);



    FUNC_5(VAR_3->count1,&VAR_5);



    FUNC_6(VAR_3->info1.pbData,&VAR_5,
                     VAR_3->info1.cbData,sizeof(BYTE),VAR_0);



    FUNC_5(VAR_3->null0,&VAR_5);



    FUNC_6((BYTE*)VAR_3->szDataDescr,&VAR_5,
                     (VAR_6+1)*sizeof(WCHAR),sizeof(BYTE),VAR_2);



    FUNC_5(VAR_3->cipher_alg,&VAR_5);


    FUNC_5(VAR_3->cipher_key_len,&VAR_5);



    FUNC_6(VAR_3->data0.pbData,&VAR_5,
                     VAR_3->data0.cbData,sizeof(BYTE),VAR_2);



    FUNC_5(VAR_3->null1,&VAR_5);



    FUNC_5(VAR_3->hash_alg,&VAR_5);


    FUNC_5(VAR_3->hash_len,&VAR_5);



    FUNC_6(VAR_3->salt.pbData,&VAR_5,
                     VAR_3->salt.cbData,sizeof(BYTE),VAR_2);



    FUNC_6(VAR_3->cipher.pbData,&VAR_5,
                     VAR_3->cipher.cbData,sizeof(BYTE),VAR_2);



    FUNC_6(VAR_3->fingerprint.pbData,&VAR_5,
                     VAR_3->fingerprint.cbData,sizeof(BYTE),VAR_2);


    if (VAR_5 - VAR_4->pbData != VAR_7)
    {
        FUNC_0("struct size changed!? expected %u\n", VAR_7);
        FUNC_2(VAR_4->pbData);
        VAR_4->pbData=((void*)0);
        VAR_4->cbData=0;
        return VAR_0;
    }

    return VAR_2;
}
