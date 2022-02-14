
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ff_demuxer {int seek_request; int seek_flush; int input; TYPE_1__* format_context; scalar_t__ seek_pos; int seek_flags; } ;
struct TYPE_2__ {scalar_t__ duration; scalar_t__ start_time; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,int ,char*,int ) ;

__attribute__((used)) static void FUNC_1(struct ff_demuxer *VAR_4)
{
 if (VAR_4->format_context->duration == VAR_3) {
  VAR_4->seek_flags = VAR_1;
  VAR_4->seek_pos = 0;
 } else {
  VAR_4->seek_flags = VAR_0;
  VAR_4->seek_pos = VAR_4->format_context->start_time;
 }
 VAR_4->seek_request = 1;
 VAR_4->seek_flush = 0;
 FUNC_0(((void*)0), VAR_2, "looping media %s", VAR_4->input);
}
