
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_9__ {TYPE_2__* window; } ;
struct TYPE_8__ {TYPE_1__* outer_window; } ;
struct TYPE_7__ {TYPE_3__ base; } ;
struct TYPE_6__ {int * url; } ;
typedef TYPE_4__ HTMLLocation ;
typedef int HRESULT ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;

__attribute__((used)) static HRESULT FUNC_1(HTMLLocation *VAR_2, const WCHAR **VAR_3)
{
    if(!VAR_2->window || !VAR_2->window->base.outer_window || !VAR_2->window->base.outer_window->url) {
        FUNC_0("No current URL\n");
        return VAR_0;
    }

    *VAR_3 = VAR_2->window->base.outer_window->url;
    return VAR_1;
}
