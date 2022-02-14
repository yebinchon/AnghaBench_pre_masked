
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef char WCHAR ;
typedef int UINT ;
struct TYPE_12__ {int FullKeypath; } ;
struct TYPE_11__ {TYPE_1__* Feature; } ;
struct TYPE_10__ {scalar_t__ Sequence; scalar_t__ Verb; scalar_t__ Command; int Argument; } ;
struct TYPE_9__ {int Feature; } ;
typedef TYPE_2__ MSIVERB ;
typedef int MSIPACKAGE ;
typedef TYPE_3__ MSIEXTENSION ;
typedef TYPE_4__ MSICOMPONENT ;
typedef int LPWSTR ;
typedef int LPCWSTR ;
typedef scalar_t__ INT ;
typedef int HKEY ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int,int ,char const*,...) ;
 int FUNC_7 (int *,TYPE_4__*,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int ,int *,scalar_t__) ;
 int FUNC_10 (int ,char const*,int ) ;
 int FUNC_11 (int ,int *,int ) ;
 int FUNC_12 (int ,char const*,int ,...) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (int ) ;
 int VAR_3 ;

__attribute__((used)) static UINT FUNC_16(MSIPACKAGE *VAR_4, LPCWSTR VAR_5,
                MSICOMPONENT* VAR_6, const MSIEXTENSION* VAR_7,
                MSIVERB* VAR_8, INT* VAR_9 )
{
    LPWSTR VAR_10;
    HKEY VAR_11;
    static const WCHAR VAR_12[] = {'s','h','e','l','l',0};
    static const WCHAR VAR_13[] = {'c','o','m','m','a','n','d',0};
    static const WCHAR VAR_14[] = {'\"','%','s','\"',' ','%','s',0};
    static const WCHAR VAR_15[] = {'\"','%','s','\"',0};
    LPWSTR VAR_16;
    DWORD VAR_17;
    LPWSTR VAR_18;

    VAR_10 = FUNC_6(4, VAR_5, VAR_12, VAR_8->Verb, VAR_13);

    FUNC_2("Making Key %s\n",FUNC_3(VAR_10));
    FUNC_1(VAR_1, VAR_10, &VAR_11);
    VAR_17 = FUNC_15(VAR_6->FullKeypath);
    if (VAR_8->Argument)
        VAR_17 += FUNC_15(VAR_8->Argument);
     VAR_17 += 4;

     VAR_16 = FUNC_4(VAR_17 * sizeof (WCHAR));
     if (VAR_8->Argument)
        FUNC_12(VAR_16, VAR_14, VAR_6->FullKeypath, VAR_8->Argument);
     else
        FUNC_12(VAR_16, VAR_15, VAR_6->FullKeypath);

     FUNC_11( VAR_11, ((void*)0), VAR_16 );
     FUNC_8(VAR_16);

     VAR_18 = FUNC_7(VAR_4, VAR_6,
                                                       VAR_7->Feature->Feature);
     VAR_17 = FUNC_15(VAR_18);

     if (VAR_8->Argument)
         VAR_17 += FUNC_15(VAR_8->Argument);
     VAR_17 += 4;

     VAR_16 = FUNC_5(VAR_17 * sizeof (WCHAR));

     FUNC_14(VAR_16,VAR_18);
     if (VAR_8->Argument)
     {
         FUNC_13(VAR_16,VAR_3);
         FUNC_13(VAR_16,VAR_8->Argument);
     }

     FUNC_10( VAR_11, VAR_13, VAR_16 );

     FUNC_0(VAR_11);
     FUNC_8(VAR_10);
     FUNC_8(VAR_18);
     FUNC_8(VAR_16);

     if (VAR_8->Command)
     {
        VAR_10 = FUNC_6( 3, VAR_5, VAR_12, VAR_8->Verb );
        FUNC_9( VAR_1, VAR_10, ((void*)0), VAR_8->Command );
        FUNC_8(VAR_10);
     }

     if (VAR_8->Sequence != VAR_2)
     {
        if (*VAR_9 == VAR_2 || VAR_8->Sequence < *VAR_9)
        {
            *VAR_9 = VAR_8->Sequence;
            VAR_10 = FUNC_6( 2, VAR_5, VAR_12 );
            FUNC_9( VAR_1, VAR_10, ((void*)0), VAR_8->Verb );
            FUNC_8(VAR_10);
        }
    }
    return VAR_0;
}
