
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int cbData; int * pbData; } ;
typedef int DWORD ;
typedef TYPE_1__ CRYPT_DATA_BLOB ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int * FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (char*,int,int ,int *,int*,int *,int *) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static BOOL FUNC_3( const CRYPT_DATA_BLOB *VAR_2, CRYPT_DATA_BLOB *VAR_3 )
{
    BOOL VAR_4;
    DWORD VAR_5 = VAR_2->cbData;

    while (VAR_5 && !VAR_2->pbData[VAR_5 - 1]) VAR_5--;
    if (!FUNC_2( (char *)VAR_2->pbData, VAR_5, VAR_0,
                               ((void*)0), &VAR_3->cbData, ((void*)0), ((void*)0) )) return VAR_1;

    if (!(VAR_3->pbData = FUNC_0( VAR_3->cbData ))) return VAR_1;
    VAR_4 = FUNC_2( (char *)VAR_2->pbData, VAR_5, VAR_0,
                                VAR_3->pbData, &VAR_3->cbData, ((void*)0), ((void*)0) );
    if (!VAR_4) FUNC_1( VAR_3->pbData );
    return VAR_4;
}
