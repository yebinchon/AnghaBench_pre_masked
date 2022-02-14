
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int FUNC_0 () ;
 unsigned int FUNC_1 (unsigned int const) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (int,char*,unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_4(void)
{
    static const unsigned int VAR_0[][2] = {
        {0x829e, 0x829e}, {0x829f, 0xa7}, {0x82f1, 0xdd}, {0x82f2, 0x82f2},
        {0x833f, 0x833f}, {0x8340, 0xa7}, {0x837e, 0xd0}, {0x837f, 0x837f},
        {0x8380, 0xd1}, {0x8396, 0xb9}, {0x8397, 0x8397}, {0x813f, 0x813f},
        {0x8140, 0x20}, {0x814c, 0x814c}, {0x814f, 0x5e}, {0x8197, 0x40},
        {0x8198, 0x8198}, {0x8258, 0x39}, {0x8259, 0x8259}, {0x825f, 0x825f},
        {0x8260, 0x41}, {0x82f1, 0xdd}, {0x82f2, 0x82f2}, {0,0}};
    unsigned int VAR_1, VAR_2, VAR_3;
    unsigned int VAR_4 = FUNC_0();

    FUNC_2(932);
    for (VAR_3 = 0; VAR_0[VAR_3][0] != 0; VAR_3++)
    {
        VAR_2 = FUNC_1(VAR_0[VAR_3][0]);
        VAR_1 = VAR_0[VAR_3][1];
        FUNC_3(VAR_2 == VAR_1, "Expected 0x%x, got 0x%x\n", VAR_1, VAR_2);
    }
    FUNC_2(VAR_4);
}
