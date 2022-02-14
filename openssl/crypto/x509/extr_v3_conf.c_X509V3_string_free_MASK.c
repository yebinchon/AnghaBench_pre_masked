
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int db; TYPE_1__* db_meth; } ;
typedef TYPE_2__ X509V3_CTX ;
struct TYPE_4__ {int (* free_string ) (int ,char*) ;} ;


 int FUNC_0 (int ,char*) ;

void FUNC_1(X509V3_CTX *VAR_0, char *VAR_1)
{
    if (!VAR_1)
        return;
    if (VAR_0->db_meth->free_string)
        VAR_0->db_meth->free_string(VAR_0->db, VAR_1);
}
