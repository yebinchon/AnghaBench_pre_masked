
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_9__ {scalar_t__ size; } ;
struct TYPE_10__ {TYPE_3__ bitstream; } ;
struct TYPE_7__ {scalar_t__ size; } ;
struct TYPE_8__ {TYPE_1__ bitstream; } ;
struct TYPE_11__ {TYPE_4__ sub_frame_; TYPE_2__ key_frame_; } ;
typedef TYPE_5__ EncodedFrame ;



__attribute__((used)) static int64_t FUNC_0(const EncodedFrame* const VAR_0) {
  return ((int64_t)VAR_0->key_frame_.bitstream.size -
          VAR_0->sub_frame_.bitstream.size);
}
