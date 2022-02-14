
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void (* write ) (struct snd_info_entry*,struct snd_info_buffer*) ;} ;
struct TYPE_4__ {TYPE_1__ text; } ;
struct snd_info_entry {int mode; TYPE_2__ c; } ;
struct snd_card {int proc_root; } ;


 int VAR_0 ;
 struct snd_info_entry* FUNC_0 (struct snd_card*,char const*,int ) ;
 int FUNC_1 (struct snd_info_entry*,void*,void (*) (struct snd_info_entry*,struct snd_info_buffer*)) ;

int FUNC_2(struct snd_card *VAR_1, const char *VAR_2,
    void *VAR_3,
    void (*VAR_4)(struct snd_info_entry *,
          struct snd_info_buffer *),
    void (*VAR_5)(struct snd_info_entry *VAR_6,
           struct snd_info_buffer *VAR_7))
{
 struct snd_info_entry *VAR_8;

 VAR_8 = FUNC_0(VAR_1, VAR_2, VAR_1->proc_root);
 if (!VAR_8)
  return -VAR_0;
 FUNC_1(VAR_8, VAR_3, VAR_4);
 if (VAR_5) {
  VAR_8->mode |= 0200;
  VAR_8->c.text.write = VAR_5;
 }
 return 0;
}
