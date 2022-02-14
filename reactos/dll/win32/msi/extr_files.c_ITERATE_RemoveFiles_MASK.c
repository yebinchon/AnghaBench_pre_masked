
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


typedef int WCHAR ;
typedef int UINT ;
struct TYPE_22__ {int Attributes; TYPE_1__* assembly; int Action; } ;
struct TYPE_21__ {int db; } ;
struct TYPE_20__ {int hdr; } ;
struct TYPE_19__ {int application; } ;
typedef TYPE_2__ MSIRECORD ;
typedef TYPE_3__ MSIPACKAGE ;
typedef TYPE_4__ MSICOMPONENT ;
typedef int * LPWSTR ;
typedef TYPE_3__* LPVOID ;
typedef int * LPCWSTR ;
typedef int DWORD ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_1 (int) ;
 int FUNC_2 (TYPE_3__*,int ,TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,int) ;
 int * FUNC_4 (TYPE_2__*,int) ;
 int FUNC_5 (TYPE_2__*,int,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (char*,...) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int *) ;
 int FUNC_12 (int *,int *) ;
 int FUNC_13 (int *) ;
 int * FUNC_14 (int) ;
 int * FUNC_15 (int ,int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (TYPE_3__*,TYPE_4__*) ;
 TYPE_4__* FUNC_18 (TYPE_3__*,int *) ;
 int FUNC_19 (int *) ;
 int VAR_3 ;
 int FUNC_20 (int *) ;
 int * FUNC_21 (int *) ;
 int FUNC_22 (TYPE_4__*,int ) ;

__attribute__((used)) static UINT FUNC_23(MSIRECORD *VAR_4, LPVOID VAR_5)
{
    MSIPACKAGE *VAR_6 = VAR_5;
    MSICOMPONENT *VAR_7;
    MSIRECORD *VAR_8;
    LPCWSTR VAR_9, VAR_10;
    UINT VAR_11;
    LPWSTR VAR_12 = ((void*)0), VAR_13 = ((void*)0), VAR_14 = ((void*)0);
    DWORD VAR_15;
    UINT VAR_16 = VAR_1;

    VAR_9 = FUNC_4(VAR_4, 2);
    VAR_10 = FUNC_4(VAR_4, 4);
    VAR_11 = FUNC_3(VAR_4, 5);

    VAR_7 = FUNC_18(VAR_6, VAR_9);
    if (!VAR_7)
        return VAR_1;

    VAR_7->Action = FUNC_17( VAR_6, VAR_7 );
    if (!FUNC_22(VAR_7, VAR_11))
    {
        FUNC_8("Skipping removal due to install mode\n");
        return VAR_1;
    }
    if (VAR_7->assembly && !VAR_7->assembly->application)
    {
        return VAR_1;
    }
    if (VAR_7->Attributes & VAR_3)
    {
        FUNC_8("permanent component, not removing file\n");
        return VAR_1;
    }

    VAR_12 = FUNC_15(VAR_6->db, VAR_10);
    if (!VAR_12)
    {
        FUNC_9("directory property has no value\n");
        return VAR_1;
    }
    VAR_15 = 0;
    if ((VAR_14 = FUNC_21( FUNC_4(VAR_4, 3) )))
    {
        FUNC_19( VAR_14 );
        VAR_15 = FUNC_13( VAR_14 );
    }
    VAR_15 += FUNC_13(VAR_12) + 2;
    VAR_13 = FUNC_14(VAR_15 * sizeof(WCHAR));
    if (!VAR_13)
    {
        VAR_16 = VAR_0;
        goto done;
    }

    if (VAR_14)
    {
        FUNC_12(VAR_13, VAR_12);
        FUNC_6(VAR_13);
        FUNC_11(VAR_13, VAR_14);

        FUNC_8("Deleting misc file: %s\n", FUNC_10(VAR_13));
        FUNC_0(VAR_13);
    }
    else
    {
        FUNC_8("Removing misc directory: %s\n", FUNC_10(VAR_12));
        FUNC_7(VAR_12);
    }

done:
    VAR_8 = FUNC_1( 9 );
    FUNC_5( VAR_8, 1, FUNC_4(VAR_4, 1) );
    FUNC_5( VAR_8, 9, VAR_12 );
    FUNC_2(VAR_6, VAR_2, VAR_8);
    FUNC_20( &VAR_8->hdr );

    FUNC_16(VAR_14);
    FUNC_16(VAR_13);
    FUNC_16(VAR_12);
    return VAR_16;
}
