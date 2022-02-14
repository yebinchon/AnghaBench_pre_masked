
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint32 ;
typedef int instr_time ;
struct TYPE_11__ {size_t latch_pos; TYPE_2__* events; TYPE_1__* latch; } ;
typedef TYPE_3__ WaitEventSet ;
struct TYPE_12__ {size_t pos; int events; int user_data; int fd; } ;
typedef TYPE_4__ WaitEvent ;
struct TYPE_10__ {int user_data; } ;
struct TYPE_9__ {scalar_t__ is_set; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (TYPE_3__*,long,TYPE_4__*,int) ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;
 int FUNC_7 () ;
 int VAR_3 ;

int
FUNC_8(WaitEventSet *VAR_4, long VAR_5,
     WaitEvent *VAR_6, int VAR_7,
     uint32 VAR_8)
{
 int VAR_9 = 0;
 instr_time VAR_10;
 instr_time VAR_11;
 long VAR_12 = -1;

 FUNC_0(VAR_7 > 0);





 if (VAR_5 >= 0)
 {
  FUNC_2(VAR_10);
  FUNC_0(VAR_5 >= 0 && VAR_5 <= VAR_0);
  VAR_12 = VAR_5;
 }

 FUNC_6(VAR_8);


 VAR_3 = 1;




 while (VAR_9 == 0)
 {
  int VAR_13;
  if (VAR_4->latch && VAR_4->latch->is_set)
  {
   VAR_6->fd = VAR_1;
   VAR_6->pos = VAR_4->latch_pos;
   VAR_6->user_data =
    VAR_4->events[VAR_4->latch_pos].user_data;
   VAR_6->events = VAR_2;
   VAR_6++;
   VAR_9++;

   break;
  }






  VAR_13 = FUNC_4(VAR_4, VAR_12,
           VAR_6, VAR_7);

  if (VAR_13 == -1)
   break;
  else
   VAR_9 = VAR_13;


  if (VAR_9 == 0 && VAR_5 >= 0)
  {
   FUNC_2(VAR_11);
   FUNC_3(VAR_11, VAR_10);
   VAR_12 = VAR_5 - (long) FUNC_1(VAR_11);
   if (VAR_12 <= 0)
    break;
  }
 }

 VAR_3 = 0;


 FUNC_5();

 return VAR_9;
}
