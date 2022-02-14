
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct RangeList {int dummy; } ;
struct PayloadsUDP {unsigned int count; unsigned int max; struct PayloadUDP_Item** list; } ;
struct PayloadUDP_Item {scalar_t__ port; unsigned int source_port; unsigned int length; int set_cookie; int xsum; int buf; } ;
typedef int p ;
typedef int SET_COOKIE ;


 struct PayloadUDP_Item* FUNC_0 (int) ;
 struct PayloadUDP_Item** FUNC_1 (struct PayloadUDP_Item**,size_t,int) ;
 int FUNC_2 (struct PayloadUDP_Item*) ;
 int FUNC_3 (int ,unsigned char const*,size_t) ;
 int FUNC_4 (struct PayloadUDP_Item**,struct PayloadUDP_Item**,unsigned int) ;
 int FUNC_5 (unsigned char const*,size_t) ;
 scalar_t__ FUNC_6 (struct RangeList*) ;
 scalar_t__ FUNC_7 (struct RangeList*,scalar_t__) ;

__attribute__((used)) static unsigned
FUNC_8(struct PayloadsUDP *VAR_0,
            const unsigned char *VAR_1, size_t VAR_2,
            struct RangeList *VAR_3, unsigned VAR_4,
            SET_COOKIE VAR_5)
{
    unsigned VAR_6 = 1;
    struct PayloadUDP_Item *VAR_7;
    uint64_t VAR_8 = FUNC_6(VAR_3);
    uint64_t VAR_9;

    for (VAR_9=0; VAR_9<VAR_8; VAR_9++) {

        if (VAR_0->count + 1 > VAR_0->max) {
            size_t VAR_10 = VAR_0->max*2 + 1;
            VAR_0->list = FUNC_1(VAR_0->list, VAR_10, sizeof(VAR_0->list[0]));
            VAR_0->max = VAR_10;
        }


        VAR_7 = FUNC_0(sizeof(VAR_7[0]) + VAR_2);
        VAR_7->port = FUNC_7(VAR_3, VAR_9);
        VAR_7->source_port = VAR_4;
        VAR_7->length = (unsigned)VAR_2;
        FUNC_3(VAR_7->buf, VAR_1, VAR_2);
        VAR_7->xsum = FUNC_5(VAR_1, VAR_2);
        VAR_7->set_cookie = VAR_5;


        {
            unsigned VAR_11;

            for (VAR_11=0; VAR_11<VAR_0->count; VAR_11++) {
                if (VAR_7->port <= VAR_0->list[VAR_11]->port)
                    break;
            }

            if (VAR_11 < VAR_0->count) {
                if (VAR_7->port == VAR_0->list[VAR_11]->port) {
                    FUNC_2(VAR_0->list[VAR_11]);
                    VAR_6 = 0;
                } else
                    FUNC_4(VAR_0->list + VAR_11 + 1,
                            VAR_0->list + VAR_11,
                            (VAR_0->count-VAR_11) * sizeof(VAR_0->list[0]));
            }
            VAR_0->list[VAR_11] = VAR_7;

            VAR_0->count += VAR_6;
        }
    }
    return VAR_6;
}
