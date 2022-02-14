
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * lpVtbl; } ;
struct TYPE_5__ {int ref; TYPE_1__ IXMLDOMParseError2_iface; int dispex; void* filepos; void* linepos; void* line; void* srcText; void* reason; void* url; void* code; } ;
typedef TYPE_2__ parse_error_t ;
typedef void* LONG ;
typedef int IXMLDOMParseError ;
typedef int IUnknown ;
typedef void* BSTR ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int) ;
 int FUNC_1 (int *,int *,int *) ;
 int VAR_1 ;

IXMLDOMParseError *FUNC_2( LONG VAR_2, BSTR VAR_3, BSTR VAR_4, BSTR VAR_5,
                                      LONG VAR_6, LONG VAR_7, LONG VAR_8 )
{
    parse_error_t *VAR_9;

    VAR_9 = FUNC_0( sizeof(*VAR_9) );
    if ( !VAR_9 )
        return ((void*)0);

    VAR_9->IXMLDOMParseError2_iface.lpVtbl = &VAR_0;
    VAR_9->ref = 1;

    VAR_9->code = VAR_2;
    VAR_9->url = VAR_3;
    VAR_9->reason = VAR_4;
    VAR_9->srcText = VAR_5;
    VAR_9->line = VAR_6;
    VAR_9->linepos = VAR_7;
    VAR_9->filepos = VAR_8;

    FUNC_1(&VAR_9->dispex, (IUnknown*)&VAR_9->IXMLDOMParseError2_iface, &VAR_1);

    return (IXMLDOMParseError*)&VAR_9->IXMLDOMParseError2_iface;
}
