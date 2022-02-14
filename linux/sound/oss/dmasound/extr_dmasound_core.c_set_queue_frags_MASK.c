
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sound_queue {int bufSize; int numBufs; int user_frags; int max_active; int user_frag_size; scalar_t__ locked; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;

__attribute__((used)) static int FUNC_1(struct sound_queue *VAR_3, int VAR_4, int VAR_5)
{
 if (VAR_3->locked) {



  return -VAR_0 ;
 }

 if ((VAR_5 < VAR_2) || (VAR_5 > VAR_1))
  return -VAR_0 ;
 VAR_5 = (1<<VAR_5) ;
 if (VAR_5 > VAR_3->bufSize)
  return -VAR_0 ;

 if (VAR_4 <= 0)
  return -VAR_0 ;
 if (VAR_4 > VAR_3->numBufs)
  VAR_4 = VAR_3->numBufs ;






 VAR_3->user_frags =
 VAR_3->max_active = VAR_4 ;
 VAR_3->user_frag_size = VAR_5 ;

 return 0 ;
}
