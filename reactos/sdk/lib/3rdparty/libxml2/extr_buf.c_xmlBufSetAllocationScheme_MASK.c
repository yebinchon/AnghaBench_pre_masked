
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ xmlBufferAllocationScheme ;
typedef TYPE_2__* xmlBufPtr ;
struct TYPE_5__ {scalar_t__ error; scalar_t__ alloc; int content; int contentIO; TYPE_1__* buffer; } ;
struct TYPE_4__ {scalar_t__ alloc; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ,char*) ;
 int VAR_6 ;

int
FUNC_1(xmlBufPtr VAR_7,
                          xmlBufferAllocationScheme VAR_8) {
    if ((VAR_7 == ((void*)0)) || (VAR_7->error != 0)) {




        return(-1);
    }
    if ((VAR_7->alloc == VAR_4) ||
        (VAR_7->alloc == VAR_5))
        return(-1);
    if ((VAR_8 == VAR_1) ||
        (VAR_8 == VAR_2) ||
        (VAR_8 == VAR_3) ||
        (VAR_8 == VAR_4) ||
 (VAR_8 == VAR_0)) {
 VAR_7->alloc = VAR_8;
        if (VAR_7->buffer)
            VAR_7->buffer->alloc = VAR_8;
        return(0);
    }




    if (VAR_8 == VAR_5) {
        VAR_7->alloc = VAR_5;
        VAR_7->contentIO = VAR_7->content;
    }
    return(-1);
}
