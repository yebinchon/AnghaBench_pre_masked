
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clnt_ops {int cl_control; int cl_destroy; int cl_freeres; int cl_geterr; int cl_abort; int * cl_call; } ;
typedef int sigset_t ;
typedef int mutex_t ;


 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int *,int *) ;

__attribute__((used)) static struct clnt_ops *
FUNC_4()
{
 static struct clnt_ops VAR_7;
 extern mutex_t VAR_8;

 sigset_t VAR_9, VAR_10;



 FUNC_2(&VAR_10);
 FUNC_3(VAR_0, &VAR_10, &VAR_9);



 FUNC_0(&VAR_8);
 if (VAR_7.cl_call == ((void*)0)) {
  VAR_7.cl_call = VAR_2;
  VAR_7.cl_abort = VAR_1;
  VAR_7.cl_geterr = VAR_6;
  VAR_7.cl_freeres = VAR_5;
  VAR_7.cl_destroy = VAR_4;
  VAR_7.cl_control = VAR_3;
 }
 FUNC_1(&VAR_8);

 return (&VAR_7);
}
