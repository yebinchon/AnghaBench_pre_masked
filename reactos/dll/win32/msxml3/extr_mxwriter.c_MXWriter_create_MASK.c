
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_9__ ;
typedef struct TYPE_25__ TYPE_8__ ;
typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_12__ ;
typedef struct TYPE_16__ TYPE_11__ ;
typedef struct TYPE_15__ TYPE_10__ ;


struct TYPE_16__ {int * lpVtbl; } ;
struct TYPE_15__ {int * lpVtbl; } ;
struct TYPE_26__ {int * lpVtbl; } ;
struct TYPE_25__ {int * lpVtbl; } ;
struct TYPE_24__ {int * lpVtbl; } ;
struct TYPE_23__ {int * lpVtbl; } ;
struct TYPE_22__ {int * lpVtbl; } ;
struct TYPE_21__ {int * lpVtbl; } ;
struct TYPE_20__ {int * lpVtbl; } ;
struct TYPE_19__ {int * lpVtbl; } ;
struct TYPE_18__ {int * lpVtbl; } ;
struct TYPE_17__ {int ref; TYPE_11__ IMXWriter_iface; int dispex; void* version; void* encoding; int buffer; int xml_enc; int * dest; void* newline; void* text; scalar_t__ indent; void* cdata; int * element; void* prop_changed; void** props; int class_version; TYPE_10__ IVBSAXErrorHandler_iface; TYPE_9__ IVBSAXDTDHandler_iface; TYPE_8__ IVBSAXContentHandler_iface; TYPE_7__ IVBSAXLexicalHandler_iface; TYPE_6__ IVBSAXDeclHandler_iface; TYPE_5__ ISAXErrorHandler_iface; TYPE_4__ ISAXDTDHandler_iface; TYPE_3__ ISAXDeclHandler_iface; TYPE_2__ ISAXLexicalHandler_iface; TYPE_1__ ISAXContentHandler_iface; } ;
typedef TYPE_12__ mxwriter ;
typedef char WCHAR ;
typedef int MSXML_VERSION ;
typedef int IUnknown ;
typedef scalar_t__ HRESULT ;


 scalar_t__ VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 void* FUNC_0 (char const*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (char*,void*) ;
 void* VAR_14 ;
 void* VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 TYPE_12__* FUNC_3 (int) ;
 int FUNC_4 (TYPE_12__*) ;
 int FUNC_5 (int *,int *,int *) ;
 scalar_t__ FUNC_6 (int ,int *) ;
 int VAR_22 ;
 char const* VAR_23 ;

HRESULT FUNC_7(MSXML_VERSION VAR_24, void **VAR_25)
{
    static const WCHAR VAR_26[] = {'1','.','0',0};
    mxwriter *VAR_27;
    HRESULT VAR_28;

    FUNC_2("(%p)\n", VAR_25);

    VAR_27 = FUNC_3( sizeof (*VAR_27) );
    if(!VAR_27)
        return VAR_0;

    VAR_27->IMXWriter_iface.lpVtbl = &VAR_2;
    VAR_27->ISAXContentHandler_iface.lpVtbl = &VAR_8;
    VAR_27->ISAXLexicalHandler_iface.lpVtbl = &VAR_12;
    VAR_27->ISAXDeclHandler_iface.lpVtbl = &VAR_10;
    VAR_27->ISAXDTDHandler_iface.lpVtbl = &VAR_9;
    VAR_27->ISAXErrorHandler_iface.lpVtbl = &VAR_11;
    VAR_27->IVBSAXDeclHandler_iface.lpVtbl = &VAR_18;
    VAR_27->IVBSAXLexicalHandler_iface.lpVtbl = &VAR_20;
    VAR_27->IVBSAXContentHandler_iface.lpVtbl = &VAR_16;
    VAR_27->IVBSAXDTDHandler_iface.lpVtbl = &VAR_17;
    VAR_27->IVBSAXErrorHandler_iface.lpVtbl = &VAR_19;
    VAR_27->ref = 1;
    VAR_27->class_version = VAR_24;

    VAR_27->props[VAR_3] = VAR_15;
    VAR_27->props[VAR_4] = VAR_14;
    VAR_27->props[VAR_5] = VAR_14;
    VAR_27->props[VAR_6] = VAR_14;
    VAR_27->props[VAR_7] = VAR_14;
    VAR_27->prop_changed = VAR_1;
    VAR_27->encoding = FUNC_0(VAR_23);
    VAR_27->version = FUNC_0(VAR_26);
    VAR_27->xml_enc = VAR_21;

    VAR_27->element = ((void*)0);
    VAR_27->cdata = VAR_1;
    VAR_27->indent = 0;
    VAR_27->text = VAR_1;
    VAR_27->newline = VAR_1;

    VAR_27->dest = ((void*)0);

    VAR_28 = FUNC_6(VAR_27->xml_enc, &VAR_27->buffer);
    if (VAR_28 != VAR_13) {
        FUNC_1(VAR_27->encoding);
        FUNC_1(VAR_27->version);
        FUNC_4(VAR_27);
        return VAR_28;
    }

    FUNC_5(&VAR_27->dispex, (IUnknown*)&VAR_27->IMXWriter_iface, &VAR_22);

    *VAR_25 = &VAR_27->IMXWriter_iface;

    FUNC_2("returning iface %p\n", *VAR_25);

    return VAR_13;
}
