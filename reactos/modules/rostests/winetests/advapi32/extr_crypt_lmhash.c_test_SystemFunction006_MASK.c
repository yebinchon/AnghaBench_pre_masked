
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int expect ;


 int FUNC_0 (char*,unsigned char*,int) ;
 int FUNC_1 (int,char*,char,char,char,char,char,char,char,char,char,char,char,char,char,char,char,char) ;
 int FUNC_2 (char*,char*) ;

__attribute__((used)) static void FUNC_3(void)
{
    char VAR_0[16 + 1];

    char VAR_1[] = { 's','e','c','r','e','t', 0, 0, 0, 0, 0, 0, 0, 0 };
    unsigned char VAR_2[] =
        { 0x85, 0xf5, 0x28, 0x9f, 0x09, 0xdc, 0xa7, 0xeb,
          0xaa, 0xd3, 0xb4, 0x35, 0xb5, 0x14, 0x04, 0xee };

    FUNC_2( VAR_1, VAR_0 );

    FUNC_1( !FUNC_0( VAR_0, VAR_2, sizeof(VAR_2) ),
        "lmhash: %02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x\n",
        VAR_0[0], VAR_0[1], VAR_0[2], VAR_0[3], VAR_0[4], VAR_0[5],
        VAR_0[6], VAR_0[7], VAR_0[8], VAR_0[9], VAR_0[10], VAR_0[11],
        VAR_0[12], VAR_0[13], VAR_0[14], VAR_0[15] );
}
