
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,char*) ;

int FUNC_1(char *VAR_4) {
    if (!FUNC_0(VAR_4,"normal")) return VAR_1;
    else if (!FUNC_0(VAR_4,"slave")) return VAR_3;
    else if (!FUNC_0(VAR_4,"replica")) return VAR_3;
    else if (!FUNC_0(VAR_4,"pubsub")) return VAR_2;
    else if (!FUNC_0(VAR_4,"master")) return VAR_0;
    else return -1;
}
