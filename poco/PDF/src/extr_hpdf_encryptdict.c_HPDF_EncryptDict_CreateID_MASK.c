
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int time_t ;
typedef int t ;
struct TYPE_14__ {int encrypt_id; } ;
struct TYPE_13__ {int attr; } ;
struct TYPE_12__ {TYPE_1__* entries; } ;
struct TYPE_11__ {int count; } ;
typedef TYPE_2__* HPDF_Xref ;
typedef int HPDF_UINT32 ;
typedef int HPDF_UINT ;
typedef int HPDF_MD5_CTX ;
typedef TYPE_3__* HPDF_EncryptDict ;
typedef TYPE_4__* HPDF_Encrypt ;
typedef TYPE_2__* HPDF_Dict ;
typedef int const HPDF_BYTE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 char* FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int const*,int) ;
 int FUNC_4 (char const*,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_2__*) ;

void
FUNC_7 (HPDF_EncryptDict VAR_6,
                            HPDF_Dict VAR_7,
                            HPDF_Xref VAR_8)
{
    HPDF_MD5_CTX VAR_9;
    HPDF_Encrypt VAR_10 = (HPDF_Encrypt)VAR_6->attr;





    time_t VAR_11 = FUNC_5 (((void*)0));


    FUNC_2 (&VAR_9);
    FUNC_6 (VAR_8);
    FUNC_6 (VAR_7);


    FUNC_3(&VAR_9, (HPDF_BYTE *)&VAR_11, sizeof(VAR_11));


    if (VAR_7) {
        const char *VAR_12;
        HPDF_UINT VAR_13;


        VAR_12 = FUNC_0 (VAR_7, VAR_0);
        if ((VAR_13 = FUNC_4 (VAR_12, -1)) > 0)
            FUNC_3(&VAR_9, (const HPDF_BYTE *)VAR_12, VAR_13);


        VAR_12 = FUNC_0 (VAR_7, VAR_1);
        if ((VAR_13 = FUNC_4 (VAR_12, -1)) > 0)
            FUNC_3(&VAR_9, (const HPDF_BYTE *)VAR_12, VAR_13);


        VAR_12 = FUNC_0 (VAR_7, VAR_3);
        if ((VAR_13 = FUNC_4 (VAR_12, -1)) > 0)
            FUNC_3(&VAR_9, (const HPDF_BYTE *)VAR_12, VAR_13);


        VAR_12 = FUNC_0 (VAR_7, VAR_5);
        if ((VAR_13 = FUNC_4 (VAR_12, -1)) > 0)
            FUNC_3(&VAR_9, (const HPDF_BYTE *)VAR_12, VAR_13);


        VAR_12 = FUNC_0 (VAR_7, VAR_4);
        if ((VAR_13 = FUNC_4 (VAR_12, -1)) > 0)
            FUNC_3(&VAR_9, (const HPDF_BYTE *)VAR_12, VAR_13);


        VAR_12 = FUNC_0 (VAR_7, VAR_2);
        if ((VAR_13 = FUNC_4 (VAR_12, -1)) > 0)
            FUNC_3(&VAR_9, (const HPDF_BYTE *)VAR_12, VAR_13);

        FUNC_3(&VAR_9, (const HPDF_BYTE *)&(VAR_8->entries->count),
                sizeof(HPDF_UINT32));

    }

    FUNC_1(VAR_10->encrypt_id, &VAR_9);
}
