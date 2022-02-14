
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct data__file {int session; } ;
struct TYPE_2__ {int range_num; int range_size; int ptime_range; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (char*,int ,int *,int *,int *) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char*,char) ;

__attribute__((used)) static int FUNC_3(struct data__file *VAR_2, char **VAR_3)
{
 char *VAR_4 = *VAR_3;
 int VAR_5;





 VAR_4 = FUNC_2(*VAR_3, ':');
 if (VAR_4) {
  if (VAR_4 == *VAR_3) {
   FUNC_1("Invalid time string\n");
   return -VAR_0;
  }

  *VAR_4 = 0;
  VAR_4++;
  if (*VAR_4 == 0) {
   FUNC_1("Invalid time string\n");
   return -VAR_0;
  }
 }

 VAR_5 = FUNC_0(*VAR_3, VAR_2->session,
       &VAR_1.ptime_range,
       &VAR_1.range_size,
       &VAR_1.range_num);
 if (VAR_5 < 0)
  return VAR_5;

 if (!VAR_4 || *VAR_4 == 0)
  *VAR_3 = ((void*)0);
 else
  *VAR_3 = VAR_4;

 return VAR_5;
}
