
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* mono; } ;
struct TYPE_5__ {int * (* mono_runtime_invoke ) (int *,int *,void**,int *) ;int * (* mono_class_get_method_from_name ) (int *,char*,int ) ;int * (* mono_class_from_name ) (int *,char*,char*) ;int * (* mono_assembly_get_image ) (int *) ;int * (* mono_domain_assembly_open ) (int *,char*) ;int (* mono_thread_attach ) (int *) ;} ;
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
 int FUNC_1 (int *,int *,void**) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_2__*,int *,int **) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int *,char*) ;
 int * FUNC_7 (int *) ;
 int * FUNC_8 (int *,char*,char*) ;
 int * FUNC_9 (int *,char*,int ) ;
 int * FUNC_10 (int *,int *,void**,int *) ;

__attribute__((used)) static HRESULT FUNC_11(RuntimeHost *VAR_2, MonoDomain *VAR_3, IUnknown **VAR_4)
{
    HRESULT VAR_5;
    void *VAR_6[1];
    MonoAssembly *VAR_7;
    MonoImage *VAR_8;
    MonoClass *VAR_9;
    MonoMethod *VAR_10;
    MonoObject *VAR_11;
    IUnknown *VAR_12;

    VAR_2->mono->mono_thread_attach(VAR_3);

    VAR_7 = VAR_2->mono->mono_domain_assembly_open(VAR_3, "mscorlib");
    if (!VAR_7)
    {
        FUNC_0("Cannot load mscorlib\n");
        return VAR_0;
    }

    VAR_8 = VAR_2->mono->mono_assembly_get_image(VAR_7);
    if (!VAR_8)
    {
        FUNC_0("Couldn't get assembly image\n");
        return VAR_0;
    }

    VAR_9 = VAR_2->mono->mono_class_from_name(VAR_8, "System", "AppDomain");
    if (!VAR_9)
    {
        FUNC_0("Couldn't get class from image\n");
        return VAR_0;
    }

    VAR_10 = VAR_2->mono->mono_class_get_method_from_name(VAR_9, "get_CurrentDomain", 0);
    if (!VAR_10)
    {
        FUNC_0("Couldn't get method from class\n");
        return VAR_0;
    }

    VAR_6[0] = ((void*)0);
    VAR_11 = VAR_2->mono->mono_runtime_invoke(VAR_10, ((void*)0), VAR_6, ((void*)0));
    if (!VAR_11)
    {
        FUNC_0("Couldn't get result pointer\n");
        return VAR_0;
    }

    VAR_5 = FUNC_3(VAR_2, VAR_11, &VAR_12);

    if (FUNC_4(VAR_5))
    {
        VAR_5 = FUNC_1(VAR_12, &VAR_1, (void**)VAR_4);

        FUNC_2(VAR_12);
    }

    return VAR_5;
}
