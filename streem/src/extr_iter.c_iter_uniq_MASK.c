
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct uniq_data {void* last; scalar_t__ init; } ;
typedef void* strm_value ;
struct TYPE_4__ {struct uniq_data* data; } ;
typedef TYPE_1__ strm_stream ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*,void*,int *) ;
 int FUNC_1 (void*,void*) ;

__attribute__((used)) static int
FUNC_2(strm_stream* VAR_2, strm_value VAR_3)
{
  struct uniq_data* VAR_4 = VAR_2->data;

  if (!VAR_4->init) {
    VAR_4->init = VAR_1;
    VAR_4->last = VAR_3;
    FUNC_0(VAR_2, VAR_3, ((void*)0));
    return VAR_0;
  }
  if (!FUNC_1(VAR_3, VAR_4->last)) {
    VAR_4->last = VAR_3;
    FUNC_0(VAR_2, VAR_3, ((void*)0));
  }
  return VAR_0;
}
