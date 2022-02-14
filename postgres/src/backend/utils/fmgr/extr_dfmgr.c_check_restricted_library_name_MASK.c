
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,char const*) ;
 int * FUNC_3 (char const*) ;
 scalar_t__ FUNC_4 (char const*,char*,int) ;

__attribute__((used)) static void
FUNC_5(const char *VAR_2)
{
 if (FUNC_4(VAR_2, "$libdir/plugins/", 16) != 0 ||
  FUNC_3(VAR_2 + 16) != ((void*)0))
  FUNC_0(VAR_1,
    (FUNC_1(VAR_0),
     FUNC_2("access to library \"%s\" is not allowed",
      VAR_2)));
}
