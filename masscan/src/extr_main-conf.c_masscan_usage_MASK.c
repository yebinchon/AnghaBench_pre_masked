
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;

void
FUNC_2(void)
{
    FUNC_1("usage:\n");
    FUNC_1("masscan -p80,8000-8100 10.0.0.0/8 --rate=10000\n");
    FUNC_1(" scan some web ports on 10.x.x.x at 10kpps\n");
    FUNC_1("masscan --nmap\n");
    FUNC_1(" list those options that are compatible with nmap\n");
    FUNC_1("masscan -p80 10.0.0.0/8 --banners -oB <filename>\n");
    FUNC_1(" save results of scan in binary format to <filename>\n");
    FUNC_1("masscan --open --banners --readscan <filename> -oX <savefile>\n");
    FUNC_1(" read binary scan results in <filename> and save them as xml in <savefile>\n");
    FUNC_0(1);
}
