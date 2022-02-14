
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int codepage; } ;
union cptable {TYPE_1__ info; } ;



__attribute__((used)) static int FUNC_0( const void *VAR_0, const void *VAR_1 )
{
    return *(const unsigned int *)VAR_0 - (*(const union cptable *const *)VAR_1)->info.codepage;
}
