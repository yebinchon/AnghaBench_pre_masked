
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WEB_CLIENT_ACL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char*) ;

WEB_CLIENT_ACL FUNC_2(char *VAR_6) {
    WEB_CLIENT_ACL VAR_7 = FUNC_0(VAR_6);

    if (!FUNC_1(VAR_6,"dashboard")) VAR_7 |= VAR_1;
    if (!FUNC_1(VAR_6,"registry")) VAR_7 |= VAR_4;
    if (!FUNC_1(VAR_6,"badges")) VAR_7 |= VAR_0;
    if (!FUNC_1(VAR_6,"management")) VAR_7 |= VAR_2;
    if (!FUNC_1(VAR_6,"streaming")) VAR_7 |= VAR_5;
    if (!FUNC_1(VAR_6,"netdata.conf")) VAR_7 |= VAR_3;

    return VAR_7;
}
