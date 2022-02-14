
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void const nvmem_cell ;
struct device {int dummy; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ FUNC_0 (void const*) ;
 int FUNC_1 (void const*) ;
 int FUNC_2 (void*,void const*) ;
 int FUNC_3 (void const*) ;
 int FUNC_4 (void const*) ;
 void* FUNC_5 (struct device*,char*) ;
 int FUNC_6 (void const*) ;
 void* FUNC_7 (void const*,size_t*) ;

int FUNC_8(struct device *VAR_2, void *VAR_3)
{
 struct nvmem_cell *VAR_4;
 const void *VAR_5;
 size_t VAR_6;

 VAR_4 = FUNC_5(VAR_2, "mac-address");
 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);

 VAR_5 = FUNC_7(VAR_4, &VAR_6);
 FUNC_6(VAR_4);

 if (FUNC_0(VAR_5))
  return FUNC_1(VAR_5);

 if (VAR_6 != VAR_1 || !FUNC_3(VAR_5)) {
  FUNC_4(VAR_5);
  return -VAR_0;
 }

 FUNC_2(VAR_3, VAR_5);
 FUNC_4(VAR_5);

 return 0;
}
