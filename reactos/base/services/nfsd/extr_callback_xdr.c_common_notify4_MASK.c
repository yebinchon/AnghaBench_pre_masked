
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct notify4 {int len; int list; int mask; } ;
typedef int bool_t ;
typedef int XDR ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (int *,int *,int *,int ) ;

__attribute__((used)) static bool_t FUNC_2(XDR *VAR_1, struct notify4 *VAR_2)
{
    return FUNC_0(VAR_1, &VAR_2->mask)
        && FUNC_1(VAR_1, &VAR_2->list, &VAR_2->len, VAR_0);
}
