
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {char current; int buff; int decpoint; } ;
struct TYPE_10__ {int r; } ;
typedef TYPE_1__ SemInfo ;
typedef TYPE_2__ LexState ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,char,int ) ;
 scalar_t__ FUNC_1 (TYPE_2__*,char*) ;
 scalar_t__ FUNC_2 (char) ;
 scalar_t__ FUNC_3 (char) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (TYPE_2__*,char*,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_2__*,char) ;
 int FUNC_8 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_9(LexState*VAR_1,SemInfo*VAR_2){
do{
FUNC_8(VAR_1);
}while(FUNC_3(VAR_1->current)||VAR_1->current=='.');
if(FUNC_1(VAR_1,"Ee"))
FUNC_1(VAR_1,"+-");
while(FUNC_2(VAR_1->current)||VAR_1->current=='_')
FUNC_8(VAR_1);
FUNC_7(VAR_1,'\0');
FUNC_0(VAR_1,'.',VAR_1->decpoint);
if(!FUNC_4(FUNC_6(VAR_1->buff),&VAR_2->r))
FUNC_5(VAR_1,"malformed number",VAR_0);
}
