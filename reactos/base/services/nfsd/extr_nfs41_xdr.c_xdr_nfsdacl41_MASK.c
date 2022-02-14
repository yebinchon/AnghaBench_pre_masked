
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int xdrproc_t ;
struct TYPE_3__ {int count; int aces; int flag; } ;
typedef TYPE_1__ nfsacl41 ;
typedef int nfsace4 ;
typedef int bool_t ;
typedef int XDR ;


 int VAR_0 ;
 int FUNC_0 (int *,char**,int *,int,int,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static bool_t FUNC_2(
    XDR *VAR_2,
    nfsacl41 *VAR_3)
{
    if (!FUNC_1(VAR_2, &VAR_3->flag))
        return VAR_0;

    return FUNC_0(VAR_2, (char**)&VAR_3->aces, &VAR_3->count,
        32, sizeof(nfsace4), (xdrproc_t)VAR_1);
}
