
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scripting_ops {int dummy; } ;


 int * FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char*,struct scripting_ops*) ;
 int * VAR_0 ;
 int FUNC_3 (int **) ;

__attribute__((used)) static void FUNC_4(struct scripting_ops *VAR_1)
{
 if (VAR_0 == ((void*)0))
  VAR_0 = FUNC_0(sizeof(*VAR_0));

       if (VAR_0 == ((void*)0) ||
    FUNC_2("Perl", VAR_1) ||
    FUNC_2("pl", VAR_1)) {
  FUNC_1("Error registering Perl script extension: disabling it\n");
  FUNC_3(&VAR_0);
 }
}
