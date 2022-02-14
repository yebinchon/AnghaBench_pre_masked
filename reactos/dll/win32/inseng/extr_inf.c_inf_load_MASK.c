
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct inf_file {int size; void* content; int sections; } ;
struct TYPE_3__ {int QuadPart; } ;
typedef TYPE_1__ LARGE_INTEGER ;
typedef int HRESULT ;
typedef scalar_t__ HANDLE ;
typedef int DWORD ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (char const*,int ,int ,int *,int ,int ,int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (scalar_t__,TYPE_1__*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (scalar_t__,void*,int,int*,int *) ;
 int VAR_5 ;
 void* FUNC_5 (int) ;
 int FUNC_6 (struct inf_file*) ;
 int FUNC_7 (struct inf_file*) ;
 int FUNC_8 (int *) ;

HRESULT FUNC_9(const char *VAR_6, struct inf_file **VAR_7)
{
    LARGE_INTEGER VAR_8;
    struct inf_file *VAR_9;
    HRESULT VAR_10 = VAR_0;
    HANDLE VAR_11;
    DWORD VAR_12;

    VAR_11 = FUNC_1(VAR_6, VAR_2, 0, ((void*)0), VAR_4, VAR_1, ((void*)0));
    if (VAR_11 == VAR_3) return VAR_0;

    VAR_9 = FUNC_5(sizeof(*VAR_9));
    if (!VAR_9) goto error;

    if (!FUNC_3(VAR_11, &VAR_8))
        goto error;

    VAR_9->size = VAR_8.QuadPart;

    VAR_9->content = FUNC_5(VAR_9->size);
    if (!VAR_9->content) goto error;

    FUNC_8(&VAR_9->sections);

    if (!FUNC_4(VAR_11, VAR_9->content, VAR_9->size, &VAR_12, ((void*)0)) || VAR_12 != VAR_9->size)
        goto error;

    VAR_10 = FUNC_7(VAR_9);
    if (FUNC_2(VAR_10)) goto error;

    FUNC_0(VAR_11);
    *VAR_7 = VAR_9;
    return VAR_5;

error:
    if (VAR_9) FUNC_6(VAR_9);
    FUNC_0(VAR_11);
    return VAR_10;
}
