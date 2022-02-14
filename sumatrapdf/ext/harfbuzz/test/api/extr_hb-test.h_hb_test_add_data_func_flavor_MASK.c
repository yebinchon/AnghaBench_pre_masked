
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int hb_test_data_func_t ;
typedef int gconstpointer ;


 int FUNC_0 (char*) ;
 char* FUNC_1 (char*,char const*,char const*) ;
 int FUNC_2 (char*,int ,int ) ;

__attribute__((used)) static inline void
FUNC_3 (const char *VAR_0,
         const char *VAR_1,
         gconstpointer VAR_2,
         hb_test_data_func_t VAR_3)
{
  char *VAR_4 = FUNC_1 ("%s/%s", VAR_0, VAR_1);
  FUNC_2 (VAR_4, VAR_2, VAR_3);
  FUNC_0 (VAR_4);
}
