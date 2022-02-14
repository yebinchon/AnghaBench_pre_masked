
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct info {int xres; int yres; } ;
typedef int fz_context ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,char*) ;
 int FUNC_1 (unsigned char const*) ;

__attribute__((used)) static void
FUNC_2(fz_context *VAR_1, struct info *VAR_2, const unsigned char *VAR_3, unsigned int VAR_4)
{
 if (VAR_4 != 9)
  FUNC_0(VAR_1, VAR_0, "pHYs chunk is the wrong size");
 if (VAR_3[8] == 1)
 {
  VAR_2->xres = (FUNC_1(VAR_3) * 254 + 5000) / 10000;
  VAR_2->yres = (FUNC_1(VAR_3 + 4) * 254 + 5000) / 10000;
 }
}
