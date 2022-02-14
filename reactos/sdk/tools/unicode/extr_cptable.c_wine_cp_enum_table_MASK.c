
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union cptable {int dummy; } cptable ;


 unsigned int VAR_0 ;
 union cptable const** VAR_1 ;

const union cptable *FUNC_0( unsigned int VAR_2 )
{
    if (VAR_2 >= VAR_0) return ((void*)0);
    return VAR_1[VAR_2];
}
