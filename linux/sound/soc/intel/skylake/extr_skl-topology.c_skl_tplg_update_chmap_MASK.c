
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skl_module_fmt {int ch_map; } ;



__attribute__((used)) static void FUNC_0(struct skl_module_fmt *VAR_0, int VAR_1)
{
 int VAR_2 = 0xFFFFFFFF;
 int VAR_3 = 0;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {




  VAR_2 &= (~(0xF << (4 * VAR_4)) | (VAR_3 << (4 * VAR_4)));
  VAR_3++;
 }
 VAR_0->ch_map = VAR_2;
}
