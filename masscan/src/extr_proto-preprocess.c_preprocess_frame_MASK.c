
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct PreprocessedInfo {unsigned int transport_offset; unsigned int found_offset; unsigned char const* mac_dst; unsigned char const* mac_src; unsigned int ip_offset; unsigned char ip_version; unsigned char const* ip_src; unsigned char const* ip_dst; unsigned char ip_ttl; unsigned char ip_protocol; unsigned int ip_length; int port_src; int port_dst; unsigned int app_offset; unsigned int app_length; unsigned int transport_length; unsigned char const* mac_bss; int found; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (unsigned char const*) ;
 unsigned int FUNC_3 (unsigned char const*) ;
 int FUNC_4 (unsigned char const*) ;
 int FUNC_5 (unsigned char const*) ;
 int FUNC_6 (unsigned char*,unsigned char const*,int) ;

unsigned
FUNC_7(const unsigned char *VAR_20, unsigned VAR_21, unsigned VAR_22,
                 struct PreprocessedInfo *VAR_23)
{
    unsigned VAR_24 = 0;
    unsigned VAR_25 = 0;

    VAR_23->transport_offset = 0;
    VAR_23->found = VAR_10;
    VAR_23->found_offset = 0;


    if (VAR_22 != 1)
        goto parse_linktype;

parse_ethernet:
    FUNC_0(14, VAR_3);

    VAR_23->mac_dst = VAR_20+VAR_24+0;
    VAR_23->mac_src = VAR_20+VAR_24+6;
    VAR_25 = FUNC_2(VAR_20+VAR_24+12);
    VAR_24 += 14;
    if (VAR_25 < 2000)
        goto parse_llc;
    if (VAR_25 != 0x0800)
        goto parse_ethertype;

parse_ipv4:
    {
        unsigned VAR_26;
        unsigned VAR_27;
        unsigned VAR_28;
        unsigned VAR_29;

        VAR_23->ip_offset = VAR_24;
        FUNC_0(20, VAR_5);


        if ((VAR_20[VAR_24]>>4) != 4)
            return 0;


        VAR_26 = (VAR_20[VAR_24] & 0x0F) * 4;
        FUNC_0(VAR_26, VAR_5);




        VAR_27 = VAR_20[VAR_24+6]&0xE0;
        VAR_28 = (FUNC_2(VAR_20+VAR_24+6) & 0x3FFF) << 3;
        if (VAR_28 != 0 || (VAR_27 & 0x20))
            return 0;


        VAR_29 = FUNC_2(VAR_20+VAR_24+2);
        FUNC_0(VAR_29, VAR_5);
        if (VAR_29 < VAR_26)
            return 0;
        VAR_21 = VAR_24 + VAR_29;



        VAR_23->ip_version = (VAR_20[VAR_24]>>4)&0xF;
        VAR_23->ip_src = VAR_20+VAR_24+12;
        VAR_23->ip_dst = VAR_20+VAR_24+16;
        VAR_23->ip_ttl = VAR_20[VAR_24+8];
        VAR_23->ip_protocol = VAR_20[VAR_24+9];
        VAR_23->ip_length = VAR_29;
        if (VAR_23->ip_version != 4)
            return 0;


        VAR_24 += VAR_26;
        VAR_23->transport_offset = VAR_24;
        switch (VAR_23->ip_protocol) {
        case 1: goto parse_icmp;
        case 6: goto parse_tcp;
        case 17: goto parse_udp;
        case 132: goto parse_sctp;
        default:
                FUNC_0(0, VAR_11);
                return 0;
        }
    }

parse_tcp:
    {
        unsigned VAR_30;
        FUNC_0(20, VAR_16);
        VAR_30 = VAR_20[VAR_24 + 12]>>2;
        FUNC_0(VAR_30, VAR_16);
        VAR_23->port_src = FUNC_2(VAR_20+VAR_24+0);
        VAR_23->port_dst = FUNC_2(VAR_20+VAR_24+2);
        VAR_23->app_offset = VAR_24 + VAR_30;
        VAR_23->app_length = VAR_21 - VAR_23->app_offset;
        VAR_23->transport_length = VAR_21 - VAR_23->transport_offset;
        FUNC_1(VAR_23->app_length < 2000);

        return 1;
    }

parse_udp:
    {
        FUNC_0(8, VAR_17);

        VAR_23->port_src = FUNC_2(VAR_20+VAR_24+0);
        VAR_23->port_dst = FUNC_2(VAR_20+VAR_24+2);
        VAR_24 += 8;
        VAR_23->app_offset = VAR_24;
        VAR_23->app_length = VAR_21 - VAR_23->app_offset;
        FUNC_1(VAR_23->app_length < 2000);

        if (VAR_23->port_dst == 53 || VAR_23->port_src == 53) {
            goto parse_dns;
        }
        return 1;
    }

parse_icmp:
    {
        FUNC_0(4, VAR_4);
        VAR_23->port_src = VAR_20[VAR_24+0];
        VAR_23->port_dst = VAR_20[VAR_24+1];
        return 1;
    }

parse_sctp:
    {
        FUNC_0(12, VAR_14);
        VAR_23->port_src = FUNC_2(VAR_20+VAR_24+0);
        VAR_23->port_dst = FUNC_2(VAR_20+VAR_24+2);
        VAR_23->app_offset = VAR_24 + 12;
        VAR_23->app_length = VAR_21 - VAR_23->app_offset;
        FUNC_1(VAR_23->app_length < 2000);
        return 1;
    }

parse_dns:
    {
        FUNC_0(8, VAR_2);
        return 1;
    }

parse_ipv6:
    {
        unsigned VAR_31;

        FUNC_0(40, VAR_6);


        if ((VAR_20[VAR_24]>>4) != 6)
            return 0;


        VAR_31 = FUNC_2(VAR_20+VAR_24+4);
        FUNC_0(40+VAR_31, VAR_6);
        if (VAR_21 > VAR_24 + 40 + VAR_31)
            VAR_21 = VAR_24 + 40 + VAR_31;


        VAR_23->ip_version = (VAR_20[VAR_24]>>4)&0xF;
        VAR_23->ip_src = VAR_20+VAR_24+8;
        VAR_23->ip_dst = VAR_20+VAR_24+8+16;
        VAR_23->ip_protocol = VAR_20[VAR_24+6];


        VAR_24 += 40;

parse_ipv6_next:
        switch (VAR_23->ip_protocol) {
        case 0: goto parse_ipv6_hop_by_hop;
        case 6: goto parse_tcp;
        case 17: goto parse_udp;
        case 58: goto parse_icmpv6;
        case 0x2c:
            return 0;
        default:

            return 0;
        }
    }

parse_ipv6_hop_by_hop:
    {
        unsigned VAR_32;

        FUNC_0(8, VAR_7);
        VAR_23->ip_protocol = VAR_20[VAR_24];
        VAR_32 = VAR_20[VAR_24+1] + 8;

        FUNC_0(VAR_32, VAR_7);
        VAR_24 += VAR_32;
    }
    goto parse_ipv6_next;

parse_icmpv6:
    return 1;

parse_vlan8021q:
    FUNC_0(4, VAR_0);
    VAR_25 = FUNC_2(VAR_20+VAR_24+2);
    VAR_24 += 4;
    goto parse_ethertype;

parse_vlanmpls:





    while (VAR_24 + 4 < VAR_21 && !(VAR_20[VAR_24+2] & 1))
        VAR_24 += 4;

    FUNC_0(4, VAR_9);
    VAR_24 += 4;

    if (VAR_20[VAR_24-4+2]&1) {
        goto parse_ipv4;
    } else
        return 0;



wifi_data:
    {
        unsigned VAR_33;
        FUNC_0(24, VAR_19);

        VAR_33 = VAR_20[VAR_24];

        switch (VAR_20[VAR_24+1]&0x03) {
        case 0:
        case 2:
            VAR_23->mac_dst = VAR_20+VAR_24+4;
            VAR_23->mac_bss = VAR_20+VAR_24+10;
            VAR_23->mac_src = VAR_20+VAR_24+16;
            break;
        case 1:
            VAR_23->mac_bss = VAR_20+VAR_24+4;
            VAR_23->mac_src = VAR_20+VAR_24+10;
            VAR_23->mac_dst = VAR_20+VAR_24+16;
            break;
        case 3:
            VAR_23->mac_bss = (const unsigned char*)"\0\0\0\0\0\0";
            VAR_23->mac_dst = VAR_20+VAR_24+16;
            VAR_23->mac_src = VAR_20+VAR_24+24;
            VAR_24 += 6;
            break;
        }


        if ((VAR_20[VAR_24+1]&0x04) != 0 || (VAR_20[VAR_24+22]&0xF) != 0)
            return 0;

        VAR_24 += 24;
        if (VAR_33 == 0x88) {
            VAR_24 += 2;
        }

        goto parse_llc;
    }

parse_wifi:
    FUNC_0(2, VAR_18);
    switch (VAR_20[VAR_24]) {
    case 0x08:
    case 0x88:
        if (VAR_20[1] & 0x40)
            return 0;
        goto wifi_data;
        break;
    default:
        return 0;
    }

parse_radiotap_header:
    {
        unsigned VAR_34;
        unsigned VAR_35;

        FUNC_0(8, VAR_13);
        if (VAR_20[VAR_24] != 0)
            return 0;
        VAR_34 = FUNC_3(VAR_20+VAR_24+2);
        VAR_35 = FUNC_5(VAR_20+VAR_24+4);

        FUNC_0(VAR_34, VAR_13);



        if (VAR_35 & 0x4000) {
            unsigned VAR_36 = FUNC_5(VAR_20+VAR_24+VAR_34-4);
            unsigned VAR_37 = FUNC_5(VAR_20+VAR_21-4);
            if (VAR_36 == VAR_37)
                VAR_21 -= 4;
            FUNC_0(VAR_34, VAR_13);
        }
        VAR_24 += VAR_34;
        goto parse_wifi;
    }


parse_prism_header:
    {
        unsigned VAR_38;
        FUNC_0(8, VAR_12);

        if (FUNC_5(VAR_20+VAR_24+0) != 0x00000044)
            return 0;
        VAR_38 = FUNC_5(VAR_20+VAR_24+4);
        if (VAR_38 > 0xFFFFF)
            return 0;
        FUNC_0(VAR_38, VAR_12);
        VAR_24 += VAR_38;
        goto parse_wifi;
    }

parse_llc:
    {
        unsigned VAR_39;

        FUNC_0(3, VAR_8);

        switch (FUNC_4(VAR_20+VAR_24)) {
        case 0x0000aa: VAR_24 += 2; goto parse_llc;
        default: return 0;
        case 0xaaaa03: break;
        }

        VAR_24 +=3 ;

        FUNC_0(5, VAR_8);

        VAR_39 = FUNC_4(VAR_20+VAR_24);
        VAR_25 = FUNC_2(VAR_20+VAR_24+3);
        VAR_24 += 5;

        switch (VAR_39){
        case 0x000000: goto parse_ethertype;
        default: return 0;
        }

    }

parse_ethertype:
    switch (VAR_25) {
    case 0x0800: goto parse_ipv4;
    case 0x0806: goto parse_arp;
    case 0x86dd: goto parse_ipv6;
    case 0x8100: goto parse_vlan8021q;
    case 0x8847: goto parse_vlanmpls;
    default: return 0;
    }

parse_linktype:



    switch (VAR_22) {
    case 1: goto parse_ethernet;
    case 12: goto parse_ipv4;
    case 0x69: goto parse_wifi;
    case 113: goto parse_linux_sll;
    case 119: goto parse_prism_header;
    case 127: goto parse_radiotap_header;
    default: return 0;
    }

parse_linux_sll:
    {
        struct {
            unsigned packet_type;
            unsigned arp_type;
            unsigned addr_length;
            unsigned char mac_address[8];
            unsigned ethertype;
        } VAR_40;

        FUNC_0(16, VAR_15);

        VAR_40.packet_type = FUNC_2(VAR_20+VAR_24+0);
        VAR_40.arp_type = FUNC_2(VAR_20+VAR_24+2);
        VAR_40.addr_length = FUNC_2(VAR_20+VAR_24+4);
        FUNC_6(VAR_40.mac_address, VAR_20+VAR_24+6, 8);
        VAR_40.ethertype = FUNC_2(VAR_20+VAR_24+14);

        VAR_24 += 16;

        goto parse_ethertype;
    }

parse_arp:
    VAR_23->ip_version = 256;
    VAR_23->ip_offset = VAR_24;
    {


        unsigned VAR_41;
        unsigned VAR_42;
        unsigned VAR_43;

        FUNC_0(8, VAR_1);


        VAR_41 = VAR_20[VAR_24+4];
        VAR_42 = VAR_20[VAR_24+5];
        VAR_43 = VAR_20[VAR_24+6]<<8 | VAR_20[VAR_24+7];
        VAR_24 += 8;

        FUNC_0(2*VAR_41 + 2*VAR_42, VAR_1);

        VAR_23->ip_src = VAR_20 + VAR_24 + VAR_41;
        VAR_23->ip_dst = VAR_20 + VAR_24 + 2*VAR_41 + VAR_42;
        VAR_23->ip_protocol = VAR_43;
        VAR_23->found_offset = VAR_23->ip_offset;
        return 1;
    }

}
