
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PACMDRVSTREAMINSTANCE ;
typedef scalar_t__* LPDWORD ;
typedef scalar_t__ DWORD ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_2(PACMDRVSTREAMINSTANCE VAR_0,
                           const unsigned char* VAR_1, LPDWORD VAR_2,
                           unsigned char* VAR_3, LPDWORD VAR_4)
{
    DWORD VAR_5 = FUNC_1(*VAR_2, *VAR_4);
    DWORD VAR_6;

    *VAR_2 = VAR_5;
    *VAR_4 = VAR_5;

    for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++)
        *VAR_3++ = FUNC_0(*VAR_1++);
}
