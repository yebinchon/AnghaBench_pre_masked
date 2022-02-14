
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_4__ {int type; int length; } ;
typedef TYPE_1__ ASN1_ENUMERATED ;


 int FUNC_0 (scalar_t__*,TYPE_1__ const*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

long FUNC_1(const ASN1_ENUMERATED *VAR_4)
{
    int VAR_5;
    int64_t VAR_6;
    if (VAR_4 == ((void*)0))
        return 0;
    if ((VAR_4->type & ~VAR_3) != VAR_2)
        return -1;
    if (VAR_4->length > (int)sizeof(long))
        return 0xffffffffL;
    VAR_5 = FUNC_0(&VAR_6, VAR_4);
    if (VAR_5 == 0)
        return -1;
    if (VAR_6 > VAR_0 || VAR_6 < VAR_1)
        return -1;
    return (long)VAR_6;
}
