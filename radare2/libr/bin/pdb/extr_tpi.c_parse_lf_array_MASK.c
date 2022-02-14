
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ name_or_val; } ;
struct TYPE_4__ {int pad; TYPE_2__ size; int index_type; int element_type; } ;
typedef TYPE_1__ SLF_ARRAY ;


 int FUNC_0 (int ,unsigned int,unsigned char*,unsigned int) ;
 int FUNC_1 (unsigned int,unsigned int,int ,unsigned char*,int ) ;
 int FUNC_2 (unsigned int,unsigned int,int ,unsigned char*,int ) ;
 int FUNC_3 (TYPE_2__*,unsigned char*,unsigned int*,unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_4(SLF_ARRAY *VAR_2, unsigned char *VAR_3, unsigned int *VAR_4, unsigned int VAR_5)
{
 unsigned int VAR_6 = *VAR_4;
 unsigned int VAR_7 = 0;

 VAR_2->size.name_or_val = 0;

 FUNC_2(*VAR_4, VAR_5, VAR_2->element_type, VAR_3, VAR_0);
 FUNC_2(*VAR_4, VAR_5, VAR_2->index_type, VAR_3, VAR_0);

 VAR_7 = *VAR_4;
 FUNC_3(&VAR_2->size, VAR_3, VAR_4, VAR_5);
 VAR_3 += (*VAR_4 - VAR_7);

 FUNC_1(*VAR_4, VAR_5, VAR_2->pad, VAR_3, VAR_1);
 FUNC_0(VAR_2->pad, *VAR_4, VAR_3, VAR_5);




 return *VAR_4 - VAR_6;
}
