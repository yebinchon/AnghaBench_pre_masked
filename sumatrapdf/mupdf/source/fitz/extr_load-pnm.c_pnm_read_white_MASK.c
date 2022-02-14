
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fz_context ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,char*) ;
 scalar_t__ FUNC_1 (unsigned char const) ;
 scalar_t__ FUNC_2 (unsigned char const) ;
 scalar_t__ FUNC_3 (unsigned char const) ;

__attribute__((used)) static const unsigned char *
FUNC_4(fz_context *VAR_1, const unsigned char *VAR_2, const unsigned char *VAR_3, int VAR_4)
{
 if (VAR_3 - VAR_2 < 1)
  FUNC_0(VAR_1, VAR_0, "cannot parse whitespace in pnm image");

 if (VAR_4)
 {
  if (!FUNC_3(*VAR_2) && *VAR_2 != '#')
   FUNC_0(VAR_1, VAR_0, "expected whitespace/comment in pnm image");
  while (VAR_2 < VAR_3 && FUNC_2(*VAR_2))
   VAR_2++;

  if (VAR_2 < VAR_3 && *VAR_2 == '#')
   while (VAR_2 < VAR_3 && !FUNC_1(*VAR_2))
    VAR_2++;
  if (VAR_2 < VAR_3 && FUNC_1(*VAR_2))
   VAR_2++;
 }
 else
 {
  if (!FUNC_3(*VAR_2) && *VAR_2 != '#')
   FUNC_0(VAR_1, VAR_0, "expected whitespace in pnm image");
  while (VAR_2 < VAR_3 && FUNC_3(*VAR_2))
   VAR_2++;

  while (VAR_2 < VAR_3 && *VAR_2 == '#')
  {
   while (VAR_2 < VAR_3 && !FUNC_1(*VAR_2))
    VAR_2++;

   if (VAR_2 < VAR_3 && FUNC_1(*VAR_2))
    VAR_2++;

   while (VAR_2 < VAR_3 && FUNC_3(*VAR_2))
    VAR_2++;

   if (VAR_2 < VAR_3 && FUNC_1(*VAR_2))
    VAR_2++;
  }
 }

 return VAR_2;
}
