
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef char WCHAR ;
struct TYPE_13__ {int action; void* Attributes; int Feature; int Argument; void* DefInprocHandler32; void* DefInprocHandler; void* IconPath; void* FileTypeMask; int AppID; void* Description; void* ProgIDText; int ProgID; int Component; void* Context; void* clsid; int entry; } ;
struct TYPE_12__ {int classes; } ;
typedef int MSIRECORD ;
typedef TYPE_1__ MSIPACKAGE ;
typedef TYPE_2__ MSICLASS ;
typedef void* LPWSTR ;
typedef scalar_t__ LPCWSTR ;
typedef void* INT ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int *,int) ;
 scalar_t__ FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (void*) ;
 int FUNC_5 (TYPE_1__*,scalar_t__,int *) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (TYPE_1__*,scalar_t__) ;
 int FUNC_8 (TYPE_1__*,void*) ;
 void* FUNC_9 (int) ;
 TYPE_2__* FUNC_10 (int) ;
 void* FUNC_11 (TYPE_1__*,scalar_t__) ;
 void* FUNC_12 (int *,int) ;
 int FUNC_13 (void*) ;
 int FUNC_14 (TYPE_1__*,scalar_t__) ;
 int FUNC_15 (TYPE_1__*,scalar_t__) ;
 int FUNC_16 (void*) ;
 int FUNC_17 (void*,char const*,void*,void*) ;
 void* FUNC_18 (char const*) ;
 int FUNC_19 (void*) ;

__attribute__((used)) static MSICLASS *FUNC_20( MSIPACKAGE* VAR_2, MSIRECORD *VAR_3 )
{
    MSICLASS *VAR_4;
    DWORD VAR_5;
    LPCWSTR VAR_6;



    VAR_4 = FUNC_10( sizeof(MSICLASS) );
    if (!VAR_4)
        return ((void*)0);

    FUNC_6( &VAR_2->classes, &VAR_4->entry );

    VAR_4->clsid = FUNC_12( VAR_3, 1 );
    FUNC_3("loading class %s\n",FUNC_4(VAR_4->clsid));
    VAR_4->Context = FUNC_12( VAR_3, 2 );
    VAR_6 = FUNC_1(VAR_3,3);
    VAR_4->Component = FUNC_14( VAR_2, VAR_6 );

    VAR_4->ProgIDText = FUNC_12(VAR_3,4);
    VAR_4->ProgID = FUNC_8(VAR_2, VAR_4->ProgIDText);

    VAR_4->Description = FUNC_12(VAR_3,5);

    VAR_6 = FUNC_1(VAR_3,6);
    if (VAR_6)
        VAR_4->AppID = FUNC_7(VAR_2, VAR_6);

    VAR_4->FileTypeMask = FUNC_12(VAR_3,7);

    if (!FUNC_2(VAR_3,9))
    {

        INT VAR_7 = FUNC_0(VAR_3,9);
        LPCWSTR VAR_8 = FUNC_1(VAR_3,8);
        LPWSTR VAR_9;
        static const WCHAR VAR_10[] = {'%','s',',','%','i',0};

        VAR_9 = FUNC_11(VAR_2, VAR_8);

        VAR_4->IconPath = FUNC_9( (FUNC_19(VAR_9)+5)* sizeof(WCHAR) );

        FUNC_17(VAR_4->IconPath,VAR_10,VAR_9,VAR_7);

        FUNC_13(VAR_9);
    }
    else
    {
        VAR_6 = FUNC_1(VAR_3,8);
        if (VAR_6)
            VAR_4->IconPath = FUNC_11(VAR_2, VAR_6);
    }

    if (!FUNC_2(VAR_3,10))
    {
        VAR_5 = FUNC_0(VAR_3,10);
        if (VAR_5 != VAR_1 && VAR_5 > 0 && VAR_5 < 4)
        {
            static const WCHAR VAR_11[] = {'o','l','e','2','.','d','l','l',0};
            static const WCHAR VAR_12[] = {'o','l','e','3','2','.','d','l','l',0};

            switch(VAR_5)
            {
                case 1:
                    VAR_4->DefInprocHandler = FUNC_18(VAR_11);
                    break;
                case 2:
                    VAR_4->DefInprocHandler32 = FUNC_18(VAR_12);
                    break;
                case 3:
                    VAR_4->DefInprocHandler = FUNC_18(VAR_11);
                    VAR_4->DefInprocHandler32 = FUNC_18(VAR_12);
                    break;
            }
        }
        else
        {
            VAR_4->DefInprocHandler32 = FUNC_12( VAR_3, 10 );
            FUNC_16( VAR_4->DefInprocHandler32 );
        }
    }
    VAR_6 = FUNC_1(VAR_3,11);
    FUNC_5(VAR_2,VAR_6,&VAR_4->Argument);

    VAR_6 = FUNC_1(VAR_3,12);
    VAR_4->Feature = FUNC_15(VAR_2, VAR_6);

    VAR_4->Attributes = FUNC_0(VAR_3,13);
    VAR_4->action = VAR_0;
    return VAR_4;
}
