
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * data; } ;
struct zlog_stream {int * msg_final_suffix; int * msg_suffix; int * msg_prefix; TYPE_1__ buf; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct zlog_stream *VAR_0)
{
 if (VAR_0->buf.data != ((void*)0)) {
  FUNC_0(VAR_0->buf.data);
 }
 if (VAR_0->msg_prefix != ((void*)0)) {
  FUNC_0(VAR_0->msg_prefix);
 }
 if (VAR_0->msg_suffix != ((void*)0)) {
  FUNC_0(VAR_0->msg_suffix);
 } else if (VAR_0->msg_final_suffix != ((void*)0)) {
  FUNC_0(VAR_0->msg_final_suffix);
 }
}
