
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32 ;
struct TYPE_2__ {scalar_t__ utf1; scalar_t__ utf2; } ;
typedef TYPE_1__ pg_utf_to_local_combined ;



__attribute__((used)) static int
FUNC_0(const void *VAR_0, const void *VAR_1)
{
 uint32 VAR_2,
    VAR_3,
    VAR_4,
    VAR_5;

 VAR_2 = *(const uint32 *) VAR_0;
 VAR_3 = *((const uint32 *) VAR_0 + 1);
 VAR_4 = ((const pg_utf_to_local_combined *) VAR_1)->utf1;
 VAR_5 = ((const pg_utf_to_local_combined *) VAR_1)->utf2;
 return (VAR_2 > VAR_4 || (VAR_2 == VAR_4 && VAR_3 > VAR_5)) ? 1 : ((VAR_2 == VAR_4 && VAR_3 == VAR_5) ? 0 : -1);
}
