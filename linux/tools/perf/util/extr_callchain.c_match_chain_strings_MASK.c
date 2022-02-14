
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum match_result { ____Placeholder_match_result } match_result ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char const*,char const*) ;

__attribute__((used)) static enum match_result FUNC_1(const char *VAR_4,
          const char *VAR_5)
{
 enum match_result VAR_6 = VAR_0;
 int VAR_7;

 if (VAR_4 && VAR_5)
  VAR_7 = FUNC_0(VAR_4, VAR_5);
 else if (!VAR_4 && VAR_5)
  VAR_7 = 1;
 else if (VAR_4 && !VAR_5)
  VAR_7 = -1;
 else
  return VAR_1;

 if (VAR_7 != 0)
  VAR_6 = VAR_7 < 0 ? VAR_3 : VAR_2;

 return VAR_6;
}
