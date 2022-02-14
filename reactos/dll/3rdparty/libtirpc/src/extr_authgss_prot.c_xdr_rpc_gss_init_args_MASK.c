
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u_int ;
struct TYPE_6__ {int length; int value; } ;
typedef TYPE_1__ gss_buffer_desc ;
typedef scalar_t__ bool_t ;
struct TYPE_7__ {scalar_t__ x_op; } ;
typedef TYPE_2__ XDR ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,char*,char*,int ,int ) ;
 scalar_t__ FUNC_1 (TYPE_2__*,char**,int *,int ) ;

bool_t
FUNC_2(XDR *VAR_3, gss_buffer_desc *VAR_4)
{
 bool_t VAR_5;

 VAR_5 = FUNC_1(VAR_3, (char **)&VAR_4->value,
         (u_int *)&VAR_4->length, VAR_0);

 FUNC_0("xdr_rpc_gss_init_args: %s %s (token %p:%d)",
    (VAR_3->x_op == VAR_2) ? "encode" : "decode",
    (VAR_5 == VAR_1) ? "success" : "failure",
    VAR_4->value, VAR_4->length);

 return (VAR_5);
}
