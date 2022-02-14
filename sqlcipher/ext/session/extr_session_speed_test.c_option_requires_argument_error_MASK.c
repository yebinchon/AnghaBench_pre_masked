
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ eType; char* zText; } ;
typedef TYPE_1__ CmdLineOption ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,char*,char*) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_2(CmdLineOption *VAR_3){
  FUNC_1(VAR_2, "Option requires a%s argument: %s\n",
      VAR_3->eType==VAR_0 ? "n integer" :
      VAR_3->eType==VAR_1 ? " string" : " boolean",
      VAR_3->zText
  );
  FUNC_0(1);
}
