
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
typedef int resource_size_t ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (struct device*) ;
 int VAR_3 ;
 int FUNC_2 (struct device*,void**) ;
 void** FUNC_3 (int ,int,int ,int ) ;
 int FUNC_4 (void**) ;
 void* FUNC_5 (int ,size_t,unsigned long) ;

void *FUNC_6(struct device *VAR_4, resource_size_t VAR_5,
  size_t VAR_6, unsigned long VAR_7)
{
 void **VAR_8, *VAR_9;

 VAR_8 = FUNC_3(VAR_3, sizeof(*VAR_8), VAR_2,
   FUNC_1(VAR_4));
 if (!VAR_8)
  return FUNC_0(-VAR_0);

 VAR_9 = FUNC_5(VAR_5, VAR_6, VAR_7);
 if (VAR_9) {
  *VAR_8 = VAR_9;
  FUNC_2(VAR_4, VAR_8);
 } else {
  FUNC_4(VAR_8);
  return FUNC_0(-VAR_1);
 }

 return VAR_9;
}
