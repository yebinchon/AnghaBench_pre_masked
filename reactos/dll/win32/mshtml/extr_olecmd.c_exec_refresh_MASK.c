
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {int header; TYPE_3__* window; } ;
typedef TYPE_4__ refresh_task_t ;
typedef int VARIANT ;
struct TYPE_13__ {TYPE_3__* window; TYPE_1__* doc_obj; } ;
struct TYPE_10__ {int IHTMLWindow2_iface; } ;
struct TYPE_11__ {int task_magic; TYPE_2__ base; } ;
struct TYPE_9__ {scalar_t__ client; } ;
typedef int IOleCommandTarget ;
typedef TYPE_5__ HTMLDocument ;
typedef int HRESULT ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 int FUNC_1 (scalar_t__,int *,void**) ;
 int FUNC_2 (int *,int *,int,int ,int *,int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_4 ;
 int FUNC_5 (char*,TYPE_5__*,int ,int ,int *) ;
 int FUNC_6 (int *) ;
 TYPE_4__* FUNC_7 (int) ;
 int FUNC_8 (int *,int ,int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static HRESULT FUNC_9(HTMLDocument *VAR_7, DWORD VAR_8, VARIANT *VAR_9, VARIANT *VAR_10)
{
    refresh_task_t *VAR_11;
    HRESULT VAR_12;

    FUNC_5("(%p)->(%d %s %p)\n", VAR_7, VAR_8, FUNC_6(VAR_9), VAR_10);

    if(VAR_7->doc_obj->client) {
        IOleCommandTarget *VAR_13;

        VAR_12 = FUNC_1(VAR_7->doc_obj->client, &VAR_3, (void**)&VAR_13);
        if(FUNC_4(VAR_12)) {
            VAR_12 = FUNC_2(VAR_13, &VAR_0, 2300, VAR_8, VAR_9, VAR_10);
            FUNC_3(VAR_13);
            if(FUNC_4(VAR_12))
                return VAR_4;
        }
    }

    if(!VAR_7->window)
        return VAR_2;

    VAR_11 = FUNC_7(sizeof(*VAR_11));
    if(!VAR_11)
        return VAR_1;

    FUNC_0(&VAR_7->window->base.IHTMLWindow2_iface);
    VAR_11->window = VAR_7->window;

    return FUNC_8(&VAR_11->header, VAR_6, VAR_5, VAR_7->window->task_magic);
}
