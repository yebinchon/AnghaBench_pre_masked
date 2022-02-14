
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sound_queue {int locked; scalar_t__ user_frags; scalar_t__ max_count; scalar_t__ numBufs; scalar_t__ max_active; int block_size; int bufSize; int user_frag_size; int rear; scalar_t__ active; scalar_t__ syncing; scalar_t__ rear_size; scalar_t__ count; scalar_t__ front; } ;
struct TYPE_7__ {int (* write_sq_setup ) () ;int (* init ) () ;} ;
struct TYPE_6__ {int size; int stereo; int speed; } ;
struct TYPE_5__ {int size; int stereo; int speed; } ;
struct TYPE_8__ {TYPE_3__ mach; TYPE_2__ hard; TYPE_1__ soft; } ;


 int VAR_0 ;
 TYPE_4__ VAR_1 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 () ;
 struct sound_queue VAR_2 ;

__attribute__((used)) static int FUNC_2(struct sound_queue *VAR_3)
{
 int (*VAR_4)(void) = ((void*)0);
 int VAR_5 ;

 if (VAR_3->locked) {



  return -VAR_0 ;
 }
 VAR_3->locked = 1 ;





 VAR_1.mach.init();
 if (VAR_3->user_frags <= 0) {
  VAR_3->max_count = VAR_3->numBufs ;
  VAR_3->max_active = VAR_3->numBufs ;
  VAR_3->block_size = VAR_3->bufSize;

  VAR_3->user_frags = VAR_3->numBufs ;
  VAR_3->user_frag_size = VAR_3->bufSize ;
  VAR_3->user_frag_size *=
   (VAR_1.soft.size * (VAR_1.soft.stereo+1) ) ;
  VAR_3->user_frag_size /=
   (VAR_1.hard.size * (VAR_1.hard.stereo+1) ) ;
 } else {

  VAR_3->block_size = VAR_3->user_frag_size ;
  VAR_3->block_size *=
   (VAR_1.hard.size * (VAR_1.hard.stereo+1) ) ;
  VAR_3->block_size /=
   (VAR_1.soft.size * (VAR_1.soft.stereo+1) ) ;

  VAR_3->block_size *= VAR_1.hard.speed ;
  VAR_3->block_size /= VAR_1.soft.speed ;

  VAR_5 =
   (VAR_1.hard.size * (VAR_1.hard.stereo+1))/8 ;
  VAR_3->block_size += (VAR_5 - 1) ;
  VAR_3->block_size &= ~(VAR_5 - 1) ;

  if ( VAR_3->block_size <= 0 || VAR_3->block_size > VAR_3->bufSize) {



   VAR_3->block_size = VAR_3->bufSize ;
  }
  if ( VAR_3->user_frags <= VAR_3->numBufs ) {
   VAR_3->max_count = VAR_3->user_frags ;

   VAR_3->max_active = (VAR_3->max_active <= VAR_3->max_count) ?
    VAR_3->max_active : VAR_3->max_count ;
  } else {



   VAR_3->max_count =
   VAR_3->max_active = VAR_3->numBufs ;
  }
 }
 VAR_3->front = VAR_3->count = VAR_3->rear_size = 0;
 VAR_3->syncing = 0;
 VAR_3->active = 0;

 if (VAR_3 == &VAR_2) {
     VAR_3->rear = -1;
     VAR_4 = VAR_1.mach.write_sq_setup;
 }
 if (VAR_4)
     return VAR_4();
 return 0 ;
}
