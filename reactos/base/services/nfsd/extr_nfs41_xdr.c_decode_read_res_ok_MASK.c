
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned char* data; int data_len; int eof; } ;
typedef TYPE_1__ nfs41_read_res_ok ;
typedef int bool_t ;
typedef int XDR ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,char**,int *,int ) ;

__attribute__((used)) static bool_t FUNC_2(
    XDR *VAR_2,
    nfs41_read_res_ok *VAR_3)
{
    unsigned char *VAR_4 = VAR_3->data;

    if (!FUNC_0(VAR_2, &VAR_3->eof))
        return VAR_0;

    return FUNC_1(VAR_2, (char **)&VAR_4, &VAR_3->data_len, VAR_1);
}
