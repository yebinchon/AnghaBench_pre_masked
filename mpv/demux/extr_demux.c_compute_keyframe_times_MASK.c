
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct demux_packet {double start; double end; struct demux_packet* next; scalar_t__ segmented; int dts; int pts; scalar_t__ keyframe; } ;


 double VAR_0 ;
 double FUNC_0 (double,double) ;
 double FUNC_1 (double,double) ;
 double FUNC_2 (int ,int ) ;

__attribute__((used)) static struct demux_packet *FUNC_3(struct demux_packet *VAR_1,
                                                   double *VAR_2,
                                                   double *VAR_3)
{
    struct demux_packet *VAR_4 = VAR_1;
    double VAR_5 = VAR_0;
    double VAR_6 = VAR_0;

    while (VAR_1) {
        if (VAR_1->keyframe && VAR_1 != VAR_4)
            break;

        double VAR_7 = FUNC_2(VAR_1->pts, VAR_1->dts);
        if (VAR_1->segmented && (VAR_7 < VAR_1->start || VAR_7 > VAR_1->end))
            VAR_7 = VAR_0;

        VAR_5 = FUNC_1(VAR_5, VAR_7);
        VAR_6 = FUNC_0(VAR_6, VAR_7);

        VAR_1 = VAR_1->next;
    }

    if (VAR_2)
        *VAR_2 = VAR_5;
    if (VAR_3)
        *VAR_3 = VAR_6;
    return VAR_1;
}
