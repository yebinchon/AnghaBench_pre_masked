
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef void* VARIANT_BOOL ;
struct TYPE_18__ {int IBindStatusCallback_iface; int url; int headers; int post_data_len; scalar_t__ post_data; } ;
struct TYPE_17__ {scalar_t__ frame; scalar_t__ document; void* busy; } ;
struct TYPE_16__ {int pvData; } ;
typedef TYPE_1__ SAFEARRAY ;
typedef int IMoniker ;
typedef int IBindCtx ;
typedef int HRESULT ;
typedef TYPE_2__ DocHost ;
typedef TYPE_3__ BindStatusCallback ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,int ,int **) ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__* FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (TYPE_1__*) ;
 int VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 int FUNC_6 (TYPE_2__*,int *,int ,int *,int *) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (int ,TYPE_1__*,int ) ;
 int FUNC_9 (TYPE_2__*,int ) ;
 int FUNC_10 (TYPE_2__*,int ,TYPE_1__*,int ,void**) ;
 int FUNC_11 (TYPE_2__*,int ,int ) ;
 int FUNC_12 (TYPE_2__*,int ) ;

__attribute__((used)) static HRESULT FUNC_13(DocHost *VAR_8, BindStatusCallback *VAR_9, IMoniker *VAR_10)
{
    VARIANT_BOOL VAR_11 = VAR_6;
    SAFEARRAY *VAR_12 = ((void*)0);
    IBindCtx *VAR_13;
    HRESULT VAR_14;

    FUNC_12(VAR_8, VAR_3);

    if(VAR_9->post_data) {
        VAR_12 = FUNC_4(VAR_7, 0, VAR_9->post_data_len);
        FUNC_8(VAR_12->pvData, VAR_12, VAR_9->post_data_len);
    }

    FUNC_10(VAR_8, VAR_9->url, VAR_12, VAR_9->headers, &VAR_11);
    if(VAR_12)
        FUNC_5(VAR_12);
    if(VAR_11) {
        FUNC_1("Navigation canceled\n");
        return VAR_4;
    }

    FUNC_9(VAR_8, VAR_5);
    VAR_8->busy = VAR_6;

    FUNC_11(VAR_8, VAR_0, VAR_2);
    FUNC_11(VAR_8, VAR_1, VAR_2);

    if(VAR_8->document)
        FUNC_7(VAR_8);

    FUNC_0(0, &VAR_9->IBindStatusCallback_iface, 0, &VAR_13);

    if(VAR_8->frame)
        FUNC_3(VAR_8->frame, VAR_2);

    VAR_14 = FUNC_6(VAR_8, VAR_10, VAR_9->url, VAR_13, &VAR_9->IBindStatusCallback_iface);

    if(VAR_8->frame)
        FUNC_3(VAR_8->frame, VAR_5);

    FUNC_2(VAR_13);

    return VAR_14;
}
