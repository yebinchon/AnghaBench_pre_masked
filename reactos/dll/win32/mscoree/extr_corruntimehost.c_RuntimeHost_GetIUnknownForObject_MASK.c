
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* mono; } ;
struct TYPE_4__ {scalar_t__ (* mono_object_unbox ) (int *) ;int * (* mono_runtime_invoke ) (int *,int *,void**,int *) ;int * (* mono_class_get_method_from_name ) (int *,char*,int) ;int * (* mono_class_from_name ) (int *,char*,char*) ;int * (* mono_assembly_get_image ) (int *) ;int * (* mono_domain_assembly_open ) (int *,char*) ;int * (* mono_object_get_domain ) (int *) ;} ;
typedef TYPE_2__ RuntimeHost ;
typedef int MonoObject ;
typedef int MonoMethod ;
typedef int MonoImage ;
typedef int MonoDomain ;
typedef int MonoClass ;
typedef int MonoAssembly ;
typedef int IUnknown ;
typedef int HRESULT ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_1 (int *) ;
 int * FUNC_2 (int *,char*) ;
 int * FUNC_3 (int *) ;
 int * FUNC_4 (int *,char*,char*) ;
 int * FUNC_5 (int *,char*,int) ;
 int * FUNC_6 (int *,int *,void**,int *) ;
 scalar_t__ FUNC_7 (int *) ;

HRESULT FUNC_8(RuntimeHost *VAR_2, MonoObject *VAR_3,
    IUnknown **VAR_4)
{
    MonoDomain *VAR_5;
    MonoAssembly *VAR_6;
    MonoImage *VAR_7;
    MonoClass *VAR_8;
    MonoMethod *VAR_9;
    MonoObject *VAR_10;
    void *VAR_11[2];

    VAR_5 = VAR_2->mono->mono_object_get_domain(VAR_3);

    VAR_6 = VAR_2->mono->mono_domain_assembly_open(VAR_5, "mscorlib");
    if (!VAR_6)
    {
        FUNC_0("Cannot load mscorlib\n");
        return VAR_0;
    }

    VAR_7 = VAR_2->mono->mono_assembly_get_image(VAR_6);
    if (!VAR_7)
    {
        FUNC_0("Couldn't get assembly image\n");
        return VAR_0;
    }

    VAR_8 = VAR_2->mono->mono_class_from_name(VAR_7, "System.Runtime.InteropServices", "Marshal");
    if (!VAR_8)
    {
        FUNC_0("Couldn't get class from image\n");
        return VAR_0;
    }

    VAR_9 = VAR_2->mono->mono_class_get_method_from_name(VAR_8, "GetIUnknownForObject", 1);
    if (!VAR_9)
    {
        FUNC_0("Couldn't get method from class\n");
        return VAR_0;
    }

    VAR_11[0] = VAR_3;
    VAR_11[1] = ((void*)0);
    VAR_10 = VAR_2->mono->mono_runtime_invoke(VAR_9, ((void*)0), VAR_11, ((void*)0));
    if (!VAR_10)
    {
        FUNC_0("Couldn't get result pointer\n");
        return VAR_0;
    }

    *VAR_4 = *(IUnknown**)VAR_2->mono->mono_object_unbox(VAR_10);
    if (!*VAR_4)
    {
        FUNC_0("GetIUnknownForObject returned 0\n");
        return VAR_0;
    }

    return VAR_1;
}
