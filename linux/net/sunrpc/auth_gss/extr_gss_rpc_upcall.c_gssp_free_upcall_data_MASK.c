
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int data; } ;
struct TYPE_5__ {int data; } ;
struct TYPE_4__ {int data; } ;
struct gssp_upcall_data {int creds; TYPE_3__ out_token; TYPE_2__ out_handle; TYPE_1__ in_handle; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;

void FUNC_2(struct gssp_upcall_data *VAR_0)
{
 FUNC_1(VAR_0->in_handle.data);
 FUNC_1(VAR_0->out_handle.data);
 FUNC_1(VAR_0->out_token.data);
 FUNC_0(&VAR_0->creds);
}
