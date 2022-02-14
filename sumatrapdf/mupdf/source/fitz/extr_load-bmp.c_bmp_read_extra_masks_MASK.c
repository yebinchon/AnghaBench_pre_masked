
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct info {scalar_t__ compression; void* bmask; void* gmask; void* rmask; } ;
typedef int fz_context ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,char*) ;
 void* FUNC_1 (unsigned char const*) ;

__attribute__((used)) static const unsigned char *
FUNC_2(fz_context *VAR_3, struct info *VAR_4, const unsigned char *VAR_5, const unsigned char *VAR_6)
{
 int VAR_7 = 0;

 if (VAR_4->compression == VAR_1)
 {
  VAR_7 = 12;
  if (VAR_6 - VAR_5 < 12)
   FUNC_0(VAR_3, VAR_2, "premature end in mask header in bmp image");

  VAR_4->rmask = FUNC_1(VAR_5 + 0);
  VAR_4->gmask = FUNC_1(VAR_5 + 4);
  VAR_4->bmask = FUNC_1(VAR_5 + 8);
 }
 else if (VAR_4->compression == VAR_0)
 {
  VAR_7 = 16;
  if (VAR_6 - VAR_5 < 16)
   FUNC_0(VAR_3, VAR_2, "premature end in mask header in bmp image");


  VAR_4->rmask = FUNC_1(VAR_5 + 0);
  VAR_4->gmask = FUNC_1(VAR_5 + 4);
  VAR_4->bmask = FUNC_1(VAR_5 + 8);
 }

 return VAR_5 + VAR_7;
}
