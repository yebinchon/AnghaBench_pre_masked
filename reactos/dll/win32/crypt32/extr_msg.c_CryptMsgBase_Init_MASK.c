
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ref; int state; int control; int update; int get_param; int close; int stream_info; int streamed; int open_flags; } ;
typedef int * PCMSG_STREAM_INFO ;
typedef int DWORD ;
typedef int CryptMsgUpdateFunc ;
typedef int CryptMsgGetParamFunc ;
typedef int CryptMsgControlFunc ;
typedef int CryptMsgCloseFunc ;
typedef TYPE_1__ CryptMsgBase ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int) ;

__attribute__((used)) static inline void FUNC_1(CryptMsgBase *VAR_3, DWORD VAR_4,
 PCMSG_STREAM_INFO VAR_5, CryptMsgCloseFunc VAR_6,
 CryptMsgGetParamFunc VAR_7, CryptMsgUpdateFunc VAR_8,
 CryptMsgControlFunc VAR_9)
{
    VAR_3->ref = 1;
    VAR_3->open_flags = VAR_4;
    if (VAR_5)
    {
        VAR_3->streamed = VAR_2;
        VAR_3->stream_info = *VAR_5;
    }
    else
    {
        VAR_3->streamed = VAR_0;
        FUNC_0(&VAR_3->stream_info, 0, sizeof(VAR_3->stream_info));
    }
    VAR_3->close = VAR_6;
    VAR_3->get_param = VAR_7;
    VAR_3->update = VAR_8;
    VAR_3->control = VAR_9;
    VAR_3->state = VAR_1;
}
