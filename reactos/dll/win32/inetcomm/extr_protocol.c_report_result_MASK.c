
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * sink; } ;
typedef TYPE_1__ MimeHtmlProtocol ;
typedef int HRESULT ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int ,int *) ;

__attribute__((used)) static HRESULT FUNC_2(MimeHtmlProtocol *VAR_1, HRESULT VAR_2)
{
    if(VAR_1->sink) {
        FUNC_1(VAR_1->sink, VAR_2, VAR_0, ((void*)0));
        FUNC_0(VAR_1->sink);
        VAR_1->sink = ((void*)0);
    }

    return VAR_2;
}
