
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uuid_module {int max_instance; int * pvt_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct uuid_module*,int *,int,int) ;

__attribute__((used)) static inline int FUNC_1(struct uuid_module *VAR_2)
{
 int VAR_3, VAR_4, VAR_5, VAR_6 = 0, VAR_7;

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  VAR_5 = 0;

  for (VAR_4 = 0; VAR_4 < 2; VAR_4++) {
   VAR_7 = FUNC_0(VAR_2, &VAR_2->pvt_id[VAR_3],
      VAR_5, VAR_6);
   if (VAR_7 >= 0)
    return VAR_7;

   VAR_5 += 32;
   if ((VAR_5 + VAR_6) >= VAR_2->max_instance)
    return -VAR_0;
  }

  VAR_6 += 64;
  if (VAR_6 >= VAR_2->max_instance)
   return -VAR_0;
 }

 return -VAR_0;
}
