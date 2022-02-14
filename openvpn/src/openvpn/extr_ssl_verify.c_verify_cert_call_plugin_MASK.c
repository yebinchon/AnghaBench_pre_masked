
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct plugin_list {int dummy; } ;
struct env_set {int dummy; } ;
struct argv {int dummy; } ;
typedef int result_t ;
typedef int openvpn_x509_cert_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct argv FUNC_0 () ;
 int FUNC_1 (struct argv*,char*,int,char*) ;
 int FUNC_2 (struct argv*) ;
 int FUNC_3 (int ,char*,int,char*) ;
 int FUNC_4 (struct plugin_list const*,int ,struct argv*,int *,struct env_set*,int,int *) ;
 scalar_t__ FUNC_5 (struct plugin_list const*,int ) ;

__attribute__((used)) static result_t
FUNC_6(const struct plugin_list *VAR_5, struct env_set *VAR_6,
                        int VAR_7, openvpn_x509_cert_t *VAR_8, char *VAR_9)
{
    if (FUNC_5(VAR_5, VAR_3))
    {
        int VAR_10;
        struct argv VAR_11 = FUNC_0();

        FUNC_1(&VAR_11, "%d %s", VAR_7, VAR_9);

        VAR_10 = FUNC_4(VAR_5, VAR_3, &VAR_11, ((void*)0), VAR_6, VAR_7, VAR_8);

        FUNC_2(&VAR_11);

        if (VAR_10 == VAR_2)
        {
            FUNC_3(VAR_0, "VERIFY PLUGIN OK: depth=%d, %s",
                VAR_7, VAR_9);
        }
        else
        {
            FUNC_3(VAR_0, "VERIFY PLUGIN ERROR: depth=%d, %s",
                VAR_7, VAR_9);
            return VAR_1;
        }
    }
    return VAR_4;
}
