
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ cbData; int pbData; } ;
typedef int HCRYPTHASH ;
typedef TYPE_1__ DATA_BLOB ;
typedef int BOOL ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,TYPE_1__*) ;
 scalar_t__ FUNC_2 (int ,int ,scalar_t__) ;

__attribute__((used)) static
BOOL FUNC_3(HCRYPTHASH VAR_2, const DATA_BLOB *VAR_3)
{
    BOOL VAR_4 = VAR_0;
    DATA_BLOB VAR_5;

    if (!VAR_3 || !VAR_3->pbData) return VAR_0;

    if (!FUNC_1(VAR_2,&VAR_5)) {
        return VAR_0;
    }

    if ( VAR_5.cbData == VAR_3->cbData &&
         FUNC_2( VAR_5.pbData, VAR_3->pbData, VAR_5.cbData ) == 0 )
    {
        VAR_4 = VAR_1;
    }

    FUNC_0(VAR_5.pbData);
    return VAR_4;
}
