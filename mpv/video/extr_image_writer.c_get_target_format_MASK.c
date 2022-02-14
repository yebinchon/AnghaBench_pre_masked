
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int id; } ;
struct image_writer_ctx {TYPE_2__* opts; TYPE_1__ original_format; } ;
struct AVCodec {int dummy; } ;
struct TYPE_4__ {int high_bit_depth; int format; } ;


 int VAR_0 ;
 struct AVCodec* FUNC_0 (int ) ;
 int FUNC_1 (struct AVCodec*,int,int) ;

__attribute__((used)) static int FUNC_2(struct image_writer_ctx *VAR_1)
{
    struct AVCodec *VAR_2 = FUNC_0(VAR_1->opts->format);
    if (!VAR_2)
        goto unknown;

    int VAR_3 = VAR_1->original_format.id;

    int VAR_4 = FUNC_1(VAR_2, VAR_3, VAR_1->opts->high_bit_depth);
    if (!VAR_4)
        VAR_4 = FUNC_1(VAR_2, VAR_3, 1);

    if (!VAR_4)
        goto unknown;

    return VAR_4;

unknown:
    return VAR_0;
}
