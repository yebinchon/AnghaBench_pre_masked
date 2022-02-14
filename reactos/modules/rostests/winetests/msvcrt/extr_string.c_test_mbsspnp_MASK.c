
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 unsigned char* FUNC_1 (unsigned char*,unsigned char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,char*,...) ;

__attribute__((used)) static void FUNC_4( void)
{
    unsigned char VAR_0[]="cabernet";
    unsigned char VAR_1[]="shiraz";
    unsigned char VAR_2[]="abc";
    unsigned char VAR_3[]="";
    unsigned char VAR_4[]="abcenrt";
    unsigned char VAR_5[]=" 2019\x94\x4e" "6\x8c\x8e" "29\x93\xfa";
    unsigned char VAR_6[]="0123456789 \x94\x4e";
    unsigned char VAR_7[]=" \x94\x4e\x8c\x8e";
    unsigned char* VAR_8;
    int VAR_9 = FUNC_0();

    VAR_8=FUNC_1( VAR_0, VAR_2);
    FUNC_3( VAR_8[0]=='e', "_mbsspnp returns %c should be e\n", VAR_8[0]);
    VAR_8=FUNC_1( VAR_1, VAR_2);
    FUNC_3( VAR_8[0]=='s', "_mbsspnp returns %c should be s\n", VAR_8[0]);
    VAR_8=FUNC_1( VAR_0, VAR_3);
    FUNC_3( VAR_8[0]=='c', "_mbsspnp returns %c should be c\n", VAR_8[0]);
    VAR_8=FUNC_1( VAR_0, VAR_4);
    FUNC_3( VAR_8==((void*)0), "_mbsspnp returns %p should be NULL\n", VAR_8);

    FUNC_2( 932);
    VAR_8=FUNC_1( VAR_5, VAR_6);
    FUNC_3( VAR_8==VAR_5+8, "_mbsspnp returns %p should be %p\n", VAR_8, VAR_5+8);
    VAR_8=FUNC_1( VAR_5, VAR_7);
    FUNC_3( VAR_8==VAR_5+1, "_mbsspnp returns %p should be %p\n", VAR_8, VAR_5+1);
    VAR_8=FUNC_1( VAR_5+8, VAR_6);
    FUNC_3( VAR_8==VAR_5+8, "_mbsspnp returns %p should be %p\n", VAR_8, VAR_5+8);
    VAR_8=FUNC_1( VAR_5+8, VAR_7);
    FUNC_3( VAR_8==VAR_5+10, "_mbsspnp returns %p should be %p\n", VAR_8, VAR_5+10);

    FUNC_2( VAR_9);
}
