
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 (unsigned char*,unsigned char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,char*,int) ;

__attribute__((used)) static void FUNC_4( void)
{
    unsigned char VAR_0[]="cabernet";
    unsigned char VAR_1[]="shiraz";
    unsigned char VAR_2[]="abc";
    unsigned char VAR_3[]="";
    unsigned char VAR_4[]=" 2019\x94\x4e" "6\x8c\x8e" "29\x93\xfa";
    unsigned char VAR_5[]="0123456789 \x94\x4e";
    unsigned char VAR_6[]=" \x94\x4e\x8c\x8e";
    unsigned char VAR_7[]="\x8e";
    int VAR_8, VAR_9 = FUNC_0();

    VAR_8=FUNC_1( VAR_0, VAR_2);
    FUNC_3( VAR_8==3, "_mbsspn returns %d should be 3\n", VAR_8);
    VAR_8=FUNC_1( VAR_1, VAR_2);
    FUNC_3( VAR_8==0, "_mbsspn returns %d should be 0\n", VAR_8);
    VAR_8=FUNC_1( VAR_0, VAR_3);
    FUNC_3( VAR_8==0, "_mbsspn returns %d should be 0\n", VAR_8);

    FUNC_2( 932);
    VAR_8=FUNC_1( VAR_4, VAR_5);
    FUNC_3( VAR_8==8, "_mbsspn returns %d should be 8\n", VAR_8);
    VAR_8=FUNC_1( VAR_4, VAR_6);
    FUNC_3( VAR_8==1, "_mbsspn returns %d should be 1\n", VAR_8);
    VAR_8=FUNC_1( VAR_4+8, VAR_5);
    FUNC_3( VAR_8==0, "_mbsspn returns %d should be 0\n", VAR_8);
    VAR_8=FUNC_1( VAR_4+8, VAR_6);
    FUNC_3( VAR_8==2, "_mbsspn returns %d should be 2\n", VAR_8);
    VAR_8=FUNC_1( VAR_4, VAR_7);
    FUNC_3( VAR_8==14, "_mbsspn returns %d should be 14\n", VAR_8);

    FUNC_2( VAR_9);
}
