
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct key_match_data {char* raw_data; } ;
struct key {char* description; } ;


 int FUNC_0 (char*,char const*,char const*) ;
 int FUNC_1 (char*,int) ;
 scalar_t__ FUNC_2 (char const*,char const*) ;
 int FUNC_3 (char const*) ;
 scalar_t__ FUNC_4 (char const*,char const*,int) ;

__attribute__((used)) static bool FUNC_5(const struct key *VAR_0,
        const struct key_match_data *VAR_1)
{
 int VAR_2, VAR_3, VAR_4 = 0;
 const char *VAR_5 = VAR_0->description, *VAR_6 = VAR_1->raw_data;

 FUNC_0("%s,%s", VAR_5, VAR_6);

 if (!VAR_5 || !VAR_6)
  goto no_match;

 if (FUNC_2(VAR_5, VAR_6) == 0)
  goto matched;

 VAR_2 = FUNC_3(VAR_5);
 VAR_3 = FUNC_3(VAR_6);
 if (VAR_2 <= 0 || VAR_3 <= 0)
  goto no_match;
 if (VAR_5[VAR_2 - 1] == '.')
  VAR_2--;
 if (VAR_6[VAR_3 - 1] == '.')
  VAR_3--;
 if (VAR_2 != VAR_3 || FUNC_4(VAR_5, VAR_6, VAR_2) != 0)
  goto no_match;

matched:
 VAR_4 = 1;
no_match:
 FUNC_1(" = %d", VAR_4);
 return VAR_4;
}
