
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ str; } ;
struct TYPE_10__ {int * lpVtbl; } ;
struct TYPE_9__ {int ref; TYPE_2__ ITextFont_iface; void* set_cache_enabled; void* get_cache_enabled; int * range; TYPE_4__* props; } ;
typedef int ITextRange ;
typedef TYPE_1__ ITextFontImpl ;
typedef TYPE_2__ ITextFont ;
typedef int HRESULT ;


 int VAR_0 ;
 void* VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 void* VAR_4 ;
 TYPE_1__* FUNC_2 (int) ;
 int FUNC_3 (TYPE_4__**,TYPE_4__**,int) ;
 int FUNC_4 (TYPE_1__*) ;
 int VAR_5 ;

__attribute__((used)) static HRESULT FUNC_5(ITextRange *VAR_6, const ITextFontImpl *VAR_7, ITextFont **VAR_8)
{
    ITextFontImpl *VAR_9;

    *VAR_8 = ((void*)0);
    VAR_9 = FUNC_2(sizeof(*VAR_9));
    if (!VAR_9)
        return VAR_0;

    VAR_9->ITextFont_iface.lpVtbl = &VAR_5;
    VAR_9->ref = 1;

    if (VAR_7) {
        VAR_9->range = ((void*)0);
        VAR_9->get_cache_enabled = VAR_4;
        VAR_9->set_cache_enabled = VAR_4;
        FUNC_3(&VAR_9->props, &VAR_7->props, sizeof(VAR_9->props));
        if (VAR_9->props[VAR_2].str)
            VAR_9->props[VAR_2].str = FUNC_1(VAR_9->props[VAR_2].str);
    }
    else {
        VAR_9->range = VAR_6;
        FUNC_0(VAR_6);


        VAR_9->get_cache_enabled = VAR_1;
        VAR_9->set_cache_enabled = VAR_1;
        FUNC_4(VAR_9);
    }

    *VAR_8 = &VAR_9->ITextFont_iface;
    return VAR_3;
}
