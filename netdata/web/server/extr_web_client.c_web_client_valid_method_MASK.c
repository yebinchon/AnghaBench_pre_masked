
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ flags; } ;
struct web_client {int mode; scalar_t__ header_parse_last_size; scalar_t__ header_parse_tries; TYPE_1__ ssl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*,char*,int) ;
 char* FUNC_2 (char*,char) ;
 int FUNC_3 (char*,char*,int) ;
 char* FUNC_4 (char*,char*) ;
 int FUNC_5 (struct web_client*) ;
 scalar_t__ FUNC_6 (struct web_client*) ;

__attribute__((used)) static inline char *FUNC_7(struct web_client *VAR_3, char *VAR_4) {

    if(!FUNC_3(VAR_4, "GET ", 4)) {
        VAR_4 = &VAR_4[4];
        VAR_3->mode = VAR_0;
    }
    else if(!FUNC_3(VAR_4, "OPTIONS ", 8)) {
        VAR_4 = &VAR_4[8];
        VAR_3->mode = VAR_1;
    }
    else if(!FUNC_3(VAR_4, "STREAM ", 7)) {
        VAR_4 = &VAR_4[7];
        VAR_3->mode = VAR_2;
    }
    else {
        VAR_4 = ((void*)0);
    }

    return VAR_4;
}
