
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mic_info {int id; int name; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,char*) ;
 int FUNC_1 (int ,char*,char*) ;
 int FUNC_2 (char*,int,char*,...) ;

__attribute__((used)) static void
FUNC_3(struct mic_info *VAR_1)
{
 char VAR_2[VAR_0];
 int VAR_3;

 VAR_3 = FUNC_2(VAR_2, VAR_0,
  "clocksource=tsc highres=off nohz=off ");
 VAR_3 += FUNC_2(VAR_2 + VAR_3, VAR_0 - VAR_3,
  "cpufreq_on;corec6_off;pc3_off;pc6_off ");
 VAR_3 += FUNC_2(VAR_2 + VAR_3, VAR_0 - VAR_3,
  "ifcfg=static;address,172.31.%d.1;netmask,255.255.255.0",
  VAR_1->id + 1);

 FUNC_1(VAR_1->name, "cmdline", VAR_2);
 FUNC_0("%s: Command line: \"%s\"\n", VAR_1->name, VAR_2);
 FUNC_2(VAR_2, VAR_0, "172.31.%d.1", VAR_1->id + 1);
 FUNC_0("%s: IPADDR: \"%s\"\n", VAR_1->name, VAR_2);
}
