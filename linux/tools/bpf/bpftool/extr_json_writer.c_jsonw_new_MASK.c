
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int pretty; char sep; scalar_t__ depth; int * out; } ;
typedef TYPE_1__ json_writer_t ;
typedef int FILE ;


 TYPE_1__* FUNC_0 (int) ;

json_writer_t *FUNC_1(FILE *VAR_0)
{
 json_writer_t *VAR_1 = FUNC_0(sizeof(*VAR_1));
 if (VAR_1) {
  VAR_1->out = VAR_0;
  VAR_1->depth = 0;
  VAR_1->pretty = 0;
  VAR_1->sep = '\0';
 }
 return VAR_1;
}
