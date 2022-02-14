
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct hpi_adapter_obj {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct hpi_adapter_obj*,int,int,int) ;

__attribute__((used)) static u16 FUNC_1(struct hpi_adapter_obj *VAR_1,
 int VAR_2)
{
 int VAR_3 = 0;
 if (VAR_2 == 0) {


  VAR_3 = FUNC_0(VAR_1, VAR_2, 0x00000000,
   0x10000);
  if (!VAR_3)

   VAR_3 = FUNC_0(VAR_1, VAR_2,
    0x80000000, 0x10000);
 } else if (VAR_2 == 1) {


  VAR_3 = FUNC_0(VAR_1, VAR_2, 0x00000000,
   0x30000);
  if (!VAR_3)

   VAR_3 = FUNC_0(VAR_1, VAR_2,
    0x00030000, 0x10000);
 }

 if (VAR_3)
  return VAR_0;
 else
  return 0;
}
