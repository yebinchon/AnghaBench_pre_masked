
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t num; scalar_t__ array; } ;
struct ffmpeg_output {int write_thread_active; int ff_data; int write_mutex; TYPE_1__ packets; int write_thread; int write_sem; int stop_event; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_1__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct ffmpeg_output *VAR_0)
{
 if (VAR_0->write_thread_active) {
  FUNC_3(VAR_0->stop_event);
  FUNC_4(VAR_0->write_sem);
  FUNC_5(VAR_0->write_thread, ((void*)0));
  VAR_0->write_thread_active = 0;
 }

 FUNC_6(&VAR_0->write_mutex);

 for (size_t VAR_1 = 0; VAR_1 < VAR_0->packets.num; VAR_1++)
  FUNC_0(VAR_0->packets.array + VAR_1);
 FUNC_1(VAR_0->packets);

 FUNC_7(&VAR_0->write_mutex);

 FUNC_2(&VAR_0->ff_data);
}
