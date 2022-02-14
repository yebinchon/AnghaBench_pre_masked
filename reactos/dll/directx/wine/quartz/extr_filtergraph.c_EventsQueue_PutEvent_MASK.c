
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int msg_toget; int msg_tosave; int ring_buffer_size; int msg_crst; int msg_event; int * messages; } ;
typedef TYPE_1__ EventsQueue ;
typedef int Event ;
typedef int BOOL ;


 int * FUNC_0 (int *,int) ;
 size_t VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,size_t) ;
 int VAR_1 ;
 int FUNC_5 (int *,int *,int) ;

__attribute__((used)) static BOOL FUNC_6(EventsQueue* VAR_2, const Event* VAR_3)
{
    FUNC_1(&VAR_2->msg_crst);
    if (VAR_2->msg_toget == ((VAR_2->msg_tosave + 1) % VAR_2->ring_buffer_size))
    {
 int VAR_4 = VAR_2->ring_buffer_size;
 VAR_2->ring_buffer_size += VAR_0;
 FUNC_4("omr->ring_buffer_size=%d\n",VAR_2->ring_buffer_size);
 VAR_2->messages = FUNC_0(VAR_2->messages, VAR_2->ring_buffer_size * sizeof(Event));




 if (VAR_2->msg_tosave < VAR_2->msg_toget)
 {
     FUNC_5(&(VAR_2->messages[VAR_2->msg_toget + VAR_0]),
      &(VAR_2->messages[VAR_2->msg_toget]),
      sizeof(Event)*(VAR_4 - VAR_2->msg_toget)
      );
     VAR_2->msg_toget += VAR_0;
 }
    }
    VAR_2->messages[VAR_2->msg_tosave] = *VAR_3;
    FUNC_3(VAR_2->msg_event);
    VAR_2->msg_tosave = (VAR_2->msg_tosave + 1) % VAR_2->ring_buffer_size;
    FUNC_2(&VAR_2->msg_crst);
    return VAR_1;
}
