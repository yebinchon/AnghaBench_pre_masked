
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flags; int content_length; scalar_t__ available_bytes; scalar_t__ current_position; int protocol_sink; } ;
typedef TYPE_1__ Protocol ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_1(Protocol *VAR_6)
{
    DWORD VAR_7;

    if((VAR_6->flags & VAR_5) || !VAR_6->protocol_sink)
        return;

    if(VAR_6->flags & VAR_4) {
        VAR_7 = VAR_1;
    }else {
        VAR_6->flags |= VAR_4;
        VAR_7 = VAR_0;
    }

    if(VAR_6->flags & VAR_3 && !(VAR_6->flags & VAR_5)) {
        VAR_6->flags |= VAR_5;
        VAR_7 |= VAR_2;
    }

    FUNC_0(VAR_6->protocol_sink, VAR_7,
            VAR_6->current_position+VAR_6->available_bytes,
            VAR_6->content_length);
}
