
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct uniq_data {void* v; void* last; scalar_t__ init; int func; } ;
typedef void* strm_value ;
struct TYPE_5__ {struct uniq_data* data; } ;
typedef TYPE_1__ strm_stream ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_1__*,void*,int *) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int ,int,void**,void**) ;
 int FUNC_2 (void*,void*) ;

__attribute__((used)) static int
FUNC_3(strm_stream* VAR_3, strm_value VAR_4)
{
  struct uniq_data* VAR_5 = VAR_3->data;
  strm_value VAR_6;

  if (FUNC_1(VAR_3, VAR_5->func, 1, &VAR_4, &VAR_6) == VAR_0) {
    return VAR_0;
  }
  if (!VAR_5->init) {
    VAR_5->init = VAR_2;
    VAR_5->last = VAR_4;
    VAR_5->v = VAR_6;
    FUNC_0(VAR_3, VAR_4, ((void*)0));
    return VAR_1;
  }
  if (!FUNC_2(VAR_6, VAR_5->v)) {
    VAR_5->last = VAR_4;
    VAR_5->v = VAR_6;
    FUNC_0(VAR_3, VAR_4, ((void*)0));
  }
  return VAR_1;
}
