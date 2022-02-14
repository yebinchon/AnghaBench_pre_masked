
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_archive_volume {int src; } ;
struct archive {int dummy; } ;
typedef int int64_t ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct mp_archive_volume*) ;

__attribute__((used)) static int64_t FUNC_3(struct archive *VAR_0, void *VAR_1, int64_t VAR_2)
{
    struct mp_archive_volume *VAR_3 = VAR_1;
    if (!FUNC_2(VAR_3))
        return -1;
    int64_t VAR_4 = FUNC_1(VAR_3->src);
    FUNC_0(VAR_3->src, VAR_2);
    return FUNC_1(VAR_3->src) - VAR_4;
}
