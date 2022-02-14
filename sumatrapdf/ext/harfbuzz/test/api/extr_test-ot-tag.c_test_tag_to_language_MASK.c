
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int hb_tag_t ;
typedef scalar_t__ hb_language_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,char const*,char const*) ;
 scalar_t__ FUNC_2 (char const*,int) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (char const*,int) ;

__attribute__((used)) static void
FUNC_5 (const char *VAR_0, const char *VAR_1)
{
  hb_language_t VAR_2 = FUNC_2 (VAR_1, -1);
  hb_tag_t VAR_3 = FUNC_4 (VAR_0, -1);

  FUNC_1 ("Testing tag %s -> language %s", VAR_0, VAR_1);

  FUNC_0 (VAR_2 == FUNC_3 (VAR_3));
}
