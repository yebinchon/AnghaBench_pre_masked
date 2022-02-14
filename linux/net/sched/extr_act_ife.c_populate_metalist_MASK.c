
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcf_ife_info {int dummy; } ;
struct nlattr {int dummy; } ;


 int FUNC_0 (struct tcf_ife_info*,int,void*,int,int) ;
 int FUNC_1 (int,void*,int,int) ;
 int VAR_0 ;
 void* FUNC_2 (struct nlattr*) ;
 int FUNC_3 (struct nlattr*) ;

__attribute__((used)) static int FUNC_4(struct tcf_ife_info *VAR_1, struct nlattr **VAR_2,
        bool VAR_3, bool VAR_4)
{
 int VAR_5 = 0;
 int VAR_6 = 0;
 int VAR_7 = 0;
 void *VAR_8;

 for (VAR_7 = 1; VAR_7 < VAR_0; VAR_7++) {
  if (VAR_2[VAR_7]) {
   VAR_8 = FUNC_2(VAR_2[VAR_7]);
   VAR_5 = FUNC_3(VAR_2[VAR_7]);

   VAR_6 = FUNC_1(VAR_7, VAR_8, VAR_5, VAR_4);
   if (VAR_6 != 0)
    return VAR_6;

   VAR_6 = FUNC_0(VAR_1, VAR_7, VAR_8, VAR_5, VAR_3);
   if (VAR_6)
    return VAR_6;
  }
 }

 return VAR_6;
}
