
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* logfile; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int,int) ;
 TYPE_1__ VAR_4 ;

int FUNC_1(void) {
    int VAR_5 = VAR_4.logfile[0] == '\0';
    int VAR_6 = VAR_5 ?
        VAR_3 :
        FUNC_0(VAR_4.logfile, VAR_0|VAR_1|VAR_2, 0644);
    return VAR_6;
}
