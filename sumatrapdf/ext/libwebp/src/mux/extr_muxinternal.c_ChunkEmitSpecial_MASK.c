
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef size_t const uint32_t ;
struct TYPE_6__ {size_t size; int bytes; } ;
struct TYPE_7__ {scalar_t__ tag_; TYPE_1__ data_; } ;
typedef TYPE_2__ WebPChunk ;
struct TYPE_8__ {scalar_t__ tag; } ;


 size_t VAR_0 ;
 int FUNC_0 (TYPE_2__ const* const) ;
 size_t VAR_1 ;
 int FUNC_1 (scalar_t__*,size_t const) ;
 int VAR_2 ;
 int FUNC_2 (int) ;
 TYPE_3__* VAR_3 ;
 int FUNC_3 (scalar_t__*,int ,size_t const) ;

__attribute__((used)) static uint8_t* FUNC_4(const WebPChunk* const VAR_4,
                                 size_t VAR_5, uint8_t* VAR_6) {
  const size_t VAR_7 = VAR_4->data_.size;
  const size_t VAR_8 = VAR_5 - VAR_0;
  FUNC_2(VAR_4->tag_ == VAR_3[VAR_1].tag);
  FUNC_1(VAR_6 + 0, VAR_4->tag_);
  FUNC_1(VAR_6 + VAR_2, (uint32_t)VAR_8);
  FUNC_2(VAR_7 == (uint32_t)VAR_7);
  FUNC_3(VAR_6 + VAR_0, VAR_4->data_.bytes, VAR_7);
  if (VAR_7 & 1) {
    VAR_6[VAR_0 + VAR_7] = 0;
  }
  return VAR_6 + FUNC_0(VAR_4);
}
