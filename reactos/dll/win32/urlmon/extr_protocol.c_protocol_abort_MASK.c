
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int flags; int protocol_sink; } ;
typedef TYPE_1__ Protocol ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int ) ;

HRESULT FUNC_1(Protocol *VAR_3, HRESULT VAR_4)
{
    if(!VAR_3->protocol_sink)
        return VAR_2;


    if(VAR_3->flags & VAR_0)
        return VAR_1;

    FUNC_0(VAR_3, VAR_4);
    return VAR_2;
}
