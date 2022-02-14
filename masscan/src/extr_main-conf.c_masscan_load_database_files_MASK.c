
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* pcap_payloads_filename; char* nmap_payloads_filename; char* nmap_service_probes_filename; int probes; int * udp; int * oproto; } ;
struct Masscan {TYPE_1__ payloads; } ;
typedef int FILE ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int **,char const*,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (char const*,int *,int *) ;
 void* FUNC_5 () ;
 int FUNC_6 (int *,char const*,int *) ;
 int FUNC_7 (char const*) ;

void
FUNC_8(struct Masscan *VAR_0)
{
    const char *VAR_1;




    VAR_1 = VAR_0->payloads.pcap_payloads_filename;
    if (VAR_1) {
        if (VAR_0->payloads.udp == ((void*)0))
            VAR_0->payloads.udp = FUNC_5();
        if (VAR_0->payloads.oproto == ((void*)0))
            VAR_0->payloads.oproto = FUNC_5();

        FUNC_4(VAR_1, VAR_0->payloads.udp, VAR_0->payloads.oproto);
    }




    VAR_1 = VAR_0->payloads.nmap_payloads_filename;
    if (VAR_1) {
        FILE *VAR_2;
        int VAR_3;


        VAR_3 = FUNC_1(&VAR_2, VAR_1, "rt");
        if (VAR_3 || VAR_2 == ((void*)0)) {
            FUNC_7(VAR_1);
        } else {
            if (VAR_0->payloads.udp == ((void*)0))
                VAR_0->payloads.udp = FUNC_5();

            FUNC_6(VAR_2, VAR_1, VAR_0->payloads.udp);

            FUNC_0(VAR_2);
        }
    }




    VAR_1 = VAR_0->payloads.nmap_service_probes_filename;
    if (VAR_1) {
        if (VAR_0->payloads.probes)
            FUNC_2(VAR_0->payloads.probes);

        VAR_0->payloads.probes = FUNC_3(VAR_1);
    }
}
