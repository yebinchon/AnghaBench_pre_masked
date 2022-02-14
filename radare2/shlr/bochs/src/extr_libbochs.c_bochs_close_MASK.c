
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int hProcess; } ;
struct TYPE_5__ {int isRunning; int data; int pid; int hWritePipeOut; int hReadPipeIn; TYPE_1__ processInfo; int ghWriteEvent; int hWritePipeIn; int hReadPipeOut; } ;
typedef TYPE_2__ libbochs_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int VAR_1 ;

void FUNC_6(libbochs_t* VAR_2) {
 VAR_2->isRunning = 0;
 FUNC_3 (VAR_2->hReadPipeIn);
 FUNC_3 (VAR_2->hWritePipeOut);
 FUNC_5 (VAR_2->pid, VAR_0);
 FUNC_1 (VAR_2->data);
 FUNC_1 (VAR_1);

}
