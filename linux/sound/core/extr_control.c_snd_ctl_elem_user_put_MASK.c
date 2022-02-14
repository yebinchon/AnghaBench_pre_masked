
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct user_element {unsigned int elem_data_size; char* elem_data; } ;
struct snd_kcontrol {struct user_element* private_data; } ;
struct snd_ctl_elem_value {int value; int id; } ;


 scalar_t__ FUNC_0 (int *,char*,unsigned int) ;
 int FUNC_1 (char*,int *,unsigned int) ;
 unsigned int FUNC_2 (struct snd_kcontrol*,int *) ;

__attribute__((used)) static int FUNC_3(struct snd_kcontrol *VAR_0,
     struct snd_ctl_elem_value *VAR_1)
{
 int VAR_2;
 struct user_element *VAR_3 = VAR_0->private_data;
 unsigned int VAR_4 = VAR_3->elem_data_size;
 char *VAR_5 = VAR_3->elem_data +
   FUNC_2(VAR_0, &VAR_1->id) * VAR_4;

 VAR_2 = FUNC_0(&VAR_1->value, VAR_5, VAR_4) != 0;
 if (VAR_2)
  FUNC_1(VAR_5, &VAR_1->value, VAR_4);
 return VAR_2;
}
