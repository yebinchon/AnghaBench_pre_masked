
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int seminfo; int token; } ;
struct TYPE_6__ {TYPE_1__ lookahead; } ;
typedef TYPE_2__ LexState ;


 int FUNC_0 (TYPE_2__*,int *) ;

__attribute__((used)) static void FUNC_1(LexState*VAR_0){
VAR_0->lookahead.token=FUNC_0(VAR_0,&VAR_0->lookahead.seminfo);
}
