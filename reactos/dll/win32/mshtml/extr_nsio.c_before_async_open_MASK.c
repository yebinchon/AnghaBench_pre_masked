
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int nsresult ;
struct TYPE_10__ {TYPE_1__* uri; } ;
typedef TYPE_2__ nsChannel ;
struct TYPE_12__ {int basedoc; int client; } ;
struct TYPE_11__ {TYPE_4__* doc; } ;
struct TYPE_9__ {int uri; } ;
typedef TYPE_3__ NSContainer ;
typedef TYPE_4__ HTMLDocumentObj ;
typedef int HRESULT ;
typedef int BSTR ;
typedef int BOOL ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 int FUNC_3 (TYPE_4__*,int ) ;
 int FUNC_4 (int *,int ,TYPE_2__*,int ,int *) ;

__attribute__((used)) static nsresult FUNC_5(nsChannel *VAR_4, NSContainer *VAR_5, BOOL *VAR_6)
{
    HTMLDocumentObj *VAR_7 = VAR_5->doc;
    BSTR VAR_8;
    HRESULT VAR_9;

    if(!VAR_7->client) {
        *VAR_6 = VAR_3;
        return VAR_2;
    }

    VAR_9 = FUNC_1(VAR_4->uri->uri, &VAR_8);
    if(FUNC_0(VAR_9))
        return VAR_1;

    if(!FUNC_3(VAR_7, VAR_8)) {
        FUNC_2(VAR_8);
        *VAR_6 = VAR_0;
        return VAR_2;
    }

    VAR_9 = FUNC_4(&VAR_7->basedoc, VAR_8, VAR_4, 0, VAR_6);
    FUNC_2(VAR_8);
    if(FUNC_0(VAR_9))
        *VAR_6 = VAR_3;
    return VAR_2;
}
