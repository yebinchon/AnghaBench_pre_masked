
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msi_primary_key_record_info {int n; scalar_t__ rec; } ;
typedef int UINT ;
typedef int MSIRECORD ;
typedef struct msi_primary_key_record_info* LPVOID ;
typedef int LPCWSTR ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (scalar_t__,int,int ) ;

__attribute__((used)) static UINT FUNC_3( MSIRECORD *VAR_2, LPVOID VAR_3 )
{
    struct msi_primary_key_record_info *VAR_4 = VAR_3;
    LPCWSTR VAR_5, VAR_6;
    DWORD VAR_7;

    VAR_7 = FUNC_0( VAR_2, 4 );
    if( VAR_7 & VAR_1 )
    {
        VAR_4->n++;
        if( VAR_4->rec )
        {
            if ( VAR_4->n == 1 )
            {
                VAR_6 = FUNC_1( VAR_2, 1 );
                FUNC_2( VAR_4->rec, 0, VAR_6);
            }

            VAR_5 = FUNC_1( VAR_2, 3 );
            FUNC_2( VAR_4->rec, VAR_4->n, VAR_5 );
        }
    }

    return VAR_0;
}
