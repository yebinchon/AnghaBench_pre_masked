
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int stream; int url; } ;
typedef TYPE_2__ travellog_entry_t ;
struct TYPE_9__ {unsigned int loading_pos; TYPE_2__* log; } ;
struct TYPE_12__ {int document; TYPE_1__ travellog; int doc_navigate; } ;
struct TYPE_11__ {scalar_t__ QuadPart; } ;
typedef TYPE_3__ LARGE_INTEGER ;
typedef int IPersistHistory ;
typedef int HRESULT ;
typedef TYPE_4__ DocHost ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int VAR_2 ;
 int FUNC_2 (int *,int ,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,TYPE_3__,int ,int *) ;
 int FUNC_5 (int ,int *,void**) ;
 int VAR_3 ;
 int FUNC_6 (TYPE_4__*,int ,int *,int *,int ,int ) ;
 int FUNC_7 (TYPE_4__*) ;

__attribute__((used)) static HRESULT FUNC_8(DocHost *VAR_4, unsigned VAR_5)
{
    IPersistHistory *VAR_6;
    travellog_entry_t *VAR_7;
    LARGE_INTEGER VAR_8;
    HRESULT VAR_9;

    if(!VAR_4->doc_navigate) {
        FUNC_1("unsupported doc_navigate FALSE\n");
        return VAR_0;
    }

    VAR_4->travellog.loading_pos = VAR_5;
    VAR_7 = VAR_4->travellog.log + VAR_4->travellog.loading_pos;

    FUNC_7(VAR_4);

    if(!VAR_7->stream)
        return FUNC_6(VAR_4, VAR_7->url, ((void*)0), ((void*)0), 0, VAR_1);

    VAR_9 = FUNC_5(VAR_4->document, &VAR_2, (void**)&VAR_6);
    if(FUNC_0(VAR_9))
        return VAR_9;

    VAR_8.QuadPart = 0;
    FUNC_4(VAR_7->stream, VAR_8, VAR_3, ((void*)0));

    VAR_9 = FUNC_2(VAR_6, VAR_7->stream, ((void*)0));
    FUNC_3(VAR_6);
    return VAR_9;
}
