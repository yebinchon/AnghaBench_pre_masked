
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int len_compressed_output; int len_uncompressed_input; int mark_frame_arg; int (* mark_frame ) (int ,int ,int ) ;scalar_t__ bits_in_buf; } ;
typedef TYPE_1__ lzx_data ;


 int FUNC_0 (TYPE_1__*,scalar_t__,int ) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(lzx_data *VAR_0)
{
  if (VAR_0->bits_in_buf) {
    FUNC_0(VAR_0, 16 - VAR_0->bits_in_buf, 0);
  }
  if (VAR_0->mark_frame)
    VAR_0->mark_frame(VAR_0->mark_frame_arg, VAR_0->len_uncompressed_input, VAR_0->len_compressed_output);
}
