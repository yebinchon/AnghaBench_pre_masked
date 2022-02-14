
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netpath_vars {int * netpath; int * netpath_start; int * nc_handlep; int * ncp_list; int valid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct netpath_vars*) ;
 char* FUNC_2 (int ) ;
 int * FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int * FUNC_5 () ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (char*) ;

void *
FUNC_8()
{

    struct netpath_vars *VAR_2;
    char *VAR_3;





    if ((VAR_2 =
 (struct netpath_vars *)FUNC_3(sizeof (struct netpath_vars))) == ((void*)0)) {
 return (((void*)0));
    }
    if ((VAR_2->nc_handlep = FUNC_5()) == ((void*)0)) {

 return (((void*)0));
    }
    VAR_2->valid = VAR_1;
    VAR_2->ncp_list = ((void*)0);
    if ((VAR_3 = FUNC_2(VAR_0)) == ((void*)0)) {
 VAR_2->netpath = ((void*)0);
    } else {
 (void) FUNC_0(VAR_2->nc_handlep);
 VAR_2->nc_handlep = ((void*)0);
 if ((VAR_2->netpath = FUNC_3(FUNC_7(VAR_3)+1)) == ((void*)0)) {
     FUNC_1(VAR_2);
     return (((void*)0));
 } else {
     (void) FUNC_6(VAR_2->netpath, VAR_3);
 }
    }
    VAR_2->netpath_start = VAR_2->netpath;
    return ((void *)VAR_2);
}
