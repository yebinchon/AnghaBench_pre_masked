
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_info_entry {int* name; struct loopback* private_data; } ;
struct snd_info_buffer {int dummy; } ;
struct loopback {int cable_lock; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct snd_info_buffer*,struct loopback*,int,int) ;
 int FUNC_3 (int*) ;

__attribute__((used)) static void FUNC_4(struct snd_info_entry *VAR_1,
        struct snd_info_buffer *VAR_2)
{
 struct loopback *VAR_3 = VAR_1->private_data;
 int VAR_4, VAR_5;

 FUNC_0(&VAR_3->cable_lock);
 VAR_5 = VAR_1->name[FUNC_3(VAR_1->name)-1];
 VAR_5 = VAR_5 == '0' ? 0 : 1;
 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
  FUNC_2(VAR_2, VAR_3, VAR_4, VAR_5);
 FUNC_1(&VAR_3->cable_lock);
}
