
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tiff {unsigned int* ifd_offsets; scalar_t__ rp; scalar_t__ bp; scalar_t__ ep; } ;
typedef int fz_context ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,char*,unsigned int) ;
 unsigned int FUNC_1 (int *,struct tiff*,unsigned int) ;

__attribute__((used)) static void
FUNC_2(fz_context *VAR_1, struct tiff *VAR_2, int VAR_3)
{
 unsigned VAR_4 = VAR_2->ifd_offsets[0];

 while (VAR_3--)
 {
  VAR_4 = FUNC_1(VAR_1, VAR_2, VAR_4);

  if (VAR_4 == 0)
   FUNC_0(VAR_1, VAR_0, "subimage index %i out of range", VAR_3);
 }

 VAR_2->rp = VAR_2->bp + VAR_4;

 if (VAR_2->rp < VAR_2->bp || VAR_2->rp > VAR_2->ep)
  FUNC_0(VAR_1, VAR_0, "invalid IFD offset %u", VAR_4);
}
