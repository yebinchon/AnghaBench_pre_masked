
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sound_queue {int busy; int non_blocking; int open_queue; } ;
struct file {int f_mode; int f_flags; } ;
typedef int fmode_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sound_queue*,int,int) ;
 int FUNC_1 (struct sound_queue*,struct file*,int) ;
 scalar_t__ FUNC_2 (int ,int) ;

__attribute__((used)) static int FUNC_3(struct sound_queue *VAR_3, struct file *VAR_4, fmode_t VAR_5,
      int VAR_6, int VAR_7)
{
 int VAR_8 = 0;

 if (VAR_4->f_mode & VAR_5) {
  if (VAR_3->busy) {
   return -VAR_0 ;

  }
  VAR_3->busy = 1;






  if (( VAR_8 = FUNC_0(VAR_3, VAR_6, VAR_7))) {



   VAR_3->busy = 0 ;

   return VAR_8;
  }

  VAR_3->non_blocking = VAR_4->f_flags & VAR_2;
 }
 return VAR_8;
}
