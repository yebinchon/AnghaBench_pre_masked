
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32 ;
struct TYPE_2__ {scalar_t__ code; } ;
typedef TYPE_1__ pg_local_to_utf_combined ;



__attribute__((used)) static int
FUNC_0(const void *VAR_0, const void *VAR_1)
{
 uint32 VAR_2,
    VAR_3;

 VAR_2 = *(const uint32 *) VAR_0;
 VAR_3 = ((const pg_local_to_utf_combined *) VAR_1)->code;
 return (VAR_2 > VAR_3) ? 1 : ((VAR_2 == VAR_3) ? 0 : -1);
}
