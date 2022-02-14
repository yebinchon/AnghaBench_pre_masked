
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int len; int str; } ;
typedef TYPE_1__ substr_t ;
struct TYPE_9__ {void* data; void* name; int entry; int flags; void* create; void* expiry; } ;
typedef TYPE_2__ cookie_t ;
typedef void* FILETIME ;
typedef int DWORD ;


 int FUNC_0 (TYPE_2__*) ;
 TYPE_2__* FUNC_1 (int) ;
 void* FUNC_2 (int ,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static cookie_t *FUNC_4(substr_t VAR_0, substr_t VAR_1, FILETIME VAR_2, FILETIME VAR_3, DWORD VAR_4)
{
    cookie_t *VAR_5;

    VAR_5 = FUNC_1(sizeof(*VAR_5));
    if(!VAR_5)
        return ((void*)0);

    VAR_5->expiry = VAR_2;
    VAR_5->create = VAR_3;
    VAR_5->flags = VAR_4;
    FUNC_3(&VAR_5->entry);

    VAR_5->name = FUNC_2(VAR_0.str, VAR_0.len);
    VAR_5->data = FUNC_2(VAR_1.str, VAR_1.len);
    if(!VAR_5->name || !VAR_5->data) {
        FUNC_0(VAR_5);
        return ((void*)0);
    }

    return VAR_5;
}
