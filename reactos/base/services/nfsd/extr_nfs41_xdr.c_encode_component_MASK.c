
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int name; int len; } ;
typedef TYPE_1__ nfs41_component ;
typedef int bool_t ;
typedef int XDR ;


 int VAR_0 ;
 int FUNC_0 (int *,char**,int *,int ) ;

__attribute__((used)) static bool_t FUNC_1(
    XDR *VAR_1,
    const nfs41_component *VAR_2)
{
    uint32_t VAR_3 = VAR_2->len;
    return FUNC_0(VAR_1, (char **)&VAR_2->name, &VAR_3, VAR_0);
}
