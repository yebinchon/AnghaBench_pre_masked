
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int reploffset; } ;
struct TYPE_8__ {scalar_t__ btype; TYPE_1__ bpop; } ;
typedef TYPE_2__ client ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*) ;

void FUNC_5(client *VAR_5) {
    if (VAR_5->btype == VAR_0 ||
        VAR_5->btype == VAR_4 ||
        VAR_5->btype == VAR_2) {
        FUNC_1(VAR_5);
    } else if (VAR_5->btype == VAR_3) {
        FUNC_0(VAR_5,FUNC_3(VAR_5->bpop.reploffset));
    } else if (VAR_5->btype == VAR_1) {
        FUNC_2(VAR_5);
    } else {
        FUNC_4("Unknown btype in replyToBlockedClientTimedOut().");
    }
}
