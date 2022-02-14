
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int cbData; void* pbData; } ;
struct TYPE_7__ {int pbData; } ;
struct TYPE_6__ {int * pbData; scalar_t__ cbData; } ;
struct TYPE_5__ {int * pbData; scalar_t__ cbData; } ;
struct protect_data_t {int count0; int count1; int null0; int null1; TYPE_4__ salt; TYPE_3__ data0; void* szDataDescr; TYPE_3__ info1; TYPE_3__ info0; TYPE_2__ fingerprint; TYPE_1__ cipher; int hash_len; int hash_alg; int cipher_key_len; int cipher_alg; } ;
typedef int WCHAR ;
typedef int LPCWSTR ;
typedef int HCRYPTPROV ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int,void*) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 int VAR_5 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (TYPE_4__*) ;
 int VAR_6 ;
 int FUNC_5 (int ,TYPE_3__*) ;
 int VAR_7 ;
 int FUNC_6 (struct protect_data_t*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (void*,int ,int) ;
 int FUNC_9 (struct protect_data_t*,int ,int) ;

__attribute__((used)) static
BOOL FUNC_10(struct protect_data_t * VAR_8, LPCWSTR VAR_9,
                       HCRYPTPROV VAR_10)
{
    DWORD VAR_11;

    FUNC_3("called\n");

    if (!VAR_8) return VAR_5;

    VAR_11=FUNC_7(VAR_9);

    FUNC_9(VAR_8,0,sizeof(*VAR_8));

    VAR_8->count0=0x0001;

    FUNC_5(VAR_7, &VAR_8->info0);

    VAR_8->count1=0x0001;

    FUNC_5(VAR_7, &VAR_8->info1);

    VAR_8->null0=0x0000;

    if ((VAR_8->szDataDescr=FUNC_1((VAR_11+1)*sizeof(WCHAR))))
    {
        FUNC_8(VAR_8->szDataDescr,VAR_9,(VAR_11+1)*sizeof(WCHAR));
    }

    VAR_8->cipher_alg=VAR_2;
    VAR_8->cipher_key_len=VAR_3;

    FUNC_5(VAR_7, &VAR_8->data0);

    VAR_8->null1=0x0000;
    VAR_8->hash_alg=VAR_0;
    VAR_8->hash_len=VAR_1;


    if ((VAR_8->salt.pbData=FUNC_1(VAR_4)))
    {

        if (!FUNC_0(VAR_10, VAR_4, VAR_8->salt.pbData))
        {
            FUNC_2("CryptGenRandom\n");
            FUNC_6(VAR_8);
            return VAR_5;
        }
        VAR_8->salt.cbData=VAR_4;

        FUNC_4(&VAR_8->salt);
    }
    VAR_8->cipher.cbData=0;
    VAR_8->cipher.pbData=((void*)0);

    VAR_8->fingerprint.cbData=0;
    VAR_8->fingerprint.pbData=((void*)0);


    if (!VAR_8->info0.pbData ||
        !VAR_8->info1.pbData ||
        !VAR_8->szDataDescr ||
        !VAR_8->data0.pbData ||
        !VAR_8->salt.pbData
        )
    {
        FUNC_2("could not allocate protect_data structures\n");
        FUNC_6(VAR_8);
        return VAR_5;
    }

    return VAR_6;
}
