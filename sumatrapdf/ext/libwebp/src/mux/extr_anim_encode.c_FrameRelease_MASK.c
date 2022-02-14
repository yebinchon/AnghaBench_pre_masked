
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int bitstream; } ;
struct TYPE_6__ {int bitstream; } ;
struct TYPE_8__ {TYPE_2__ key_frame_; TYPE_1__ sub_frame_; } ;
typedef TYPE_3__ EncodedFrame ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_3__* const,int ,int) ;

__attribute__((used)) static void FUNC_2(EncodedFrame* const VAR_0) {
  if (VAR_0 != ((void*)0)) {
    FUNC_0(&VAR_0->sub_frame_.bitstream);
    FUNC_0(&VAR_0->key_frame_.bitstream);
    FUNC_1(VAR_0, 0, sizeof(*VAR_0));
  }
}
