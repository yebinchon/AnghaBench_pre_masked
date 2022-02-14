
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {void* Mode; int Offset; } ;
struct TYPE_8__ {void* Mode; int Offset; } ;
struct TYPE_7__ {void* Mode; int Offset; } ;
struct TYPE_10__ {TYPE_4__ AddrStack; TYPE_3__ AddrPC; TYPE_2__ AddrFrame; } ;
struct TYPE_6__ {int Esp; int Ebp; int Eip; int Rsp; int Rbp; int Rip; } ;
struct stack_trace {TYPE_5__ frame; int image_type; TYPE_1__ context; int instruction_ptr; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static inline void FUNC_0(struct stack_trace *VAR_3)
{







 VAR_3->instruction_ptr = VAR_3->context.Eip;
 VAR_3->frame.AddrPC.Offset = VAR_3->instruction_ptr;
 VAR_3->frame.AddrFrame.Offset = VAR_3->context.Ebp;
 VAR_3->frame.AddrStack.Offset = VAR_3->context.Esp;
 VAR_3->image_type = VAR_2;


 VAR_3->frame.AddrFrame.Mode = VAR_0;
 VAR_3->frame.AddrPC.Mode = VAR_0;
 VAR_3->frame.AddrStack.Mode = VAR_0;
}
