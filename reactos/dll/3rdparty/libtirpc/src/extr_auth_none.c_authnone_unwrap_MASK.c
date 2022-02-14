
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int (* xdrproc_t ) (int *,int ) ;
typedef int u_int ;
typedef int caddr_t ;
typedef int XDR ;
typedef int AUTH ;


 int FUNC_0 (int *,int ) ;

__attribute__((used)) static int
FUNC_1(AUTH *VAR_0, XDR *VAR_1, xdrproc_t VAR_2, caddr_t VAR_3, u_int VAR_4)
{
    return ((*VAR_2)(VAR_1, VAR_3));
}
