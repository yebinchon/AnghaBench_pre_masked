
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int WCHAR ;
typedef scalar_t__ UINT ;
struct TYPE_4__ {int db; } ;
typedef TYPE_1__ MSIPACKAGE ;
typedef scalar_t__* LPWSTR ;
typedef scalar_t__* LPCWSTR ;
typedef int DWORD ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__*) ;
 scalar_t__* FUNC_2 (int) ;
 scalar_t__* FUNC_3 (int ,scalar_t__*) ;
 int FUNC_4 (scalar_t__*) ;
 int FUNC_5 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_6 (int ,scalar_t__*,scalar_t__*,int) ;
 int FUNC_7 (scalar_t__*,scalar_t__*) ;
 int FUNC_8 (scalar_t__*,int ) ;
 int FUNC_9 (scalar_t__*,scalar_t__*) ;
 int FUNC_10 (scalar_t__*) ;
 scalar_t__* VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_11(MSIPACKAGE* VAR_4, LPCWSTR VAR_5,
                               LPCWSTR VAR_6)
{
    LPWSTR VAR_7;
    LPWSTR VAR_8;
    DWORD VAR_9;
    UINT VAR_10;

    VAR_7 = FUNC_3(VAR_4->db, VAR_5 );
    if (VAR_7)
        VAR_9 = FUNC_10(VAR_7);
    else
        VAR_9 = 0;


    VAR_9 ++;

    VAR_9 += FUNC_10(VAR_6);


    VAR_9++;

    VAR_8 = FUNC_2( VAR_9*sizeof(WCHAR) );

    if (VAR_7)
    {
        FUNC_9(VAR_8,VAR_7);
        FUNC_7(VAR_8,VAR_2);
    }
    else
        VAR_8[0] = 0;
    FUNC_7(VAR_8,VAR_6);

    VAR_10 = FUNC_6( VAR_4->db, VAR_5, VAR_8, -1 );
    if (VAR_10 == VAR_0 && !FUNC_8( VAR_5, VAR_3 ))
        FUNC_5( VAR_4, VAR_1 );

    FUNC_0("Found Related Product... %s now %s\n",
          FUNC_1(VAR_5), FUNC_1(VAR_8));

    FUNC_4( VAR_7 );
    FUNC_4( VAR_8 );
}
