
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_3__ {unsigned short len; int name; } ;
typedef TYPE_1__ nfs41_component ;
typedef scalar_t__ bool_t ;
typedef int XDR ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,char**,scalar_t__*,int ) ;

__attribute__((used)) static bool_t FUNC_1(
    XDR *VAR_2,
    nfs41_component *VAR_3)
{
    bool_t VAR_4;
    uint32_t VAR_5;

    VAR_4 = FUNC_0(VAR_2, (char **)&VAR_3->name, &VAR_5, VAR_1);
    VAR_3->len = (VAR_4 == VAR_0) ? 0 : (unsigned short)VAR_5;
    return VAR_4;
}
