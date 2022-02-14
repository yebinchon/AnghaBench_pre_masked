
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct csv_data {struct csv_data* types; scalar_t__ headers; } ;
typedef int strm_value ;
struct TYPE_4__ {struct csv_data* data; } ;
typedef TYPE_1__ strm_stream ;


 int VAR_0 ;
 int FUNC_0 (struct csv_data*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_1__*,int ,int *) ;

__attribute__((used)) static int
FUNC_3(strm_stream* VAR_2, strm_value VAR_3)
{
  struct csv_data *VAR_4 = VAR_2->data;

  if (VAR_4->headers && VAR_4->types == ((void*)0)) {
    FUNC_2(VAR_2, FUNC_1(VAR_4->headers), ((void*)0));
    VAR_4->headers = VAR_1;
  }

  if (VAR_4->types) {
    FUNC_0(VAR_4->types);
    VAR_4->types = ((void*)0);
  }
  FUNC_0(VAR_4);
  return VAR_0;
}
