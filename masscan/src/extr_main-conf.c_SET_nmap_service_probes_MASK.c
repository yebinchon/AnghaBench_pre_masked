
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* nmap_service_probes_filename; } ;
struct Masscan {TYPE_1__ payloads; scalar_t__ echo; scalar_t__ echo_all; } ;


 int VAR_0 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (scalar_t__,char*,char*) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char const*) ;

__attribute__((used)) static int FUNC_4(struct Masscan *VAR_1, const char *VAR_2, const char *VAR_3)
{
    FUNC_0(VAR_2);

    if (VAR_1->echo) {
        if ((VAR_1->payloads.nmap_service_probes_filename && VAR_1->payloads.nmap_service_probes_filename[0]) || VAR_1->echo_all)
            FUNC_1(VAR_1->echo, "nmap-service-probes = %s\n", VAR_1->payloads.nmap_service_probes_filename);
        return 0;
    }

    if (VAR_1->payloads.nmap_service_probes_filename)
        FUNC_2(VAR_1->payloads.nmap_service_probes_filename);
    VAR_1->payloads.nmap_service_probes_filename = FUNC_3(VAR_3);


    return VAR_0;
}
