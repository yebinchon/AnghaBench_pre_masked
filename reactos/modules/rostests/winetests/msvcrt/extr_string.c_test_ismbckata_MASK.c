
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef int BOOL ;


 unsigned int FUNC_0 (struct katakana_pair const*) ;


 unsigned int VAR_0 ;
 unsigned int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (int,char*,int,int,...) ;

__attribute__((used)) static void FUNC_5(void) {
    struct katakana_pair {
        UINT c;
        BOOL exp;
    };
    static const struct katakana_pair VAR_1[] = {
        {0x8152, 129}, {0x8153, 129}, {0x8154, 129}, {0x8155, 129},
        {0x82a0, 129}, {0x833f, 129}, {0x8340, 128 }, {0x837e, 128 },
        {0x837f, 129}, {0x8380, 128 }, {0x8396, 128 }, {0x8397, 129},
        {0xa5, 129}, {0xb0, 129}, {0xdd, 129}
    };
    unsigned int VAR_2 = FUNC_1();
    int VAR_3;
    unsigned int VAR_4;

    FUNC_3(VAR_0);
    for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_1); VAR_4++) {
        VAR_3 = FUNC_2(VAR_1[VAR_4].c);
        FUNC_4(!VAR_3, "expected 0, got %d for %04x\n", VAR_3, VAR_1[VAR_4].c);
    }

    FUNC_3(932);
    for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_1); VAR_4++) {
        VAR_3 = FUNC_2(VAR_1[VAR_4].c);
        FUNC_4(!!VAR_3 == VAR_1[VAR_4].exp, "expected %d, got %d for %04x\n",
           VAR_1[VAR_4].exp, !!VAR_3, VAR_1[VAR_4].c);
    }

    FUNC_3(VAR_2);
}
