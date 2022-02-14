
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobject {int dummy; } ;
struct hstate {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (int,struct hstate*,int,unsigned long,size_t) ;
 struct hstate* FUNC_1 (struct kobject*,int*) ;
 int FUNC_2 (char const*,int,unsigned long*) ;

__attribute__((used)) static ssize_t FUNC_3(bool VAR_0,
      struct kobject *VAR_1, const char *VAR_2,
      size_t VAR_3)
{
 struct hstate *VAR_4;
 unsigned long VAR_5;
 int VAR_6;
 int VAR_7;

 VAR_7 = FUNC_2(VAR_2, 10, &VAR_5);
 if (VAR_7)
  return VAR_7;

 VAR_4 = FUNC_1(VAR_1, &VAR_6);
 return FUNC_0(VAR_0, VAR_4, VAR_6, VAR_5, VAR_3);
}
