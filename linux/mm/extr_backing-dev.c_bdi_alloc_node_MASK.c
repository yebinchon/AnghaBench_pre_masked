
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct backing_dev_info {int dummy; } ;
typedef int gfp_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct backing_dev_info*) ;
 int FUNC_1 (struct backing_dev_info*) ;
 struct backing_dev_info* FUNC_2 (int,int,int) ;

struct backing_dev_info *FUNC_3(gfp_t VAR_1, int VAR_2)
{
 struct backing_dev_info *VAR_3;

 VAR_3 = FUNC_2(sizeof(struct backing_dev_info),
      VAR_1 | VAR_0, VAR_2);
 if (!VAR_3)
  return ((void*)0);

 if (FUNC_0(VAR_3)) {
  FUNC_1(VAR_3);
  return ((void*)0);
 }
 return VAR_3;
}
