
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ pcre_uchar ;
typedef int BOOL ;


 scalar_t__ const VAR_0 ;
 scalar_t__ const VAR_1 ;
 scalar_t__ const VAR_2 ;
 scalar_t__ const VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static BOOL
FUNC_0(const pcre_uchar *VAR_6, const pcre_uchar **VAR_7)
{
pcre_uchar VAR_8;
VAR_8 = *(++VAR_6);
for (++VAR_6; *VAR_6 != VAR_2; VAR_6++)
  {
  if (*VAR_6 == VAR_0 &&
      (VAR_6[1] == VAR_3 ||
       VAR_6[1] == VAR_0))
    VAR_6++;
  else if ((*VAR_6 == VAR_1 && VAR_6[1] == VAR_8) ||
            *VAR_6 == VAR_3) return VAR_4;
  else if (*VAR_6 == VAR_8 && VAR_6[1] == VAR_3)
    {
    *VAR_7 = VAR_6;
    return VAR_5;
    }
  }
return VAR_4;
}
