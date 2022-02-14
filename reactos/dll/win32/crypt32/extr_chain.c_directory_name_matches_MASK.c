
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int cbData; int pbData; } ;
struct TYPE_8__ {size_t cRDN; int * rgRDN; } ;
typedef size_t DWORD ;
typedef TYPE_1__ CERT_NAME_INFO ;
typedef TYPE_2__ CERT_NAME_BLOB ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,TYPE_2__*,int *) ;
 scalar_t__ FUNC_1 (int ,int ,int ,int ,int ,int *,TYPE_1__**,size_t*) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static BOOL FUNC_3(const CERT_NAME_BLOB *VAR_6,
 const CERT_NAME_BLOB *VAR_7)
{
    CERT_NAME_INFO *VAR_8;
    DWORD VAR_9;
    BOOL VAR_10 = VAR_2;

    if (FUNC_1(VAR_4, VAR_5, VAR_6->pbData,
     VAR_6->cbData, VAR_1, ((void*)0), &VAR_8, &VAR_9))
    {
        DWORD VAR_11;

        VAR_10 = VAR_3;
        for (VAR_11 = 0; VAR_10 && VAR_11 < VAR_8->cRDN; VAR_11++)
            VAR_10 = FUNC_0(VAR_4,
             VAR_0,
             (CERT_NAME_BLOB *)VAR_7, &VAR_8->rgRDN[VAR_11]);
        FUNC_2(VAR_8);
    }
    return VAR_10;
}
