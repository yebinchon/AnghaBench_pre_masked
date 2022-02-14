
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*,char*) ;

__attribute__((used)) static int FUNC_1(char **VAR_1) {
 FUNC_0("\nUsage:\t%s -q -f config_file program_name [arguments]\n"
        "\t-q makes proxychains quiet - this overrides the config setting\n"
        "\t-f allows one to manually specify a configfile to use\n"
        "\tfor example : proxychains telnet somehost.com\n" "More help in README file\n\n", VAR_1[0]);
 return VAR_0;
}
