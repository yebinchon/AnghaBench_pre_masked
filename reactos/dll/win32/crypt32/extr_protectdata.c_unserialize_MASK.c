
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
struct protect_data_t {TYPE_6__ fingerprint; TYPE_5__ cipher; TYPE_4__ salt; int hash_len; int hash_alg; int null1; TYPE_3__ data0; int cipher_key_len; int cipher_alg; int szDataDescr; int null0; TYPE_2__ info1; int count1; TYPE_1__ info0; int count0; } ;
struct TYPE_15__ {scalar_t__ cbData; int * pbData; } ;
typedef scalar_t__ DWORD ;
typedef TYPE_7__ DATA_BLOB ;
typedef int BYTE ;
typedef int BOOL ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 int FUNC_2 (int *,scalar_t__*,scalar_t__,int *) ;
 int FUNC_3 (int *,scalar_t__*,scalar_t__,int,int,int ,int **,int *) ;

__attribute__((used)) static
BOOL FUNC_4(const DATA_BLOB *VAR_2, struct protect_data_t *VAR_3)
{
    BYTE * VAR_4;
    DWORD VAR_5;
    DWORD VAR_6;
    BOOL VAR_7=VAR_1;

    FUNC_1("called\n");

    if (!VAR_3 || !VAR_2 || !VAR_2->pbData)
        return VAR_0;

    VAR_5=0;
    VAR_4=VAR_2->pbData;
    VAR_6=VAR_2->cbData;


    if (!FUNC_2(VAR_4,&VAR_5,VAR_6,&VAR_3->count0))
    {
        FUNC_0("reading count0 failed!\n");
        return VAR_0;
    }


    if (!FUNC_3(VAR_4,&VAR_5,VAR_6,16,sizeof(BYTE),VAR_0,
                            &VAR_3->info0.pbData, &VAR_3->info0.cbData))
    {
        FUNC_0("reading info0 failed!\n");
        return VAR_0;
    }


    if (!FUNC_2(VAR_4,&VAR_5,VAR_6,&VAR_3->count1))
    {
        FUNC_0("reading count1 failed!\n");
        return VAR_0;
    }


    if (!FUNC_3(VAR_4,&VAR_5,VAR_6,16,sizeof(BYTE),VAR_0,
                            &VAR_3->info1.pbData, &VAR_3->info1.cbData))
    {
        FUNC_0("reading info1 failed!\n");
        return VAR_0;
    }


    if (!FUNC_2(VAR_4,&VAR_5,VAR_6,&VAR_3->null0))
    {
        FUNC_0("reading null0 failed!\n");
        return VAR_0;
    }


    if (!FUNC_3(VAR_4,&VAR_5,VAR_6,0,sizeof(BYTE),VAR_1,
                            (BYTE**)&VAR_3->szDataDescr, ((void*)0)))
    {
        FUNC_0("reading szDataDescr failed!\n");
        return VAR_0;
    }


    if (!FUNC_2(VAR_4,&VAR_5,VAR_6,&VAR_3->cipher_alg))
    {
        FUNC_0("reading cipher_alg failed!\n");
        return VAR_0;
    }


    if (!FUNC_2(VAR_4,&VAR_5,VAR_6,&VAR_3->cipher_key_len))
    {
        FUNC_0("reading cipher_key_len failed!\n");
        return VAR_0;
    }


    if (!FUNC_3(VAR_4,&VAR_5,VAR_6,0,sizeof(BYTE),VAR_1,
                            &VAR_3->data0.pbData, &VAR_3->data0.cbData))
    {
        FUNC_0("reading data0 failed!\n");
        return VAR_0;
    }


    if (!FUNC_2(VAR_4,&VAR_5,VAR_6,&VAR_3->null1))
    {
        FUNC_0("reading null1 failed!\n");
        return VAR_0;
    }


    if (!FUNC_2(VAR_4,&VAR_5,VAR_6,&VAR_3->hash_alg))
    {
        FUNC_0("reading hash_alg failed!\n");
        return VAR_0;
    }


    if (!FUNC_2(VAR_4,&VAR_5,VAR_6,&VAR_3->hash_len))
    {
        FUNC_0("reading hash_len failed!\n");
        return VAR_0;
    }


    if (!FUNC_3(VAR_4,&VAR_5,VAR_6,0,sizeof(BYTE),VAR_1,
                            &VAR_3->salt.pbData, &VAR_3->salt.cbData))
    {
        FUNC_0("reading salt failed!\n");
        return VAR_0;
    }


    if (!FUNC_3(VAR_4,&VAR_5,VAR_6,0,sizeof(BYTE),VAR_1,
                            &VAR_3->cipher.pbData, &VAR_3->cipher.cbData))
    {
        FUNC_0("reading cipher failed!\n");
        return VAR_0;
    }


    if (!FUNC_3(VAR_4,&VAR_5,VAR_6,0,sizeof(BYTE),VAR_1,
                            &VAR_3->fingerprint.pbData, &VAR_3->fingerprint.cbData))
    {
        FUNC_0("reading fingerprint failed!\n");
        return VAR_0;
    }



    if (VAR_5>VAR_6)
    {


        FUNC_0("loaded corrupt structure! (used %u expected %u)\n", VAR_5, VAR_6);
        VAR_7=VAR_0;
    }

    return VAR_7;
}
