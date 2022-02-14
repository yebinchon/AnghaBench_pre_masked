
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {int len; scalar_t__ data; scalar_t__ tail; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,...) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_1(struct sk_buff *VAR_4, u32 VAR_5, char *VAR_6, int VAR_7, int VAR_8, int VAR_9)
{
    int VAR_10;

    if ( !(VAR_2 & (VAR_9 ? VAR_1 : VAR_0)) )
        return;

    if ( VAR_4->len < VAR_5 )
        VAR_5 = VAR_4->len;

    if ( VAR_5 > VAR_3 ) {
        FUNC_0("too big data length: skb = %08x, skb->data = %08x, skb->len = %d\n", (u32)VAR_4, (u32)VAR_4->data, VAR_4->len);
        return;
    }

    if ( VAR_8 >= 0 )
        FUNC_0("%s (port %d, ch %d)\n", VAR_6, VAR_7, VAR_8);
    else
        FUNC_0("%s\n", VAR_6);
    FUNC_0("  skb->data = %08X, skb->tail = %08X, skb->len = %d\n", (u32)VAR_4->data, (u32)VAR_4->tail, (int)VAR_4->len);
    for ( VAR_10 = 1; VAR_10 <= VAR_5; VAR_10++ ) {
        if ( VAR_10 % 16 == 1 )
            FUNC_0("  %4d:", VAR_10 - 1);
        FUNC_0(" %02X", (int)(*((char*)VAR_4->data + VAR_10 - 1) & 0xFF));
        if ( VAR_10 % 16 == 0 )
            FUNC_0("\n");
    }
    if ( (VAR_10 - 1) % 16 != 0 )
        FUNC_0("\n");
}
