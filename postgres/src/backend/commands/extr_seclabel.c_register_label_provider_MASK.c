
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int check_object_relabel_type ;
struct TYPE_4__ {int hook; int provider_name; } ;
typedef int MemoryContext ;
typedef TYPE_1__ LabelProvider ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,TYPE_1__*) ;
 TYPE_1__* FUNC_2 (int) ;
 int FUNC_3 (char const*) ;

void
FUNC_4(const char *VAR_2, check_object_relabel_type VAR_3)
{
 LabelProvider *VAR_4;
 MemoryContext VAR_5;

 VAR_5 = FUNC_0(VAR_0);
 VAR_4 = FUNC_2(sizeof(LabelProvider));
 VAR_4->provider_name = FUNC_3(VAR_2);
 VAR_4->hook = VAR_3;
 VAR_1 = FUNC_1(VAR_1, VAR_4);
 FUNC_0(VAR_5);
}
