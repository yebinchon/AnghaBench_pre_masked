
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct hpi_adapter_obj {int dummy; } ;


 int FUNC_0 (int ,char*,int,int,int,int) ;
 int VAR_0 ;
 int FUNC_1 (struct hpi_adapter_obj*,int,int) ;
 int FUNC_2 (struct hpi_adapter_obj*,int,int,int) ;

__attribute__((used)) static u16 FUNC_3(struct hpi_adapter_obj *VAR_1, int VAR_2,
 u32 VAR_3, u32 VAR_4)
{
 u32 VAR_5 = 0, VAR_6 = 0;
 u32 VAR_7 = 0;
 u32 VAR_8 = 0, VAR_9 = 0;

 VAR_4 = 1000;




 VAR_5 = 0;
 {
  VAR_7 = VAR_3 + VAR_5 * 4;
  VAR_8 = 0x00000001;
  for (VAR_6 = 0; VAR_6 < 32; VAR_6++) {
   FUNC_2(VAR_1, VAR_2, VAR_7,
    VAR_8);
   VAR_9 = FUNC_1(VAR_1, VAR_2,
    VAR_7);
   if (VAR_9 != VAR_8) {
    FUNC_0(VAR_0,
     "Memtest error details  "
     "%08x %08x %08x %i\n", VAR_7,
     VAR_8, VAR_9, VAR_2);
    return 1;
   }
   VAR_8 = VAR_8 << 1;
  }
 }




 for (VAR_5 = 0; VAR_5 < 100; VAR_5++) {
  VAR_7 = VAR_3 + VAR_5 * 4;
  VAR_8 = 0xA5A55A5A;
  FUNC_2(VAR_1, VAR_2, VAR_7, VAR_8);
  FUNC_2(VAR_1, VAR_2, VAR_7 + 4, 0);
  VAR_9 = FUNC_1(VAR_1, VAR_2, VAR_7);
  if (VAR_9 != VAR_8) {
   FUNC_0(VAR_0,
    "Memtest error details  "
    "%08x %08x %08x %i\n", VAR_7, VAR_8,
    VAR_9, VAR_2);
   return 1;
  }

  FUNC_2(VAR_1, VAR_2, VAR_7, 0x0);
 }


 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
  VAR_7 = VAR_3 + VAR_5 * 4;
  FUNC_2(VAR_1, VAR_2, VAR_7, 0x0);
 }
 return 0;
}
