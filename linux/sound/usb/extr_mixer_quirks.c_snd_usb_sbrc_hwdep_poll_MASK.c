
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_mixer_interface {scalar_t__ rc_code; int rc_waitq; } ;
struct snd_hwdep {struct usb_mixer_interface* private_data; } ;
struct file {int dummy; } ;
typedef int poll_table ;
typedef int __poll_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct file*,int *,int *) ;

__attribute__((used)) static __poll_t FUNC_1(struct snd_hwdep *VAR_2, struct file *VAR_3,
         poll_table *VAR_4)
{
 struct usb_mixer_interface *VAR_5 = VAR_2->private_data;

 FUNC_0(VAR_3, &VAR_5->rc_waitq, VAR_4);
 return VAR_5->rc_code ? VAR_0 | VAR_1 : 0;
}
