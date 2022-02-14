
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobject {int dummy; } ;
struct hstate {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct kobject** VAR_2 ;
 struct hstate* VAR_3 ;
 struct hstate* FUNC_0 (struct kobject*,int*) ;

__attribute__((used)) static struct hstate *FUNC_1(struct kobject *VAR_4, int *VAR_5)
{
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++)
  if (VAR_2[VAR_6] == VAR_4) {
   if (VAR_5)
    *VAR_5 = VAR_1;
   return &VAR_3[VAR_6];
  }

 return FUNC_0(VAR_4, VAR_5);
}
