
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct info {int lct_entries; int lct; } ;
typedef int fz_context ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int ,char*) ;
 int FUNC_2 (int ,unsigned char const*,int) ;

__attribute__((used)) static const unsigned char *
FUNC_3(fz_context *VAR_1, struct info *VAR_2, const unsigned char *VAR_3, const unsigned char *VAR_4)
{
 if (VAR_4 - VAR_3 < VAR_2->lct_entries * 3)
  FUNC_1(VAR_1, VAR_0, "premature end in local color table in gif image");

 VAR_2->lct = FUNC_0(VAR_1, VAR_2->lct_entries * 3);
 FUNC_2(VAR_2->lct, VAR_3, VAR_2->lct_entries * 3);

 return VAR_3 + VAR_2->lct_entries * 3;
}
