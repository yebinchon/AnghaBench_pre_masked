
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PACMDRVSTREAMINSTANCE ;
typedef int* LPDWORD ;
typedef int DWORD ;


 int FUNC_0 (unsigned char*,short) ;
 short FUNC_1 (int ) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static void FUNC_3(PACMDRVSTREAMINSTANCE VAR_0,
                         const unsigned char* VAR_1, LPDWORD VAR_2,
                         unsigned char* VAR_3, LPDWORD VAR_4)
{
    DWORD VAR_5 = FUNC_2(*VAR_2, *VAR_4 / 2);
    DWORD VAR_6;
    short VAR_7;

    *VAR_2 = VAR_5;
    *VAR_4 = VAR_5 * 2;
    for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++)
    {
        VAR_7 = FUNC_1(*VAR_1++);
        FUNC_0(VAR_3, VAR_7); VAR_3 += 2;
    }
}
