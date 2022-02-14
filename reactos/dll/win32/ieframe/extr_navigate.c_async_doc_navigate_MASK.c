
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int header; scalar_t__ async_notif; void* headers; TYPE_2__* post_data; void* url; } ;
typedef TYPE_1__ task_doc_navigate_t ;
typedef scalar_t__ VARIANT_BOOL ;
typedef int ULONG ;
struct TYPE_6__ {int pvData; } ;
typedef int PBYTE ;
typedef scalar_t__ LPCWSTR ;
typedef int HRESULT ;
typedef int DocHost ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_0 (int ,int ,int ) ;
 void* FUNC_1 (scalar_t__) ;
 int FUNC_2 (char*,...) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (scalar_t__) ;
 int VAR_5 ;
 int FUNC_5 (int *) ;
 TYPE_1__* FUNC_6 (int) ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (int *,void*,TYPE_2__*,void*,scalar_t__*) ;
 int FUNC_9 (int *,int *,int ,int (*) (int *),int ) ;

__attribute__((used)) static HRESULT FUNC_10(DocHost *VAR_6, LPCWSTR VAR_7, LPCWSTR VAR_8, PBYTE VAR_9, ULONG VAR_10,
        BOOL VAR_11)
{
    task_doc_navigate_t *VAR_12;

    FUNC_2("%s\n", FUNC_4(VAR_7));

    VAR_12 = FUNC_6(sizeof(*VAR_12));
    if(!VAR_12)
        return VAR_0;

    VAR_12->url = FUNC_1(VAR_7);
    if(!VAR_12->url) {
        FUNC_5(&VAR_12->header);
        return VAR_0;
    }

    if(VAR_8) {
        VAR_12->headers = FUNC_1(VAR_8);
        if(!VAR_12->headers) {
            FUNC_5(&VAR_12->header);
            return VAR_0;
        }
    }

    if(VAR_9) {
        VAR_12->post_data = FUNC_0(VAR_4, 0, VAR_10);
        if(!VAR_12->post_data) {
            FUNC_5(&VAR_12->header);
            return VAR_0;
        }

        FUNC_7(VAR_12->post_data->pvData, VAR_9, VAR_10);
    }

    if(!VAR_11) {
        VARIANT_BOOL VAR_13 = VAR_3;

        FUNC_8(VAR_6, VAR_12->url, VAR_12->post_data, VAR_12->headers, &VAR_13);
        if(VAR_13) {
            FUNC_2("Navigation canceled\n");
            FUNC_5(&VAR_12->header);
            return VAR_2;
        }
    }

    VAR_12->async_notif = VAR_11;
    FUNC_3(VAR_6, VAR_5);
    FUNC_9(VAR_6, &VAR_12->header, VAR_5, FUNC_5, VAR_1);
    return VAR_2;
}
