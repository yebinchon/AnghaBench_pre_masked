
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char wchar_t ;
typedef char WCHAR ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int,char*,char,...) ;
 int FUNC_2 (char*,char const*,...) ;

__attribute__((used)) static void FUNC_3( void )
{
    wchar_t VAR_1[100];
    int VAR_2, VAR_3;
    static const WCHAR VAR_4[] = {'%','d',0};
    const WCHAR VAR_5[] = {'a',0x1234,'%',0x1234,'%','c',0};
    WCHAR VAR_6;




    VAR_1[0] = 0;
    VAR_3 = FUNC_2(VAR_1, VAR_4, &VAR_2);

    FUNC_1( VAR_3 == (short)VAR_0 || FUNC_0(VAR_3 == 0),
        "swscanf returns %x instead of %x\n", VAR_3, VAR_0 );

    VAR_1[0] = 'a';
    VAR_1[1] = 0x1234;
    VAR_1[2] = 0x1234;
    VAR_1[3] = 'b';
    VAR_3 = FUNC_2(VAR_1, VAR_5, &VAR_6);
    FUNC_1(VAR_3 == 1, "swscanf returned %d\n", VAR_3);
    FUNC_1(VAR_6 == 'b', "c = %x\n", VAR_6);
}
