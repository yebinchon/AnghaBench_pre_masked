
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int pcap_if_t ;
struct TYPE_2__ {int (* findalldevs ) (int **,char*) ;char const* (* dev_name ) (int const*) ;int * (* dev_next ) (int const*) ;} ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int VAR_2 ;
 int FUNC_1 (int **,char*) ;
 int * FUNC_2 (int const*) ;
 char const* FUNC_3 (int const*) ;

__attribute__((used)) static const char *
FUNC_4(unsigned VAR_3)
{
    pcap_if_t *VAR_4;
    char VAR_5[VAR_1];
    int VAR_6;

    VAR_6 = VAR_0.findalldevs(&VAR_4, VAR_5);
    if (VAR_6 != -1) {
        const pcap_if_t *VAR_7;

        if (VAR_4 == ((void*)0)) {
            FUNC_0(VAR_2, "ERR:libpcap: no adapters found, are you sure you are root?\n");
        }

        for(VAR_7=VAR_4; VAR_7; VAR_7=VAR_0.dev_next(VAR_7)) {
            if (VAR_3-- == 0)
                return VAR_0.dev_name(VAR_7);
        }
        return 0;
    } else {
        return 0;
    }
}
