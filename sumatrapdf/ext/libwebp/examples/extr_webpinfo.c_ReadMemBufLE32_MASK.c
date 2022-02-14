
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int const uint32_t ;
struct TYPE_5__ {int start_; int * buf_; } ;
typedef TYPE_1__ MemBuffer ;


 int const FUNC_0 (int const* const) ;
 int FUNC_1 (TYPE_1__* const) ;
 int FUNC_2 (TYPE_1__* const,int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static uint32_t FUNC_4(MemBuffer* const VAR_0) {
  const uint8_t* const VAR_1 = VAR_0->buf_ + VAR_0->start_;
  const uint32_t VAR_2 = FUNC_0(VAR_1);
  FUNC_3(FUNC_1(VAR_0) >= 4);
  FUNC_2(VAR_0, 4);
  return VAR_2;
}
