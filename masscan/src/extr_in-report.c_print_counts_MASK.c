
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 int FUNC_0 (int ) ;
 int* VAR_1 ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static void
FUNC_2()
{
    unsigned VAR_2;
    const char *VAR_3[] = {
        "Unknown", "NAS", "WiFi", "FW", "X509",
        "Conf", "VM", "Cam", "VPN", "PBX", "Printer",
        "default", "mail", "admin", "AV", "honeypot", "box",
        0, "", "", ""};

    FUNC_1("----counts----\n");
    for (VAR_2=0; VAR_2<VAR_0; VAR_2++) {
        FUNC_1("%10u %s\n", VAR_1[VAR_2], VAR_3[VAR_2]);
    }
    FUNC_1("---------------\n");

    FUNC_0(VAR_3[VAR_2] == ((void*)0));
}
