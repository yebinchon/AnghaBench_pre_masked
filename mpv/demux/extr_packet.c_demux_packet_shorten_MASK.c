
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct demux_packet {size_t len; scalar_t__ buffer; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__,int ,int ) ;

void FUNC_2(struct demux_packet *VAR_1, size_t VAR_2)
{
    FUNC_0(VAR_2 <= VAR_1->len);
    if (VAR_1->len) {
        VAR_1->len = VAR_2;
        FUNC_1(VAR_1->buffer + VAR_1->len, 0, VAR_0);
    }
}
