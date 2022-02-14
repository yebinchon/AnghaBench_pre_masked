
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sectioncheck {int symbol_white_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (char const*,int ) ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (char const*,char*) ;
 scalar_t__ FUNC_2 (char const*,char*) ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_3(const struct sectioncheck *VAR_8,
       const char *VAR_9, const char *VAR_10,
       const char *VAR_11, const char *VAR_12)
{

 if (FUNC_0(VAR_11, VAR_2) &&
     FUNC_0(VAR_9, VAR_0) &&
     FUNC_2(VAR_10, "__param"))
  return 0;


 if (FUNC_1(VAR_11, ".init.text") == 0 &&
     FUNC_0(VAR_9, VAR_0) &&
     FUNC_2(VAR_10, "__param_ops_"))
  return 0;


 if (FUNC_0(VAR_11, VAR_3) &&
     FUNC_0(VAR_9, VAR_0) &&
     FUNC_0(VAR_10, VAR_8->symbol_white_list))
  return 0;


 if (FUNC_0(VAR_9, VAR_1) &&
     FUNC_0(VAR_11, VAR_4))
  return 0;


 if (FUNC_0(VAR_12, VAR_5))
  return 0;


 if (FUNC_0(VAR_9, VAR_7) &&
     FUNC_0(VAR_11, VAR_4) &&
     FUNC_0(VAR_10, VAR_6))
  return 0;


 if (FUNC_2(VAR_10, ".L"))
  return 0;

 return 1;
}
