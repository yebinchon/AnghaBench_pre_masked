
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct annotation_line {int offset; } ;
struct annotation {TYPE_1__* options; } ;
struct TYPE_2__ {scalar_t__ hide_src_code; } ;



__attribute__((used)) static inline bool FUNC_0(struct annotation_line *VAR_0, struct annotation *VAR_1)
{
 return VAR_1->options->hide_src_code && VAR_0->offset == -1;
}
