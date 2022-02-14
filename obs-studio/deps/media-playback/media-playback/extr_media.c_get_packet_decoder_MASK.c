
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct mp_decode {TYPE_1__* stream; } ;
struct TYPE_7__ {struct mp_decode v; scalar_t__ has_video; struct mp_decode a; scalar_t__ has_audio; } ;
typedef TYPE_2__ mp_media_t ;
struct TYPE_8__ {scalar_t__ stream_index; } ;
struct TYPE_6__ {scalar_t__ index; } ;
typedef TYPE_3__ AVPacket ;



__attribute__((used)) static inline struct mp_decode *FUNC_0(mp_media_t *VAR_0,
         AVPacket *VAR_1)
{
 if (VAR_0->has_audio && VAR_1->stream_index == VAR_0->a.stream->index)
  return &VAR_0->a;
 if (VAR_0->has_video && VAR_1->stream_index == VAR_0->v.stream->index)
  return &VAR_0->v;

 return ((void*)0);
}
