
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum tep_print_arg_type { ____Placeholder_tep_print_arg_type } tep_print_arg_type ;
typedef int PyObject ;


 int * FUNC_0 (int) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (char const*) ;
 int FUNC_5 (char const*,int *) ;

__attribute__((used)) static void FUNC_6(enum tep_print_arg_type VAR_2,
    const char *VAR_3,
    const char *VAR_4,
    const char *VAR_5)
{
 const char *VAR_6 = "define_flag_field";
 PyObject *VAR_7;
 unsigned VAR_8 = 0;

 if (VAR_2 == VAR_1)
  VAR_6 = "define_symbolic_field";

 if (VAR_2 == VAR_0)
  VAR_7 = FUNC_0(3);
 else
  VAR_7 = FUNC_0(2);
 if (!VAR_7)
  FUNC_3("couldn't create Python tuple");

 FUNC_1(VAR_7, VAR_8++, FUNC_4(VAR_3));
 FUNC_1(VAR_7, VAR_8++, FUNC_4(VAR_4));
 if (VAR_2 == VAR_0)
  FUNC_1(VAR_7, VAR_8++, FUNC_4(VAR_5));

 FUNC_5(VAR_6, VAR_7);

 FUNC_2(VAR_7);
}
