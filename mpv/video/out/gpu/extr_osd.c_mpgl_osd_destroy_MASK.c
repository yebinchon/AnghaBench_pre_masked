
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mpgl_osd_part {int texture; } ;
struct mpgl_osd {int ra; struct mpgl_osd_part** parts; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct mpgl_osd*) ;

void FUNC_2(struct mpgl_osd *VAR_1)
{
    if (!VAR_1)
        return;

    for (int VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
        struct mpgl_osd_part *VAR_3 = VAR_1->parts[VAR_2];
        FUNC_0(VAR_1->ra, &VAR_3->texture);
    }
    FUNC_1(VAR_1);
}
