
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int* start_vector; int length; int img_CRC; int CRC; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (char*,...) ;

void FUNC_1(void)
{
 int VAR_2;

 FUNC_0("vectors in header\n");
 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  FUNC_0("%d:0x%08x\n", VAR_2, VAR_1.start_vector[VAR_2]);
 }
 FUNC_0("length:%8x\nimg_CRC:0x%08x\nHeader CRC:0x%08x\n",
  VAR_1.length, VAR_1.img_CRC, VAR_1.CRC);
}
