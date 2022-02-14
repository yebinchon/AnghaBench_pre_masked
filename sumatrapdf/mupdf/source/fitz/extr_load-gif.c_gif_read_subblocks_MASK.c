
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct info {int dummy; } ;
typedef int fz_context ;
typedef int fz_buffer ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,unsigned char const*,int) ;
 int FUNC_1 (int *,int ,char*) ;

__attribute__((used)) static const unsigned char *
FUNC_2(fz_context *VAR_1, struct info *VAR_2, const unsigned char *VAR_3, const unsigned char *VAR_4, fz_buffer *VAR_5)
{
 int VAR_6;

 do
 {
  if (VAR_4 - VAR_3 < 1)
   FUNC_1(VAR_1, VAR_0, "premature end in data subblocks in gif image");
  VAR_6 = *VAR_3;
  VAR_3 += 1;

  if (VAR_6 > 0)
  {
   if (VAR_4 - VAR_3 < VAR_6)
    FUNC_1(VAR_1, VAR_0, "premature end in data subblock in gif image");
   if (VAR_5)
    FUNC_0(VAR_1, VAR_5, VAR_3, VAR_6);
   VAR_3 += VAR_6;
  }
 } while (VAR_6 > 0);

 return VAR_3;
}
