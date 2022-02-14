
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uchar ;
struct TYPE_3__ {int codepage; } ;
typedef TYPE_1__ csconv_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int const) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(csconv_t *VAR_1, const uchar *VAR_2, int VAR_3)
{
    int VAR_4 = FUNC_0(VAR_1->codepage, VAR_2[0]) ? 2 : 1;
    if (VAR_3 < VAR_4)
        return FUNC_1(VAR_0);
    return VAR_4;
}
