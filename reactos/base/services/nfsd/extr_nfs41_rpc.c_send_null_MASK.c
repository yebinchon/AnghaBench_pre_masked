
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xdrproc_t ;
struct timeval {int member_0; int member_1; } ;
typedef enum clnt_stat { ____Placeholder_clnt_stat } clnt_stat ;
typedef int CLIENT ;


 int FUNC_0 (int *,int ,int ,int *,int ,int *,struct timeval) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static enum clnt_stat FUNC_1(CLIENT *VAR_1)
{
    struct timeval VAR_2 = {10, 100};

    return FUNC_0(VAR_1, 0,
                     (xdrproc_t)VAR_0, ((void*)0),
                     (xdrproc_t)VAR_0, ((void*)0), VAR_2);
}
