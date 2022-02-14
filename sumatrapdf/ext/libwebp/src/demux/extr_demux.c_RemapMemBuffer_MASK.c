
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {size_t buf_size_; size_t end_; int const* buf_; } ;
typedef TYPE_1__ MemBuffer ;



__attribute__((used)) static int FUNC_0(MemBuffer* const VAR_0,
                          const uint8_t* VAR_1, size_t VAR_2) {
  if (VAR_2 < VAR_0->buf_size_) return 0;

  VAR_0->buf_ = VAR_1;
  VAR_0->end_ = VAR_0->buf_size_ = VAR_2;
  return 1;
}
