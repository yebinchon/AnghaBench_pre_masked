
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct info {int bitcount; int colors; scalar_t__ palettetype; void** palette; } ;
typedef int fz_context ;


 int FUNC_0 (int *,struct info*,int) ;
 int FUNC_1 (int,int) ;
 void* FUNC_2 (unsigned char const*) ;

__attribute__((used)) static const unsigned char *
FUNC_3(fz_context *VAR_0, struct info *VAR_1, const unsigned char *VAR_2, const unsigned char *VAR_3)
{
 int VAR_4, VAR_5, VAR_6;

 if (VAR_1->bitcount > 8)
  return VAR_2;

 if (VAR_1->colors == 0)
  VAR_5 = 1 << VAR_1->bitcount;
 else
  VAR_5 = VAR_1->colors;

 VAR_5 = FUNC_1(VAR_5, 1 << VAR_1->bitcount);

 if (VAR_1->palettetype == 0)
 {
  VAR_6 = FUNC_1(VAR_5, (VAR_3 - VAR_2) / 3);
  for (VAR_4 = 0; VAR_4 < VAR_6; VAR_4++)
  {
   VAR_1->palette[3 * VAR_4 + 0] = FUNC_2(VAR_2 + VAR_4 * 3 + 2);
   VAR_1->palette[3 * VAR_4 + 1] = FUNC_2(VAR_2 + VAR_4 * 3 + 1);
   VAR_1->palette[3 * VAR_4 + 2] = FUNC_2(VAR_2 + VAR_4 * 3 + 0);
  }
  if (VAR_6 < VAR_5)
   FUNC_0(VAR_0, VAR_1, VAR_6);
  return VAR_2 + VAR_6 * 3;
 }
 else
 {
  VAR_6 = FUNC_1(VAR_5, (VAR_3 - VAR_2) / 4);
  for (VAR_4 = 0; VAR_4 < VAR_6; VAR_4++)
  {

   VAR_1->palette[3 * VAR_4 + 0] = FUNC_2(VAR_2 + VAR_4 * 4 + 2);
   VAR_1->palette[3 * VAR_4 + 1] = FUNC_2(VAR_2 + VAR_4 * 4 + 1);
   VAR_1->palette[3 * VAR_4 + 2] = FUNC_2(VAR_2 + VAR_4 * 4 + 0);
  }
  if (VAR_6 < VAR_5)
   FUNC_0(VAR_0, VAR_1, VAR_6);
  return VAR_2 + VAR_6 * 4;
 }

 return VAR_2;
}
