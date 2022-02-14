
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_2__* j_common_ptr ;
struct TYPE_8__ {int jb; } ;
typedef TYPE_3__ error_mgr ;
struct TYPE_7__ {TYPE_1__* err; } ;
struct TYPE_6__ {int (* output_message ) (TYPE_2__*) ;} ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_2(j_common_ptr VAR_0)
{
  error_mgr *VAR_1 = (error_mgr *)VAR_0->err;
  (*VAR_0->err->output_message)(VAR_0);
  FUNC_0(VAR_1->jb, 1);
}
