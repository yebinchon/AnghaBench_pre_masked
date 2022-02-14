
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mapped_size; int * mapped_address; } ;
typedef TYPE_1__ dsm_segment ;
typedef int Size ;


 int FUNC_0 (int ) ;

Size
FUNC_1(dsm_segment *VAR_0)
{
 FUNC_0(VAR_0->mapped_address != ((void*)0));
 return VAR_0->mapped_size;
}
