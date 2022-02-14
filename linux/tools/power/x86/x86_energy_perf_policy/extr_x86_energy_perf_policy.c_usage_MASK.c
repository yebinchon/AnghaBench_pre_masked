
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,...) ;
 char* VAR_0 ;
 int VAR_1 ;

void FUNC_2(void)
{
 FUNC_1(VAR_1, "%s [options] [scope][field value]\n", VAR_0);
 FUNC_1(VAR_1, "scope: --cpu cpu-list [--hwp-use-pkg #] | --pkg pkg-list\n");
 FUNC_1(VAR_1, "field: --all | --epb | --hwp-epp | --hwp-min | --hwp-max | --hwp-desired\n");
 FUNC_1(VAR_1, "other: --hwp-enable | --turbo-enable (0 | 1) | --help | --force\n");
 FUNC_1(VAR_1,
  "value: ( # | \"normal\" | \"performance\" | \"balance-performance\" | \"balance-power\"| \"power\")\n");
 FUNC_1(VAR_1, "--hwp-window usec\n");

 FUNC_1(VAR_1, "Specify only Energy Performance BIAS (legacy usage):\n");
 FUNC_1(VAR_1, "%s: [-c cpu] [-v] (-r | policy-value )\n", VAR_0);

 FUNC_0(1);
}
