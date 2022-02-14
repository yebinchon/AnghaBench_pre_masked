
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* name; } ;
struct TYPE_6__ {TYPE_1__ name; } ;
struct TYPE_5__ {scalar_t__ type_info; } ;
typedef TYPE_2__ STypeInfo ;
typedef TYPE_3__ SLF_ENUM ;



__attribute__((used)) static void FUNC_0(void *VAR_0, char **VAR_1) {
 STypeInfo *VAR_2 = (STypeInfo *) VAR_0;
 SLF_ENUM *VAR_3 = (SLF_ENUM *)VAR_2->type_info;

 *VAR_1 = VAR_3->name.name;
}
