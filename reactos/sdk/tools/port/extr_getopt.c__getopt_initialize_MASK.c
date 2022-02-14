
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _getopt_data {int optind; int __first_nonopt; int __last_nonopt; int __initialized; void* __ordering; int * __nextchar; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int FUNC_0 (char*) ;

__attribute__((used)) static const char *
FUNC_1 (int VAR_3,
      char **VAR_4, const char *VAR_5,
      struct _getopt_data *VAR_6, int VAR_7)
{



  if (VAR_6->optind == 0)
    VAR_6->optind = 1;

  VAR_6->__first_nonopt = VAR_6->__last_nonopt = VAR_6->optind;
  VAR_6->__nextchar = ((void*)0);


  if (VAR_5[0] == '-')
    {
      VAR_6->__ordering = VAR_2;
      ++VAR_5;
    }
  else if (VAR_5[0] == '+')
    {
      VAR_6->__ordering = VAR_1;
      ++VAR_5;
    }
  else if (VAR_7 || !!FUNC_0 ("POSIXLY_CORRECT"))
    VAR_6->__ordering = VAR_1;
  else
    VAR_6->__ordering = VAR_0;

  VAR_6->__initialized = 1;
  return VAR_5;
}
