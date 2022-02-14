
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cap_value_t ;
typedef int cap_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int ,int ,int,int const*,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static int FUNC_5(bool VAR_4)
{
 cap_t VAR_5;
 const cap_value_t VAR_6 = VAR_3;
 int VAR_7 = -1;

 VAR_5 = FUNC_1();
 if (!VAR_5) {
  FUNC_4("cap_get_proc");
  return -1;
 }
 if (FUNC_2(VAR_5, VAR_1, 1, &VAR_6,
    VAR_4 ? VAR_2 : VAR_0)) {
  FUNC_4("cap_set_flag");
  goto out;
 }
 if (FUNC_3(VAR_5)) {
  FUNC_4("cap_set_proc");
  goto out;
 }
 VAR_7 = 0;
out:
 if (FUNC_0(VAR_5))
  FUNC_4("cap_free");
 return VAR_7;
}
