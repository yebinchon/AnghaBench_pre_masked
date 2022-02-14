
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct kms {int fd; } ;
struct TYPE_7__ {int count_connectors; int * connectors; } ;
typedef TYPE_1__ drmModeRes ;
struct TYPE_8__ {scalar_t__ connection; scalar_t__ count_modes; } ;
typedef TYPE_2__ drmModeConnector ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 TYPE_2__* FUNC_1 (int ,int ) ;

__attribute__((used)) static drmModeConnector *FUNC_2(const struct kms *VAR_1,
                                                       const drmModeRes *VAR_2)
{
    for (int VAR_3 = 0; VAR_3 < VAR_2->count_connectors; VAR_3++) {
        drmModeConnector *VAR_4
            = FUNC_1(VAR_1->fd, VAR_2->connectors[VAR_3]);
        if (!VAR_4)
            continue;
        if (VAR_4->connection == VAR_0
        && VAR_4->count_modes > 0) {
            return VAR_4;
        }
        FUNC_0(VAR_4);
    }
    return ((void*)0);
}
