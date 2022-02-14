
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Masscan {char* pcap_filename; scalar_t__ echo; } ;


 int VAR_0 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (scalar_t__,char*,char*) ;
 int FUNC_2 (char*,int,char const*) ;

__attribute__((used)) static int FUNC_3(struct Masscan *VAR_1, const char *VAR_2, const char *VAR_3)
{
    FUNC_0(VAR_2);
    if (VAR_1->echo) {
        if (VAR_1->pcap_filename[0])
            FUNC_1(VAR_1->echo, "pcap-filename = %s\n", VAR_1->pcap_filename);
        return 0;
    }
    if (VAR_3)
        FUNC_2(VAR_1->pcap_filename, sizeof(VAR_1->pcap_filename), VAR_3);
    return VAR_0;
}
