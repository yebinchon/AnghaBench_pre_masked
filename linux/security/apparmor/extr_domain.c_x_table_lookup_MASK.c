
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct aa_label {int dummy; } ;
struct TYPE_3__ {char** table; } ;
struct TYPE_4__ {TYPE_1__ trans; } ;
struct aa_profile {struct aa_label label; TYPE_2__ file; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct aa_label*) ;
 struct aa_profile* FUNC_2 (struct aa_profile*,char const*) ;
 struct aa_label* FUNC_3 (struct aa_label*,char const*,int ,int,int) ;
 char* FUNC_4 (int,char const*) ;

struct aa_label *FUNC_5(struct aa_profile *VAR_4, u32 VAR_5,
    const char **VAR_6)
{
 struct aa_label *VAR_7 = ((void*)0);
 u32 VAR_8 = VAR_5 & VAR_2;
 int VAR_9 = VAR_5 & VAR_1;

 FUNC_0(!VAR_6);





 for (*VAR_6 = VAR_4->file.trans.table[VAR_9]; !VAR_7 && *VAR_6;
      *VAR_6 = FUNC_4(VAR_8, *VAR_6)) {
  if (VAR_5 & VAR_0) {
   struct aa_profile *VAR_10;

   VAR_10 = FUNC_2(VAR_4, *VAR_6);
   if (VAR_10)
    VAR_7 = &VAR_10->label;
   continue;
  }
  VAR_7 = FUNC_3(&VAR_4->label, *VAR_6, VAR_3,
           1, 0);
  if (FUNC_1(VAR_7))
   VAR_7 = ((void*)0);
 }



 return VAR_7;
}
