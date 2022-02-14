
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t msg_toget; size_t msg_tosave; int ring_buffer_size; int msg_crst; int msg_event; int * messages; } ;
typedef int LONG ;
typedef TYPE_1__ EventsQueue ;
typedef int Event ;
typedef int BOOL ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_3 (int ,int ) ;

__attribute__((used)) static BOOL FUNC_4(EventsQueue* VAR_3, Event* VAR_4, LONG VAR_5)
{
    if (FUNC_3(VAR_3->msg_event, VAR_5) != VAR_2)
 return VAR_0;

    FUNC_0(&VAR_3->msg_crst);

    if (VAR_3->msg_toget == VAR_3->msg_tosave)
    {
        FUNC_1(&VAR_3->msg_crst);
 return VAR_0;
    }

    *VAR_4 = VAR_3->messages[VAR_3->msg_toget];
    VAR_3->msg_toget = (VAR_3->msg_toget + 1) % VAR_3->ring_buffer_size;


    if (VAR_3->msg_toget == VAR_3->msg_tosave)
 FUNC_2(VAR_3->msg_event);

    FUNC_1(&VAR_3->msg_crst);
    return VAR_1;
}
