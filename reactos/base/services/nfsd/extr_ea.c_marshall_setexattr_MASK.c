
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_6__ {int ctime; } ;
typedef TYPE_2__ setexattr_upcall_args ;
struct TYPE_5__ {TYPE_2__ setexattr; } ;
struct TYPE_7__ {TYPE_1__ args; } ;
typedef TYPE_3__ nfs41_upcall ;


 int FUNC_0 (unsigned char**,int *,int *,int) ;

__attribute__((used)) static int FUNC_1(unsigned char *VAR_0, uint32_t *VAR_1, nfs41_upcall *VAR_2)
{
    setexattr_upcall_args *VAR_3 = &VAR_2->args.setexattr;
    return FUNC_0(&VAR_0, VAR_1, &VAR_3->ctime, sizeof(VAR_3->ctime));
}
