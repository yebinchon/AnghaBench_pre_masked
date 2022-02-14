
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_14__ {int db; } ;
struct TYPE_13__ {int hdr; } ;
typedef int MSISIGNATURE ;
typedef TYPE_1__ MSIRECORD ;
typedef TYPE_2__ MSIPACKAGE ;
typedef int * LPWSTR ;
typedef TYPE_2__* LPVOID ;
typedef int LPCWSTR ;


 int FUNC_0 (TYPE_2__*,int ,int *,int **) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_2 (int) ;
 int FUNC_3 (TYPE_2__*,int ,TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int) ;
 int FUNC_5 (TYPE_1__*,int,int ) ;
 int FUNC_6 (char*,int ,int ) ;
 int VAR_2 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (TYPE_2__*,int ) ;
 int FUNC_10 (int ,int ,int *,int) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ,int ) ;
 int VAR_3 ;

__attribute__((used)) static UINT FUNC_13(MSIRECORD *VAR_4, LPVOID VAR_5)
{
    MSIPACKAGE *VAR_6 = VAR_5;
    LPCWSTR VAR_7, VAR_8;
    LPWSTR VAR_9 = ((void*)0);
    MSISIGNATURE VAR_10;
    MSIRECORD *VAR_11;
    UINT VAR_12;


    VAR_7 = FUNC_4(VAR_4, 1);
    VAR_8 = FUNC_4(VAR_4, 2);

    FUNC_6("%s %s\n", FUNC_7(VAR_7), FUNC_7(VAR_8));

    VAR_12 = FUNC_0(VAR_6, VAR_8, &VAR_10, &VAR_9);
    if (VAR_9)
    {
        VAR_12 = FUNC_10( VAR_6->db, VAR_7, VAR_9, -1 );
        if (VAR_12 == VAR_0 && !FUNC_12( VAR_7, VAR_3 ))
            FUNC_9( VAR_6, VAR_2 );

        FUNC_8(VAR_9);
    }
    FUNC_1(&VAR_10);

    VAR_11 = FUNC_2( 2 );
    FUNC_5( VAR_11, 1, VAR_7 );
    FUNC_5( VAR_11, 2, VAR_8 );
    FUNC_3(VAR_6, VAR_1, VAR_11);
    FUNC_11( &VAR_11->hdr );

    return VAR_12;
}
