
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* buff_for_parsing; int err; scalar_t__ amount_of_read_chars; int state; } ;
typedef TYPE_1__ SStateInfo ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(SStateInfo *VAR_2, char *VAR_3) {
 VAR_2->state = VAR_1;
 VAR_2->buff_for_parsing = VAR_3;
 VAR_2->amount_of_read_chars = 0;
 VAR_2->err = VAR_0;
}
