
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u_int ;
struct TYPE_6__ {int length; int value; } ;
typedef TYPE_1__ sspi_buffer_desc ;
typedef scalar_t__ bool_t ;
struct TYPE_7__ {scalar_t__ x_op; } ;
typedef TYPE_2__ XDR ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,char*,char*,int ,int ) ;
 scalar_t__ FUNC_1 (TYPE_2__*,char**,int *,int ) ;

bool_t
FUNC_2(XDR *VAR_2, sspi_buffer_desc *VAR_3)
{
 bool_t VAR_4;

 VAR_4 = FUNC_1(VAR_2, (char **)&VAR_3->value,
                        (u_int *)&VAR_3->length, (u_int)(-1));

 FUNC_0("xdr_rpc_gss_init_args: %s %s (token %p:%d)",
                (VAR_2->x_op == VAR_1) ? "encode" : "decode",
                (VAR_4 == VAR_0) ? "success" : "failure",
                VAR_3->value, VAR_3->length);

 return (VAR_4);
}
