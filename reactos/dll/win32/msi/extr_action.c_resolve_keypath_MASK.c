
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef char WCHAR ;
typedef int UINT ;
struct TYPE_17__ {int Attributes; int KeyPath; int Directory; } ;
struct TYPE_16__ {int TargetPath; } ;
struct TYPE_15__ {int db; } ;
struct TYPE_14__ {int hdr; } ;
typedef TYPE_1__ MSIRECORD ;
typedef TYPE_2__ MSIPACKAGE ;
typedef TYPE_3__ MSIFILE ;
typedef TYPE_4__ MSICOMPONENT ;
typedef int * LPWSTR ;
typedef int LPCWSTR ;


 int FUNC_0 (char*) ;
 TYPE_1__* FUNC_1 (int ,char const*,int ) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (TYPE_2__*,int ,int **) ;
 int * FUNC_5 (int) ;
 int FUNC_6 (int *) ;
 TYPE_3__* FUNC_7 (TYPE_2__*,int ) ;
 int FUNC_8 (TYPE_2__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,char const*,int,int *,...) ;
 int * FUNC_11 (int ) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static LPWSTR FUNC_13( MSIPACKAGE* VAR_2, MSICOMPONENT *VAR_3 )
{

    if (!VAR_3->KeyPath)
        return FUNC_11( FUNC_8( VAR_2, VAR_3->Directory ) );

    if (VAR_3->Attributes & VAR_1)
    {
        static const WCHAR VAR_4[] = {
            'S','E','L','E','C','T',' ','*',' ','F','R','O','M',' ',
            '`','R','e','g','i','s','t','r','y','`',' ','W','H','E','R','E',' ',
            '`','R','e','g','i','s','t','r','y','`',' ','=',' ' ,'\'','%','s','\'',0};
        static const WCHAR VAR_5[] = {'%','0','2','i',':','\\','%','s','\\',0};
        static const WCHAR VAR_6[]= {'%','0','2','i',':','\\','%','s','\\','%','s',0};
        MSIRECORD *VAR_7;
        UINT VAR_8, VAR_9;
        LPWSTR VAR_10, VAR_11, VAR_12;
        LPCWSTR VAR_13, VAR_14;

        VAR_7 = FUNC_1(VAR_2->db, VAR_4, VAR_3->KeyPath);
        if (!VAR_7)
            return ((void*)0);

        VAR_8 = FUNC_2(VAR_7,2);
        VAR_13 = FUNC_3(VAR_7, 3);
        VAR_14 = FUNC_3(VAR_7, 4);
        FUNC_4(VAR_2, VAR_13 , &VAR_10);
        FUNC_4(VAR_2, VAR_14, &VAR_12);

        VAR_9 = FUNC_12(VAR_10) + 6;
        if (VAR_12)
            VAR_9+=FUNC_12(VAR_12);

        VAR_11 = FUNC_5( VAR_9 *sizeof(WCHAR));

        if (VAR_12)
            FUNC_10(VAR_11,VAR_6,VAR_8,VAR_10,VAR_12);
        else
            FUNC_10(VAR_11,VAR_5,VAR_8,VAR_10);

        FUNC_6(VAR_10);
        FUNC_6(VAR_12);
        FUNC_9(&VAR_7->hdr);

        return VAR_11;
    }
    else if (VAR_3->Attributes & VAR_0)
    {
        FUNC_0("UNIMPLEMENTED keypath as ODBC Source\n");
        return ((void*)0);
    }
    else
    {
        MSIFILE *VAR_15 = FUNC_7( VAR_2, VAR_3->KeyPath );

        if (VAR_15)
            return FUNC_11( VAR_15->TargetPath );
    }
    return ((void*)0);
}
