
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clnt_ops {int cl_control; int cl_destroy; int cl_freeres; int cl_geterr; int cl_abort; int * cl_call; } ;
typedef int mutex_t ;


 int VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static struct clnt_ops *
FUNC_2()
{
 static struct clnt_ops VAR_6;
 extern mutex_t VAR_7;



 FUNC_0(&VAR_7);
 if (VAR_6.cl_call == ((void*)0)) {
  VAR_6.cl_call = VAR_1;
  VAR_6.cl_abort = VAR_0;
  VAR_6.cl_geterr = VAR_5;
  VAR_6.cl_freeres = VAR_4;
  VAR_6.cl_destroy = VAR_3;
  VAR_6.cl_control = VAR_2;
 }
 FUNC_1(&VAR_7);
 return (&VAR_6);
}
