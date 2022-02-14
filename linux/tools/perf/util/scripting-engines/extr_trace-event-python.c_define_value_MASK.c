
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
 int FUNC_4 (unsigned long long) ;
 int FUNC_5 (char const*) ;
 unsigned long long FUNC_6 (char const*) ;
 int FUNC_7 (char const*,int *) ;

__attribute__((used)) static void FUNC_8(enum tep_print_arg_type VAR_1,
    const char *VAR_2,
    const char *VAR_3,
    const char *VAR_4,
    const char *VAR_5)
{
 const char *VAR_6 = "define_flag_value";
 PyObject *VAR_7;
 unsigned long long VAR_8;
 unsigned VAR_9 = 0;

 if (VAR_1 == VAR_0)
  VAR_6 = "define_symbolic_value";

 VAR_7 = FUNC_0(4);
 if (!VAR_7)
  FUNC_3("couldn't create Python tuple");

 VAR_8 = FUNC_6(VAR_4);

 FUNC_1(VAR_7, VAR_9++, FUNC_5(VAR_2));
 FUNC_1(VAR_7, VAR_9++, FUNC_5(VAR_3));
 FUNC_1(VAR_7, VAR_9++, FUNC_4(VAR_8));
 FUNC_1(VAR_7, VAR_9++, FUNC_5(VAR_5));

 FUNC_7(VAR_6, VAR_7);

 FUNC_2(VAR_7);
}
