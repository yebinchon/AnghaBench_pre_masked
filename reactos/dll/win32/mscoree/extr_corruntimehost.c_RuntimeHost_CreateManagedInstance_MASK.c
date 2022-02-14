
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* mono; } ;
struct TYPE_5__ {int (* mono_runtime_object_init ) (int *) ;int * (* mono_object_new ) (int *,int *) ;int * (* mono_class_from_mono_type ) (int *) ;int * (* mono_reflection_type_from_name ) (char*,int *) ;int (* mono_thread_attach ) (int *) ;} ;
typedef TYPE_2__ RuntimeHost ;
typedef int MonoType ;
typedef int MonoObject ;
typedef int MonoDomain ;
typedef int MonoClass ;
typedef int LPCWSTR ;
typedef int HRESULT ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ,char*) ;
 int FUNC_3 (TYPE_2__*,int **) ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_2 ;
 char* FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (char*,int *) ;
 int * FUNC_9 (int *) ;
 int * FUNC_10 (int *,int *) ;
 int FUNC_11 (int *) ;

HRESULT FUNC_12(RuntimeHost *VAR_3, LPCWSTR VAR_4,
    MonoDomain *VAR_5, MonoObject **VAR_6)
{
    HRESULT VAR_7=VAR_2;
    char *VAR_8=((void*)0);
    MonoType *VAR_9;
    MonoClass *VAR_10;
    MonoObject *VAR_11;

    if (!VAR_5)
        VAR_7 = FUNC_3(VAR_3, &VAR_5);

    if (FUNC_4(VAR_7))
    {
        VAR_8 = FUNC_5(VAR_4);
        if (!VAR_8)
            VAR_7 = VAR_1;
    }

    if (FUNC_4(VAR_7))
    {
        VAR_3->mono->mono_thread_attach(VAR_5);

        VAR_9 = VAR_3->mono->mono_reflection_type_from_name(VAR_8, ((void*)0));
        if (!VAR_9)
        {
            FUNC_0("Cannot find type %s\n", FUNC_6(VAR_4));
            VAR_7 = VAR_0;
        }
    }

    if (FUNC_4(VAR_7))
    {
        VAR_10 = VAR_3->mono->mono_class_from_mono_type(VAR_9);
        if (!VAR_10)
        {
            FUNC_0("Cannot convert type %s to a class\n", FUNC_6(VAR_4));
            VAR_7 = VAR_0;
        }
    }

    if (FUNC_4(VAR_7))
    {
        VAR_11 = VAR_3->mono->mono_object_new(VAR_5, VAR_10);
        if (!VAR_11)
        {
            FUNC_0("Cannot allocate object of type %s\n", FUNC_6(VAR_4));
            VAR_7 = VAR_0;
        }
    }

    if (FUNC_4(VAR_7))
    {

        VAR_3->mono->mono_runtime_object_init(VAR_11);
        *VAR_6 = VAR_11;
    }

    FUNC_2(FUNC_1(), 0, VAR_8);

    return VAR_7;
}
