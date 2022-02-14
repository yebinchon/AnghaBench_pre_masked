
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct info {void* offset; void* filesize; } ;
typedef int fz_context ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,char*) ;
 scalar_t__ FUNC_1 (unsigned char const*,char*,int) ;
 void* FUNC_2 (unsigned char const*) ;

__attribute__((used)) static const unsigned char *
FUNC_3(fz_context *VAR_1, struct info *VAR_2, const unsigned char *VAR_3, const unsigned char *VAR_4)
{
 if (VAR_4 - VAR_3 < 14)
  FUNC_0(VAR_1, VAR_0, "premature end in file header in bmp image");

 if (FUNC_1(&VAR_3[0], "BM", 2))
  FUNC_0(VAR_1, VAR_0, "invalid signature in bmp image");

 VAR_2->filesize = FUNC_2(VAR_3 + 2);
 VAR_2->offset = FUNC_2(VAR_3 + 10);

 return VAR_3 + 14;
}
