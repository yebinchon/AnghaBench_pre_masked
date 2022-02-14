
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int size; int bytes; } ;
typedef TYPE_1__ WebPData ;
struct TYPE_6__ {int end_; scalar_t__ start_; int buf_; } ;
typedef TYPE_2__ MemBuffer ;



__attribute__((used)) static void FUNC_0(MemBuffer* const VAR_0, const WebPData* VAR_1) {
  VAR_0->buf_ = VAR_1->bytes;
  VAR_0->start_ = 0;
  VAR_0->end_ = VAR_1->size;
}
