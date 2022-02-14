
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int * _errno; int data; int addr; int pid; int request; } ;
struct TYPE_5__ {TYPE_2__ ptrace; } ;
struct TYPE_7__ {TYPE_1__ request; int ptrace_result; } ;
typedef TYPE_3__ ptrace_wrap_instance ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(ptrace_wrap_instance *VAR_1) {
 VAR_1->ptrace_result = FUNC_0 (
   VAR_1->request.ptrace.request,
   VAR_1->request.ptrace.pid,
   VAR_1->request.ptrace.addr,
   VAR_1->request.ptrace.data);
 if (VAR_1->request.ptrace._errno) {
  *VAR_1->request.ptrace._errno = VAR_0;
 }
}
