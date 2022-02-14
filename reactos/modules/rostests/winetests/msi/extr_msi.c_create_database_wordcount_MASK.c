
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int size; int filename; int data; } ;
typedef TYPE_1__ msi_table ;
typedef int WCHAR ;
typedef scalar_t__ UINT ;
typedef int MSIHANDLE ;
typedef int INT ;
typedef int CHAR ;


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
 int FUNC_8 (int ,int ,int const*,int,int *,int) ;
 int FUNC_9 (int,char*,scalar_t__) ;
 int FUNC_10 (int ,int ,int) ;
 int FUNC_11 (int ,int ,int ,char const*) ;

__attribute__((used)) static void FUNC_12(const CHAR *VAR_4, const msi_table *VAR_5,
                                      int VAR_6, INT VAR_7, INT VAR_8,
                                      const char *VAR_9)
{
    MSIHANDLE VAR_10;
    UINT VAR_11;
    WCHAR *VAR_12;
    int VAR_13, VAR_14;

    VAR_14 = FUNC_8( VAR_0, 0, VAR_4, -1, ((void*)0), 0 );
    if (!(VAR_12 = FUNC_2( FUNC_1(), 0, VAR_14 * sizeof(WCHAR) ))) return;
    FUNC_8( VAR_0, 0, VAR_4, -1, VAR_12, VAR_14 );

    VAR_11 = FUNC_7(VAR_12, VAR_3, &VAR_10);
    FUNC_9(VAR_11 == VAR_2, "Expected ERROR_SUCCESS, got %u\n", VAR_11);


    for (VAR_13 = 0; VAR_13 < VAR_6; VAR_13++)
    {
        const msi_table *VAR_15 = &VAR_5[VAR_13];

        FUNC_10(VAR_15->filename, VAR_15->data, (VAR_15->size - 1) * sizeof(char));

        VAR_11 = FUNC_6(VAR_10, VAR_1, VAR_15->filename);
        FUNC_9(VAR_11 == VAR_2, "Expected ERROR_SUCCESS, got %u\n", VAR_11);

        FUNC_0(VAR_15->filename);
    }

    FUNC_11(VAR_10, VAR_7, VAR_8, VAR_9);

    VAR_11 = FUNC_5(VAR_10);
    FUNC_9(VAR_11 == VAR_2, "Expected ERROR_SUCCESS, got %u\n", VAR_11);

    FUNC_4(VAR_10);
    FUNC_3( FUNC_1(), 0, VAR_12 );
}
