
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct recorder {int failed; int mutex; int queue; struct record_packet* previous; scalar_t__ stopped; int queue_cond; } ;
struct TYPE_2__ {int duration; int pts; } ;
struct record_packet {TYPE_1__ packet; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *,int ,struct record_packet**) ;
 int FUNC_8 (struct record_packet*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct recorder*,TYPE_1__*) ;

__attribute__((used)) static int
FUNC_11(void *VAR_1) {
    struct recorder *VAR_2 = VAR_1;

    for (;;) {
        FUNC_4(VAR_2->mutex);

        while (!VAR_2->stopped && FUNC_6(&VAR_2->queue)) {
            FUNC_3(VAR_2->queue_cond, VAR_2->mutex);
        }




        if (VAR_2->stopped && FUNC_6(&VAR_2->queue)) {
            FUNC_5(VAR_2->mutex);
            struct record_packet *VAR_3 = VAR_2->previous;
            if (VAR_3) {

                VAR_3->packet.duration = 100000;
                bool VAR_4 = FUNC_10(VAR_2, &VAR_3->packet);
                if (!VAR_4) {



                    FUNC_2("Could not record last packet");
                }
                FUNC_8(VAR_3);
            }
            break;
        }

        struct record_packet *VAR_5;
        FUNC_7(&VAR_2->queue, VAR_0, &VAR_5);

        FUNC_5(VAR_2->mutex);


        struct record_packet *VAR_6 = VAR_2->previous;
        VAR_2->previous = VAR_5;

        if (!VAR_6) {

            continue;
        }


        VAR_6->packet.duration = VAR_5->packet.pts - VAR_6->packet.pts;

        bool VAR_7 = FUNC_10(VAR_2, &VAR_6->packet);
        FUNC_8(VAR_6);
        if (!VAR_7) {
            FUNC_1("Could not record packet");

            FUNC_4(VAR_2->mutex);
            VAR_2->failed = 1;

            FUNC_9(&VAR_2->queue);
            FUNC_5(VAR_2->mutex);
            break;
        }

    }

    FUNC_0("Recorder thread ended");

    return 0;
}
