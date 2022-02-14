
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct record_packet {int packet; } ;
typedef int AVPacket ;


 int FUNC_0 (struct record_packet*) ;
 struct record_packet* FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int const*) ;

__attribute__((used)) static struct record_packet *
FUNC_4(const AVPacket *VAR_0) {
    struct record_packet *VAR_1 = FUNC_1(sizeof(*VAR_1));
    if (!VAR_1) {
        return ((void*)0);
    }



    FUNC_2(&VAR_1->packet);

    if (FUNC_3(&VAR_1->packet, VAR_0)) {
        FUNC_0(VAR_1);
        return ((void*)0);
    }
    return VAR_1;
}
