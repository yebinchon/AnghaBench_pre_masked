
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct idmap_config {int dummy; } ;


 int FUNC_0 (char*) ;
 char* VAR_0 ;
 scalar_t__ FUNC_1 (char*,int ) ;
 int VAR_1 ;
 int FUNC_2 (char*,int ,char*) ;
 int FUNC_3 (char*,int ,char*) ;
 int FUNC_4 (struct idmap_config*) ;
 int FUNC_5 (struct idmap_config*,char*) ;
 int FUNC_6 (char*,...) ;

__attribute__((used)) static int FUNC_7(
    struct idmap_config *VAR_2)
{
    int VAR_3;





    VAR_3 = FUNC_4(VAR_2);
    if (VAR_3) {
        FUNC_6("config_defaults() failed with %d\n", VAR_3);
        goto out;
    }
    VAR_3 = FUNC_5(VAR_2, VAR_0);

    if (VAR_3) {



        FUNC_6("config_load('%s') failed with %d\n", VAR_0, VAR_3);

        goto out;
    }
out:
    return VAR_3;
}
