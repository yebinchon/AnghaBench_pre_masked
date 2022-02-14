
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tiff {unsigned int rp; unsigned int bp; unsigned int ep; } ;
typedef int fz_context ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,char*,unsigned int) ;
 unsigned int FUNC_1 (struct tiff*) ;
 int FUNC_2 (int *,struct tiff*,unsigned int) ;

__attribute__((used)) static void
FUNC_3(fz_context *VAR_1, struct tiff *VAR_2)
{
 unsigned VAR_3;
 unsigned VAR_4;
 unsigned VAR_5;

 VAR_3 = VAR_2->rp - VAR_2->bp;

 VAR_4 = FUNC_1(VAR_2);

 if (VAR_4 * 12 > (unsigned)(VAR_2->ep - VAR_2->rp))
  FUNC_0(VAR_1, VAR_0, "overlarge IFD entry count %u", VAR_4);

 VAR_3 += 2;
 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++)
 {
  FUNC_2(VAR_1, VAR_2, VAR_3);
  VAR_3 += 12;
 }
}
