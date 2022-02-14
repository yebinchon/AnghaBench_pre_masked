
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ name; } ;
struct TYPE_4__ {TYPE_2__ name; int index; int pad; } ;
typedef TYPE_1__ SLF_NESTTYPE ;


 int FUNC_0 (unsigned int,unsigned int,int ,unsigned char*,int ) ;
 int FUNC_1 (unsigned int,unsigned int,int ,unsigned char*,int ) ;
 int FUNC_2 (TYPE_2__*,unsigned char*,unsigned int*,unsigned int) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_3(SLF_NESTTYPE *VAR_1, unsigned char *VAR_2, unsigned int *VAR_3, unsigned int VAR_4)
{
 unsigned int VAR_5 = *VAR_3;

 VAR_1->name.name = 0;

 FUNC_0(*VAR_3, VAR_4, VAR_1->pad, VAR_2, VAR_0);
 FUNC_1(*VAR_3, VAR_4, VAR_1->index, VAR_2, VAR_0);

 FUNC_2(&VAR_1->name, VAR_2, VAR_3, VAR_4);


 return *VAR_3 - VAR_5;
}
