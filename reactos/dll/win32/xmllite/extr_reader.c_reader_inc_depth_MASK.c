
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ depth; scalar_t__ max_depth; } ;
typedef TYPE_1__ xmlreader ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static HRESULT FUNC_0(xmlreader *VAR_2)
{
    return (++VAR_2->depth >= VAR_2->max_depth && VAR_2->max_depth) ? VAR_0 : VAR_1;
}
