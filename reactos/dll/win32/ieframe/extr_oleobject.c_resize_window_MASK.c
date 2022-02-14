
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ hwnd; } ;
struct TYPE_5__ {TYPE_1__ doc_host; } ;
typedef TYPE_2__ WebBrowser ;
typedef int LRESULT ;
typedef int LONG ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,int *,int ,int ,int ,int ,int) ;

__attribute__((used)) static LRESULT FUNC_1(WebBrowser *VAR_2, LONG VAR_3, LONG VAR_4)
{
    if(VAR_2->doc_host.hwnd)
        FUNC_0(VAR_2->doc_host.hwnd, ((void*)0), 0, 0, VAR_3, VAR_4,
                     VAR_1 | VAR_0);

    return 0;
}
