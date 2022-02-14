
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct info {int dummy; } ;
typedef int fz_context ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,char*) ;
 unsigned char const* FUNC_1 (int *,struct info*,unsigned char const*,unsigned char const*,int *) ;

__attribute__((used)) static const unsigned char*
FUNC_2(fz_context *VAR_1, struct info *VAR_2, const unsigned char *VAR_3, const unsigned char *VAR_4)
{
 if (VAR_4 - VAR_3 < 15)
  FUNC_0(VAR_1, VAR_0, "premature end in plain text extension in gif image");
 if (VAR_3[2] != 0x0c)
  FUNC_0(VAR_1, VAR_0, "out of range plain text extension block size in gif image");
 return FUNC_1(VAR_1, VAR_2, VAR_3 + 15, VAR_4, ((void*)0));
}
