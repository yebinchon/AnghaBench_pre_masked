
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_info_entry {struct snd_efw* private_data; } ;
struct snd_info_buffer {int dummy; } ;
struct snd_efw {scalar_t__ pull_ptr; scalar_t__ push_ptr; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct snd_info_buffer*,char*,unsigned int,unsigned int) ;

__attribute__((used)) static void
FUNC_1(struct snd_info_entry *VAR_1,
         struct snd_info_buffer *VAR_2)
{
 struct snd_efw *VAR_3 = VAR_1->private_data;
 unsigned int VAR_4;

 if (VAR_3->pull_ptr > VAR_3->push_ptr)
  VAR_4 = VAR_0 -
      (unsigned int)(VAR_3->pull_ptr - VAR_3->push_ptr);
 else
  VAR_4 = (unsigned int)(VAR_3->push_ptr - VAR_3->pull_ptr);

 FUNC_0(VAR_2, "%d/%d\n",
      VAR_4, VAR_0);
}
