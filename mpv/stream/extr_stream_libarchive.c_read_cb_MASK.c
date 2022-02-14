
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mp_archive_volume {TYPE_1__* mpa; int src; } ;
struct archive {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {void* buffer; } ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ,void*,int) ;
 int FUNC_2 (struct mp_archive_volume*) ;

__attribute__((used)) static ssize_t FUNC_3(struct archive *VAR_0, void *VAR_1, const void **VAR_2)
{
    struct mp_archive_volume *VAR_3 = VAR_1;
    if (!FUNC_2(VAR_3))
        return -1;
    int VAR_4 = FUNC_1(VAR_3->src, VAR_3->mpa->buffer,
                                  sizeof(VAR_3->mpa->buffer));
    *VAR_2 = VAR_3->mpa->buffer;
    return FUNC_0(VAR_4, 0);
}
