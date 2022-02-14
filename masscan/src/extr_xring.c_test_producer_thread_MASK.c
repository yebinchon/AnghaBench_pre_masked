
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct XRing {int dummy; } ;
struct Test {int producer_done; int producer_started; struct XRing* xring; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int) ;
 scalar_t__ FUNC_1 (struct XRing*,unsigned int) ;

__attribute__((used)) static void
FUNC_2(void *VAR_1)
{
    struct Test *VAR_2 = (struct Test *)VAR_1;
    unsigned VAR_3 = 1000;
    struct XRing *VAR_4 = VAR_2->xring;

    FUNC_0(&VAR_2->producer_started, 1);
    while (VAR_3) {
        while (FUNC_1(VAR_4, VAR_3) == VAR_0)
            ;
        VAR_3--;
    }
    FUNC_0(&VAR_2->producer_done, 1);
}
