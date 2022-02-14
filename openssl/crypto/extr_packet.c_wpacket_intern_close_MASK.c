
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {size_t pwritten; int flags; scalar_t__ lenbytes; scalar_t__ packet_len; int parent; } ;
typedef TYPE_1__ WPACKET_SUB ;
struct TYPE_8__ {size_t written; scalar_t__ curr; int subs; } ;
typedef TYPE_2__ WPACKET ;


 unsigned char* FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (unsigned char*,size_t,scalar_t__) ;

__attribute__((used)) static int FUNC_3(WPACKET *VAR_2, WPACKET_SUB *VAR_3, int VAR_4)
{
    size_t VAR_5 = VAR_2->written - VAR_3->pwritten;

    if (VAR_5 == 0
            && (VAR_3->flags & VAR_1) != 0)
        return 0;

    if (VAR_5 == 0
            && VAR_3->flags & VAR_0) {

        if (!VAR_4)
            return 0;


        if ((VAR_2->curr - VAR_3->lenbytes) == VAR_3->packet_len) {
            VAR_2->written -= VAR_3->lenbytes;
            VAR_2->curr -= VAR_3->lenbytes;
        }


        VAR_3->packet_len = 0;
        VAR_3->lenbytes = 0;
    }


    if (VAR_3->lenbytes > 0) {
        unsigned char *VAR_6 = FUNC_0(VAR_2);

        if (VAR_6 != ((void*)0)
                && !FUNC_2(&VAR_6[VAR_3->packet_len], VAR_5,
                              VAR_3->lenbytes))
            return 0;
    }

    if (VAR_4) {
        VAR_2->subs = VAR_3->parent;
        FUNC_1(VAR_3);
    }

    return 1;
}
