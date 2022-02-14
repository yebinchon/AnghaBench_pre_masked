
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd_ass_priv {int num_seen_packets; scalar_t__* seen_packets; } ;
struct sd {struct sd_ass_priv* priv; } ;
typedef scalar_t__ int64_t ;


 int FUNC_0 (struct sd_ass_priv*,scalar_t__*,int,int,scalar_t__) ;

__attribute__((used)) static bool FUNC_1(struct sd *VAR_0, int64_t VAR_1)
{
    struct sd_ass_priv *VAR_2 = VAR_0->priv;
    int VAR_3 = 0;
    int VAR_4 = VAR_2->num_seen_packets;
    while (VAR_3 < VAR_4) {
        int VAR_5 = VAR_3 + (VAR_4 - VAR_3) / 2;
        int64_t VAR_6 = VAR_2->seen_packets[VAR_5];
        if (VAR_1 == VAR_6)
            return 1;
        if (VAR_1 > VAR_6) {
            VAR_3 = VAR_5 + 1;
        } else {
            VAR_4 = VAR_5;
        }
    }
    FUNC_0(VAR_2, VAR_2->seen_packets, VAR_2->num_seen_packets, VAR_3, VAR_1);
    return 0;
}
