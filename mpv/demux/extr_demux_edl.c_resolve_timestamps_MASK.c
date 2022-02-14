
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tl_part {double offset; double length; int offset_set; scalar_t__ chapter_ts; } ;
struct demuxer {double start_time; } ;


 double FUNC_0 (struct demuxer*,double) ;

__attribute__((used)) static void FUNC_1(struct tl_part *VAR_0, struct demuxer *VAR_1)
{
    if (VAR_0->chapter_ts) {
        double VAR_2 = FUNC_0(VAR_1, VAR_0->offset);
        double VAR_3 = VAR_0->length;
        double VAR_4 = VAR_3;
        if (VAR_4 >= 0)
            VAR_4 = FUNC_0(VAR_1, VAR_0->offset + VAR_0->length);
        if (VAR_4 >= 0 && VAR_2 >= 0)
            VAR_3 = VAR_4 - VAR_2;
        VAR_0->offset = VAR_2;
        VAR_0->length = VAR_3;
    }
    if (!VAR_0->offset_set)
        VAR_0->offset = VAR_1->start_time;
}
