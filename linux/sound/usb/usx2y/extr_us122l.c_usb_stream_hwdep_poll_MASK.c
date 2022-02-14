
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_stream {scalar_t__ state; unsigned int periods_polled; unsigned int periods_done; } ;
struct TYPE_2__ {struct usb_stream* s; int sleep; } ;
struct us122l {unsigned int second_periods_polled; int mutex; struct file* first; TYPE_1__ sk; } ;
struct snd_hwdep {struct us122l* private_data; } ;
struct file {int dummy; } ;
typedef int poll_table ;
typedef int __poll_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct file*,int *,int *) ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static __poll_t FUNC_3(struct snd_hwdep *VAR_5,
       struct file *VAR_6, poll_table *VAR_7)
{
 struct us122l *VAR_8 = VAR_5->private_data;
 unsigned *VAR_9;
 __poll_t VAR_10;

 FUNC_2(VAR_6, &VAR_8->sk.sleep, VAR_7);

 VAR_10 = VAR_1 | VAR_2 | VAR_3 | VAR_0;
 if (FUNC_0(&VAR_8->mutex)) {
  struct usb_stream *VAR_11 = VAR_8->sk.s;
  if (VAR_11 && VAR_11->state == VAR_4) {
   if (VAR_8->first == VAR_6)
    VAR_9 = &VAR_11->periods_polled;
   else
    VAR_9 = &VAR_8->second_periods_polled;
   if (*VAR_9 != VAR_11->periods_done) {
    *VAR_9 = VAR_11->periods_done;
    VAR_10 = VAR_1 | VAR_2 | VAR_3;
   } else
    VAR_10 = 0;
  }
  FUNC_1(&VAR_8->mutex);
 }
 return VAR_10;
}
