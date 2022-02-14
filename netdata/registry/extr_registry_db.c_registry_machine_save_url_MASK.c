
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int first_t; int last_t; int usages; int flags; TYPE_1__* url; } ;
struct TYPE_3__ {char* url; } ;
typedef TYPE_2__ REGISTRY_MACHINE_URL ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,char*) ;
 int FUNC_1 (int *,char*,int,int,int,int,char*) ;

__attribute__((used)) static int FUNC_2(void *VAR_1, void *VAR_2) {
    REGISTRY_MACHINE_URL *VAR_3 = VAR_1;
    FILE *VAR_4 = VAR_2;

    FUNC_0(VAR_0, "Registry: registry_machine_save_url('%s')", VAR_3->url->url);

    int VAR_5 = FUNC_1(VAR_4, "V\t%08x\t%08x\t%08x\t%02x\t%s\n",
            VAR_3->first_t,
            VAR_3->last_t,
            VAR_3->usages,
            VAR_3->flags,
            VAR_3->url->url
    );



    return VAR_5;
}
