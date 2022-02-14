
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int member_0; int member_1; } ;
typedef int buf ;
typedef char WCHAR ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (unsigned char*,struct timespec const*) ;
 char* FUNC_2 (int) ;
 char* FUNC_3 (int ) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (int,unsigned char*,int) ;
 int FUNC_6 (char*,char const*,unsigned char,unsigned char,unsigned char,unsigned char,unsigned char,unsigned char,unsigned char,unsigned char,unsigned char,unsigned char,unsigned char,unsigned char,unsigned char,unsigned char,unsigned char,unsigned char) ;
 char FUNC_7 (unsigned char) ;

__attribute__((used)) static WCHAR *FUNC_8(void)
{
    int VAR_2;
    if ((VAR_2 = FUNC_4( "/var/lib/dbus/machine-id", VAR_0 )) != -1)
    {
        unsigned char VAR_3[32];
        if (FUNC_5( VAR_2, VAR_3, sizeof(VAR_3) ) == sizeof(VAR_3))
        {
            unsigned int VAR_4, VAR_5;
            WCHAR *VAR_6, *VAR_7;

            FUNC_0( VAR_2 );
            if (!(VAR_7 = VAR_6 = FUNC_2( 37 * sizeof(WCHAR) ))) return ((void*)0);
            for (VAR_4 = 0, VAR_5 = 0; VAR_4 < 8; VAR_4++) VAR_7[VAR_4] = FUNC_7( VAR_3[VAR_5++] );
            VAR_7[8] = '-';
            for (VAR_4 = 9; VAR_4 < 13; VAR_4++) VAR_7[VAR_4] = FUNC_7( VAR_3[VAR_5++] );
            VAR_7[13] = '-';
            for (VAR_4 = 14; VAR_4 < 18; VAR_4++) VAR_7[VAR_4] = FUNC_7( VAR_3[VAR_5++] );
            VAR_7[18] = '-';
            for (VAR_4 = 19; VAR_4 < 23; VAR_4++) VAR_7[VAR_4] = FUNC_7( VAR_3[VAR_5++] );
            VAR_7[23] = '-';
            for (VAR_4 = 24; VAR_4 < 36; VAR_4++) VAR_7[VAR_4] = FUNC_7( VAR_3[VAR_5++] );
            VAR_6[VAR_4] = 0;
            return VAR_6;
        }
        FUNC_0( VAR_2 );
    }

    return FUNC_3( VAR_1 );
}
