
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct info {int gif89a; } ;
typedef int fz_context ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,char*) ;
 scalar_t__ FUNC_1 (unsigned char const*,char*,int) ;

__attribute__((used)) static const unsigned char *
FUNC_2(fz_context *VAR_1, struct info *VAR_2, const unsigned char *VAR_3, const unsigned char *VAR_4)
{
 if (VAR_4 - VAR_3 < 6)
  FUNC_0(VAR_1, VAR_0, "premature end in header in gif image");

 if (FUNC_1(&VAR_3[0], "GIF", 3))
  FUNC_0(VAR_1, VAR_0, "invalid signature in gif image");
 if (FUNC_1(&VAR_3[3], "87a", 3) && FUNC_1(&VAR_3[3], "89a", 3))
  FUNC_0(VAR_1, VAR_0, "unsupported version in gif image");

 VAR_2->gif89a = !FUNC_1(VAR_3, "GIF89a", 6);

 return VAR_3 + 6;
}
