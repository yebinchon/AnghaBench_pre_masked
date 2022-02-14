
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef char WCHAR ;
typedef int UINT ;
struct TYPE_14__ {int db; } ;
struct TYPE_13__ {int hdr; } ;
struct TYPE_12__ {int Name; } ;
typedef TYPE_1__ MSISIGNATURE ;
typedef TYPE_2__ MSIRECORD ;
typedef TYPE_3__ MSIPACKAGE ;
typedef int * LPWSTR ;


 int FUNC_0 (TYPE_3__*,TYPE_1__*,char*,int ,int **) ;
 int VAR_0 ;
 int FUNC_1 (int *,int *,int *,char*,int,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_2 (int ,char const*,int ) ;
 int FUNC_3 (TYPE_2__*,int) ;
 int FUNC_4 (char*,int ) ;
 int * FUNC_5 (char*,TYPE_1__*) ;
 int FUNC_6 (int ) ;
 int * FUNC_7 (char*,int) ;
 int * FUNC_8 (TYPE_2__*,int) ;
 int FUNC_9 (int *) ;



 int FUNC_10 (int *) ;

__attribute__((used)) static UINT FUNC_11(MSIPACKAGE *VAR_3, LPWSTR *VAR_4,
 MSISIGNATURE *VAR_5)
{
    static const WCHAR VAR_6[] = {
        's','e','l','e','c','t',' ','*',' ',
        'f','r','o','m',' ',
        'I','n','i','L','o','c','a','t','o','r',' ',
        'w','h','e','r','e',' ',
        'S','i','g','n','a','t','u','r','e','_',' ','=',' ','\'','%','s','\'',0};
    MSIRECORD *VAR_7;
    LPWSTR VAR_8, VAR_9, VAR_10;
    int VAR_11, VAR_12;
    WCHAR VAR_13[VAR_1];

    FUNC_4("%s\n", FUNC_6(VAR_5->Name));

    *VAR_4 = ((void*)0);

    VAR_7 = FUNC_2( VAR_3->db, VAR_6, VAR_5->Name );
    if (!VAR_7)
    {
        FUNC_4("failed to query IniLocator for %s\n", FUNC_6(VAR_5->Name));
        return VAR_0;
    }

    VAR_8 = FUNC_8(VAR_7, 2);
    VAR_9 = FUNC_8(VAR_7, 3);
    VAR_10 = FUNC_8(VAR_7, 4);
    VAR_11 = FUNC_3(VAR_7, 5);
    VAR_12 = FUNC_3(VAR_7, 6);
    if (VAR_11 == VAR_2)
        VAR_11 = 0;
    if (VAR_12 == VAR_2)
        VAR_12 = 0;

    FUNC_1(VAR_9, VAR_10, ((void*)0), VAR_13, VAR_1, VAR_8);
    if (VAR_13[0])
    {
        switch (VAR_12 & 0x0f)
        {
        case 130:
            FUNC_0(VAR_3, VAR_5, VAR_13, 0, VAR_4);
            break;
        case 129:
            *VAR_4 = FUNC_5(VAR_13, VAR_5);
            break;
        case 128:
            *VAR_4 = FUNC_7(VAR_13, VAR_11);
            break;
        }
    }

    FUNC_9(VAR_8);
    FUNC_9(VAR_9);
    FUNC_9(VAR_10);

    FUNC_10(&VAR_7->hdr);

    return VAR_0;
}
