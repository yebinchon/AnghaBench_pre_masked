
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int lastline; unsigned char* lastlineOffset; int pc; TYPE_1__* f; } ;
struct TYPE_6__ {int packedlineinfo; int* lineinfo; } ;
typedef TYPE_2__ FuncState ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 void* VAR_3 ;
 unsigned char VAR_4 ;
 int FUNC_0 (TYPE_2__*,int) ;
 unsigned char* FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int) ;

void FUNC_3 (FuncState *VAR_5, int VAR_6) {
   VAR_5->f->lineinfo[VAR_5->pc - 1] = VAR_6;

}
