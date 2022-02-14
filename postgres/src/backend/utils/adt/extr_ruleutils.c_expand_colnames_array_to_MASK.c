
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int num_cols; char** colnames; } ;
typedef TYPE_1__ deparse_columns ;


 int FUNC_0 (char**,int ,int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (char**,int) ;

__attribute__((used)) static void
FUNC_3(deparse_columns *VAR_0, int VAR_1)
{
 if (VAR_1 > VAR_0->num_cols)
 {
  if (VAR_0->colnames == ((void*)0))
   VAR_0->colnames = (char **) FUNC_1(VAR_1 * sizeof(char *));
  else
  {
   VAR_0->colnames = (char **) FUNC_2(VAR_0->colnames,
               VAR_1 * sizeof(char *));
   FUNC_0(VAR_0->colnames + VAR_0->num_cols, 0,
       (VAR_1 - VAR_0->num_cols) * sizeof(char *));
  }
  VAR_0->num_cols = VAR_1;
 }
}
