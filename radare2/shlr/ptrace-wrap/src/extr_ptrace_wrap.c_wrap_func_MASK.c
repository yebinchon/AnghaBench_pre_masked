
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int user; int (* func ) (int ) ;} ;
struct TYPE_6__ {TYPE_1__ func; } ;
struct TYPE_7__ {TYPE_2__ request; int func_result; } ;
typedef TYPE_3__ ptrace_wrap_instance ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(ptrace_wrap_instance *VAR_0) {
 VAR_0->func_result = VAR_0->request.func.func (VAR_0->request.func.user);
}
