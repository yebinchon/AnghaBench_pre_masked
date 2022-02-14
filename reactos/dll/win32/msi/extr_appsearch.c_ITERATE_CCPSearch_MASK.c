
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef char WCHAR ;
typedef int UINT ;
struct TYPE_5__ {int db; } ;
typedef int MSISIGNATURE ;
typedef int MSIRECORD ;
typedef TYPE_1__ MSIPACKAGE ;
typedef int * LPWSTR ;
typedef TYPE_1__* LPVOID ;
typedef int LPCWSTR ;


 int FUNC_0 (TYPE_1__*,int ,int *,int **) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,char const*,int ,int) ;
 int VAR_2 ;

__attribute__((used)) static UINT FUNC_7(MSIRECORD *VAR_3, LPVOID VAR_4)
{
    MSIPACKAGE *VAR_5 = VAR_4;
    LPCWSTR VAR_6;
    LPWSTR VAR_7 = ((void*)0);
    MSISIGNATURE VAR_8;
    UINT VAR_9 = VAR_1;

    static const WCHAR VAR_10[] = {'C','C','P','_','S','u','c','c','e','s','s',0};

    VAR_6 = FUNC_2(VAR_3, 1);

    FUNC_3("%s\n", FUNC_4(VAR_6));

    FUNC_0(VAR_5, VAR_6, &VAR_8, &VAR_7);
    if (VAR_7)
    {
        FUNC_3("Found signature %s\n", FUNC_4(VAR_6));
        FUNC_6( VAR_5->db, VAR_10, VAR_2, -1 );
        FUNC_5(VAR_7);
        VAR_9 = VAR_0;
    }

    FUNC_1(&VAR_8);

    return VAR_9;
}
