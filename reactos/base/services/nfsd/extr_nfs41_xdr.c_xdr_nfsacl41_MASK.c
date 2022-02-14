
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int xdrproc_t ;
struct TYPE_3__ {int count; int aces; } ;
typedef TYPE_1__ nfsacl41 ;
typedef int nfsace4 ;
typedef int bool_t ;
typedef int XDR ;


 int FUNC_0 (int *,char**,int *,int,int,int ) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static bool_t FUNC_1(
    XDR *VAR_1,
    nfsacl41 *VAR_2)
{
    return FUNC_0(VAR_1, (char**)&VAR_2->aces, &VAR_2->count,
        32, sizeof(nfsace4), (xdrproc_t)VAR_0);
}
