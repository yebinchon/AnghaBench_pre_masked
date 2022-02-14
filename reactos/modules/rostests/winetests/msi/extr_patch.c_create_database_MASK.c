
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msi_table {int size; int filename; int data; } ;
typedef int WCHAR ;
typedef scalar_t__ UINT ;
typedef int MSIHANDLE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 () ;
 int * FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,int *) ;
 int VAR_3 ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ,int ,int ) ;
 scalar_t__ FUNC_7 (int *,int ,int *) ;
 int FUNC_8 (int ,int ,char const*,int,int *,int) ;
 int FUNC_9 (int,char*,scalar_t__) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ,int ,int) ;

__attribute__((used)) static void FUNC_12( const char *VAR_4, const struct msi_table *VAR_5, UINT VAR_6 )
{
    MSIHANDLE VAR_7;
    UINT VAR_8, VAR_9;
    WCHAR *VAR_10;
    int VAR_11;

    VAR_11 = FUNC_8( VAR_0, 0, VAR_4, -1, ((void*)0), 0 );
    if (!(VAR_10 = FUNC_2( FUNC_1(), 0, VAR_11 * sizeof(WCHAR) ))) return;
    FUNC_8( VAR_0, 0, VAR_4, -1, VAR_10, VAR_11 );

    VAR_8 = FUNC_7( VAR_10, VAR_3, &VAR_7 );
    FUNC_9(VAR_8 == VAR_2, "expected ERROR_SUCCESS, got %u\n", VAR_8);


    for (VAR_9 = 0; VAR_9 < VAR_6; VAR_9++)
    {
        const struct msi_table *VAR_12 = &VAR_5[VAR_9];

        FUNC_11( VAR_12->filename, VAR_12->data, (VAR_12->size - 1) * sizeof(char) );

        VAR_8 = FUNC_6( VAR_7, VAR_1, VAR_12->filename );
        FUNC_9(VAR_8 == VAR_2, "expected ERROR_SUCCESS, got %u\n", VAR_8);

        FUNC_0( VAR_12->filename );
    }

    VAR_8 = FUNC_5( VAR_7 );
    FUNC_9(VAR_8 == VAR_2, "expected ERROR_SUCCESS, got %u\n", VAR_8);

    FUNC_4( VAR_7 );
    FUNC_10( VAR_10 );
    FUNC_3( FUNC_1(), 0, VAR_10 );
}
