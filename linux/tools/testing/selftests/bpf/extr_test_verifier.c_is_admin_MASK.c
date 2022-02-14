
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cap_value_t ;
typedef int cap_t ;
typedef scalar_t__ cap_flag_value_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int const,int ,scalar_t__*) ;
 int FUNC_3 () ;
 int FUNC_4 (char*) ;

__attribute__((used)) static bool FUNC_5(void)
{
 cap_t VAR_5;
 cap_flag_value_t VAR_6 = VAR_0;
 const cap_value_t VAR_7 = VAR_4;







 VAR_5 = FUNC_3();
 if (!VAR_5) {
  FUNC_4("cap_get_proc");
  return 0;
 }
 if (FUNC_2(VAR_5, VAR_7, VAR_1, &VAR_6))
  FUNC_4("cap_get_flag");
 if (FUNC_1(VAR_5))
  FUNC_4("cap_free");
 return (VAR_6 == VAR_2);
}
