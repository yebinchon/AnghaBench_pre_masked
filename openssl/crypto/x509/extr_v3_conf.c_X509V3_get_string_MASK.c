
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int db; TYPE_1__* db_meth; } ;
typedef TYPE_2__ X509V3_CTX ;
struct TYPE_4__ {char* (* get_string ) (int ,char const*,char const*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 char* FUNC_1 (int ,char const*,char const*) ;

char *FUNC_2(X509V3_CTX *VAR_2, const char *VAR_3, const char *VAR_4)
{
    if (!VAR_2->db || !VAR_2->db_meth || !VAR_2->db_meth->get_string) {
        FUNC_0(VAR_0, VAR_1);
        return ((void*)0);
    }
    if (VAR_2->db_meth->get_string)
        return VAR_2->db_meth->get_string(VAR_2->db, VAR_3, VAR_4);
    return ((void*)0);
}
