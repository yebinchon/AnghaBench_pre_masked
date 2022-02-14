
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct kms {int fd; } ;
struct TYPE_3__ {int count_connectors; int * connectors; } ;
typedef TYPE_1__ drmModeRes ;
typedef int drmModeConnector ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (char const*,char*) ;

__attribute__((used)) static drmModeConnector *FUNC_4(const struct kms *VAR_1,
                                               const drmModeRes *VAR_2,
                                               const char *VAR_3)
{
    for (int VAR_4 = 0; VAR_4 < VAR_2->count_connectors; VAR_4++) {
        drmModeConnector *VAR_5
            = FUNC_1(VAR_1->fd, VAR_2->connectors[VAR_4]);
        if (!VAR_5)
            continue;
        char VAR_6[VAR_0];
        FUNC_2(VAR_5, VAR_6);
        if (!FUNC_3(VAR_3, VAR_6))
            return VAR_5;
        FUNC_0(VAR_5);
    }
    return ((void*)0);
}
