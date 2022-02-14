
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stub_manager {TYPE_1__* apt; scalar_t__ refs; } ;
typedef scalar_t__ ULONG ;
struct TYPE_2__ {int cs; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,scalar_t__) ;

__attribute__((used)) static ULONG FUNC_3(struct stub_manager *VAR_0)
{
    ULONG VAR_1;

    FUNC_0(&VAR_0->apt->cs);
    VAR_1 = ++VAR_0->refs;
    FUNC_1(&VAR_0->apt->cs);

    FUNC_2("before %d\n", VAR_1 - 1);

    return VAR_1;
}
