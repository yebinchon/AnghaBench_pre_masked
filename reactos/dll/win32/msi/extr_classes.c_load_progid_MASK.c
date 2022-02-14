
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef char WCHAR ;
struct TYPE_11__ {int progids; } ;
struct TYPE_10__ {struct TYPE_10__* VersionInd; struct TYPE_10__* CurVer; struct TYPE_10__* Parent; void* IconPath; void* Description; int * Class; void* ProgID; int entry; } ;
typedef int MSIRECORD ;
typedef TYPE_1__ MSIPROGID ;
typedef TYPE_2__ MSIPACKAGE ;
typedef void* LPWSTR ;
typedef void* LPCWSTR ;
typedef int INT ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int *,int) ;
 void* FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (void*) ;
 int FUNC_6 (int *,int *) ;
 int * FUNC_7 (TYPE_2__*,void*) ;
 TYPE_1__* FUNC_8 (TYPE_2__*,void*) ;
 void* FUNC_9 (int) ;
 TYPE_1__* FUNC_10 (int) ;
 void* FUNC_11 (TYPE_2__*,void*) ;
 void* FUNC_12 (int *,int) ;
 int FUNC_13 (void*) ;
 int FUNC_14 (void*,char const*,void*,int ) ;
 int FUNC_15 (void*) ;

__attribute__((used)) static MSIPROGID *FUNC_16( MSIPACKAGE* VAR_0, MSIRECORD *VAR_1 )
{
    MSIPROGID *VAR_2;
    LPCWSTR VAR_3;



    VAR_2 = FUNC_10( sizeof(MSIPROGID) );
    if (!VAR_2)
        return ((void*)0);

    FUNC_6( &VAR_0->progids, &VAR_2->entry );

    VAR_2->ProgID = FUNC_12(VAR_1,1);
    FUNC_4("loading progid %s\n",FUNC_5(VAR_2->ProgID));

    VAR_3 = FUNC_2(VAR_1,2);
    VAR_2->Parent = FUNC_8(VAR_0,VAR_3);
    if (VAR_2->Parent == ((void*)0) && VAR_3)
        FUNC_0("Unknown parent ProgID %s\n",FUNC_5(VAR_3));

    VAR_3 = FUNC_2(VAR_1,3);
    VAR_2->Class = FUNC_7(VAR_0,VAR_3);
    if (VAR_2->Class == ((void*)0) && VAR_3)
        FUNC_0("Unknown class %s\n",FUNC_5(VAR_3));

    VAR_2->Description = FUNC_12(VAR_1,4);

    if (!FUNC_3(VAR_1,6))
    {
        INT VAR_4 = FUNC_1(VAR_1,6);
        LPCWSTR VAR_5 = FUNC_2(VAR_1,5);
        LPWSTR VAR_6;
        static const WCHAR VAR_7[] = {'%','s',',','%','i',0};

        VAR_6 = FUNC_11(VAR_0, VAR_5);

        VAR_2->IconPath = FUNC_9( (FUNC_15(VAR_6)+10)* sizeof(WCHAR) );

        FUNC_14(VAR_2->IconPath,VAR_7,VAR_6,VAR_4);

        FUNC_13(VAR_6);
    }
    else
    {
        VAR_3 = FUNC_2(VAR_1,5);
        if (VAR_3)
            VAR_2->IconPath = FUNC_11(VAR_0, VAR_3);
    }

    VAR_2->CurVer = ((void*)0);
    VAR_2->VersionInd = ((void*)0);


    if (VAR_2->Parent && VAR_2->Parent != VAR_2)
    {
        MSIPROGID *VAR_8 = VAR_2->Parent;

        while (VAR_8->Parent && VAR_8->Parent != VAR_8)
            VAR_8 = VAR_8->Parent;



        VAR_2->CurVer = VAR_8;
        VAR_8->VersionInd = VAR_2;
    }

    return VAR_2;
}
