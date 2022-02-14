
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef scalar_t__* LPWSTR ;
typedef scalar_t__ HMMIO ;
typedef int DWORD ;


 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 int FUNC_2 (char*,char*,int ,scalar_t__*) ;
 int FUNC_3 (int ,char*) ;
 int VAR_0 ;
 scalar_t__* FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int ,int ,scalar_t__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (scalar_t__*) ;
 scalar_t__ FUNC_9 (scalar_t__*,int *,int) ;

__attribute__((used)) static DWORD FUNC_10(HMMIO* VAR_7, LPWSTR* VAR_8)
{
    WCHAR VAR_9[VAR_1];
    WCHAR VAR_10[4];
    DWORD VAR_11 = VAR_6;

    VAR_10[0] = 'M';
    VAR_10[1] = 'C';
    VAR_10[2] = 'I';
    VAR_10[3] = '\0';

    if (!FUNC_3(FUNC_0(VAR_9), VAR_9)) {
        FUNC_7("can't retrieve temp path!\n");
        *VAR_8 = ((void*)0);
        return VAR_2;
    }

    *VAR_8 = FUNC_4(FUNC_1(),
                                VAR_0,
                                VAR_1 * sizeof(WCHAR));
    if (!FUNC_2(VAR_9, VAR_10, 0, *VAR_8)) {
        FUNC_7("can't retrieve temp file name!\n");
        FUNC_5(FUNC_1(), 0, *VAR_8);
        return VAR_2;
    }

    FUNC_6("%s!\n", FUNC_8(*VAR_8));

    if (*VAR_8 && (*VAR_8)[0]) {

        *VAR_7 = FUNC_9(*VAR_8, ((void*)0),
                           VAR_3 | VAR_5 | VAR_4);

        if (*VAR_7 == 0) {
            FUNC_7("can't create file=%s!\n", FUNC_8(*VAR_8));

            FUNC_5(FUNC_1(), 0, *VAR_8);
            VAR_11 = VAR_2;
        }
    }
    return VAR_11;
}
