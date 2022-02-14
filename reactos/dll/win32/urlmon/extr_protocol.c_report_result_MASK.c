
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flags; scalar_t__ protocol_sink; } ;
typedef TYPE_1__ Protocol ;
typedef int HRESULT ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int ,int ,int *) ;

__attribute__((used)) static inline HRESULT FUNC_1(Protocol *VAR_1, HRESULT VAR_2)
{
    if (!(VAR_1->flags & VAR_0) && VAR_1->protocol_sink) {
        VAR_1->flags |= VAR_0;
        FUNC_0(VAR_1->protocol_sink, VAR_2, 0, ((void*)0));
    }

    return VAR_2;
}
