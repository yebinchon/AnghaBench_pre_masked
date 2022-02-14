
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in {int dummy; } ;
struct sockaddr {int dummy; } ;
struct interface_info {int wfdesc; } ;
struct in_addr {int dummy; } ;
struct hardware {int dummy; } ;
struct dhcp_packet {int dummy; } ;
typedef int ssize_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int ,char*,int,int ,struct sockaddr*,int) ;

ssize_t FUNC_2( struct interface_info *VAR_3,
                     struct dhcp_packet *VAR_4,
                     size_t VAR_5,
                     struct in_addr VAR_6,
                     struct sockaddr_in *VAR_7,
                     struct hardware *VAR_8 ) {
    int VAR_9;

    if (VAR_5 > VAR_0)
        return VAR_1;

    VAR_9 =
        FUNC_1( VAR_3->wfdesc, (char *)VAR_4, (int)VAR_5, 0,
                (struct sockaddr *)VAR_7, sizeof(*VAR_7) );

    if (VAR_9 < 0) {
        FUNC_0 ("send_packet: %x", VAR_9);
        if (VAR_9 == VAR_2)
            FUNC_0 ("send_packet: please consult README file%s",
                  " regarding broadcast address.");
    }

    return VAR_9;
}
