
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int cmap_name; } ;
typedef TYPE_1__ pdf_cmap ;
typedef int fz_context ;


 int VAR_0 ;
 int FUNC_0 (int *,TYPE_1__*,unsigned int,int*,int) ;
 int FUNC_1 (int *,TYPE_1__*,unsigned int,unsigned int,int,int,int ) ;
 int FUNC_2 (int *,char*,int ) ;

void
FUNC_3(fz_context *VAR_1, pdf_cmap *VAR_2, unsigned int VAR_3, int *VAR_4, int VAR_5)
{
 if (VAR_5 == 1)
 {
  FUNC_1(VAR_1, VAR_2, VAR_3, VAR_3, VAR_4[0], 1, 0);
  return;
 }



 if (VAR_5 == 2 &&
  VAR_4[0] >= 0xD800 && VAR_4[0] <= 0xDBFF &&
  VAR_4[1] >= 0xDC00 && VAR_4[1] <= 0xDFFF)
 {
  int VAR_6 = ((VAR_4[0] - 0xD800) << 10) + (VAR_4[1] - 0xDC00) + 0x10000;
  FUNC_1(VAR_1, VAR_2, VAR_3, VAR_3, VAR_6, 1, 0);
  return;
 }

 if (VAR_5 > VAR_0)
 {
  FUNC_2(VAR_1, "ignoring one to many mapping in cmap %s", VAR_2->cmap_name);
  return;
 }

 FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
}
