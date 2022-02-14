
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {void* memidDestructor; void* memidConstructor; } ;
struct TYPE_11__ {int * lpVtbl; } ;
struct TYPE_10__ {int * lpVtbl; } ;
struct TYPE_9__ {int * lpVtbl; } ;
struct TYPE_13__ {int hreftype; int * pcustdata_list; int custdata_list; TYPE_4__ typeattr; scalar_t__ ref; TYPE_3__ ICreateTypeInfo2_iface; TYPE_2__ ITypeComp_iface; TYPE_1__ ITypeInfo2_iface; } ;
typedef TYPE_5__ ITypeInfoImpl ;


 int VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 (char*,TYPE_5__*) ;
 TYPE_5__* FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static ITypeInfoImpl* FUNC_3(void)
{
    ITypeInfoImpl *VAR_4;

    VAR_4 = FUNC_1(sizeof(ITypeInfoImpl));
    if (VAR_4)
    {
      VAR_4->ITypeInfo2_iface.lpVtbl = &VAR_3;
      VAR_4->ITypeComp_iface.lpVtbl = &VAR_2;
      VAR_4->ICreateTypeInfo2_iface.lpVtbl = &VAR_0;
      VAR_4->ref = 0;
      VAR_4->hreftype = -1;
      VAR_4->typeattr.memidConstructor = VAR_1;
      VAR_4->typeattr.memidDestructor = VAR_1;
      VAR_4->pcustdata_list = &VAR_4->custdata_list;
      FUNC_2(VAR_4->pcustdata_list);
    }
    FUNC_0("(%p)\n", VAR_4);
    return VAR_4;
}
