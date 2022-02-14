
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct outqueuenode {int textlen; int* buffer; int* textp; scalar_t__ addr; } ;
struct TYPE_3__ {struct outqueuenode* tail; } ;


 int FUNC_0 (TYPE_1__,struct outqueuenode*) ;
 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(int VAR_3) {
  struct outqueuenode *VAR_4;

  VAR_4= VAR_0.tail;
  if (!VAR_4 || VAR_4->addr || VAR_4->textlen >= VAR_2) {
    VAR_2= !VAR_2 || !VAR_4 || VAR_4->addr ? 128 :
      VAR_2 >= 1024 ? 4096 : VAR_2<<2;
    VAR_4= FUNC_1(sizeof(*VAR_4));
    VAR_4->buffer= FUNC_1(VAR_2);
    VAR_4->textp= VAR_4->buffer;
    VAR_4->textlen= 0;
    VAR_4->addr= 0;
    FUNC_0(VAR_0,VAR_4);
    VAR_1++;
  }
  VAR_4->textp[VAR_4->textlen++]= VAR_3;
}
