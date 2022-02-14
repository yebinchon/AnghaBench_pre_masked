
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mp_archive_volume {int seek_to; scalar_t__ src; TYPE_2__* mpa; int url; } ;
struct archive {int dummy; } ;
struct TYPE_4__ {TYPE_1__* primary_src; } ;
struct TYPE_3__ {int global; int cancel; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ,int ,int ) ;
 scalar_t__ FUNC_1 (scalar_t__,int ) ;

__attribute__((used)) static int FUNC_2(struct archive *VAR_3, void *VAR_4)
{
    struct mp_archive_volume *VAR_5 = VAR_4;
    VAR_5->seek_to = -1;
    if (!VAR_5->src) {
        VAR_5->src = FUNC_0(VAR_5->url, VAR_2,
                                 VAR_5->mpa->primary_src->cancel,
                                 VAR_5->mpa->primary_src->global);
        return VAR_5->src ? VAR_1 : VAR_0;
    }


    return FUNC_1(VAR_5->src, 0) ? VAR_1 : VAR_0;
}
