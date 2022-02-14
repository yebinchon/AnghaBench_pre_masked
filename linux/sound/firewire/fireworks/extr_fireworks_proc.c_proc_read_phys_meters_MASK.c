
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct snd_info_entry {struct snd_efw* private_data; } ;
struct snd_info_buffer {int dummy; } ;
struct snd_efw_phys_meters {int out_meters; int in_meters; int * values; } ;
struct snd_efw {int phys_in; int phys_out; unsigned int phys_out_grp_count; unsigned int phys_in_grp_count; TYPE_1__* phys_in_grps; TYPE_1__* phys_out_grps; } ;
struct TYPE_2__ {unsigned int count; } ;


 int VAR_0 ;
 char* FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (struct snd_efw_phys_meters*) ;
 struct snd_efw_phys_meters* FUNC_2 (unsigned int,int ) ;
 unsigned int FUNC_3 (int,int) ;
 int FUNC_4 (struct snd_efw*,struct snd_efw_phys_meters*,unsigned int) ;
 int FUNC_5 (struct snd_info_buffer*,char*,...) ;

__attribute__((used)) static void
FUNC_6(struct snd_info_entry *VAR_1,
        struct snd_info_buffer *VAR_2)
{
 struct snd_efw *VAR_3 = VAR_1->private_data;
 struct snd_efw_phys_meters *VAR_4;
 unsigned int VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;
 const char *VAR_10;
 u32 *VAR_11;
 int VAR_12;

 VAR_9 = sizeof(struct snd_efw_phys_meters) +
        (VAR_3->phys_in + VAR_3->phys_out) * sizeof(u32);
 VAR_4 = FUNC_2(VAR_9, VAR_0);
 if (VAR_4 == ((void*)0))
  return;

 VAR_12 = FUNC_4(VAR_3, VAR_4, VAR_9);
 if (VAR_12 < 0)
  goto end;

 FUNC_5(VAR_2, "Physical Meters:\n");

 VAR_7 = 0;
 VAR_8 = FUNC_3(VAR_3->phys_out, VAR_4->out_meters);
 VAR_11 = VAR_4->values;
 FUNC_5(VAR_2, " %d Outputs:\n", VAR_8);
 for (VAR_5 = 0; VAR_5 < VAR_3->phys_out_grp_count; VAR_5++) {
  VAR_10 = FUNC_0(&VAR_3->phys_out_grps[VAR_5], 0);
  for (VAR_6 = 0; VAR_6 < VAR_3->phys_out_grps[VAR_5].count; VAR_6++) {
   if (VAR_7 < VAR_8)
    FUNC_5(VAR_2, "\t%s [%d]: %d\n",
         VAR_10, VAR_6, VAR_11[VAR_7++]);
  }
 }

 VAR_7 = 0;
 VAR_8 = FUNC_3(VAR_3->phys_in, VAR_4->in_meters);
 VAR_11 = VAR_4->values + VAR_4->out_meters;
 FUNC_5(VAR_2, " %d Inputs:\n", VAR_8);
 for (VAR_5 = 0; VAR_5 < VAR_3->phys_in_grp_count; VAR_5++) {
  VAR_10 = FUNC_0(&VAR_3->phys_in_grps[VAR_5], 1);
  for (VAR_6 = 0; VAR_6 < VAR_3->phys_in_grps[VAR_5].count; VAR_6++)
   if (VAR_7 < VAR_8)
    FUNC_5(VAR_2, "\t%s [%d]: %d\n",
         VAR_10, VAR_6, VAR_11[VAR_7++]);
 }
end:
 FUNC_1(VAR_4);
}
