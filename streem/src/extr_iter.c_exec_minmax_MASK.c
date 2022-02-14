
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct minmax_data {int min; void* func; void* data; scalar_t__ num; int start; } ;
typedef void* strm_value ;
typedef int strm_stream ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct minmax_data* FUNC_0 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *,int,void**,char*,void**) ;
 void* FUNC_2 () ;
 int FUNC_3 (int ,int ,int ,void*) ;
 void* FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(strm_stream* VAR_6, int VAR_7, strm_value* VAR_8, strm_value* VAR_9, int VAR_10)
{
  struct minmax_data* VAR_11;
  strm_value VAR_12 = FUNC_2();

  FUNC_1(VAR_6, VAR_7, VAR_8, "|v", &VAR_12);
  VAR_11 = FUNC_0(sizeof(*VAR_11));
  if (!VAR_11) return VAR_0;
  VAR_11->start = VAR_2;
  VAR_11->min = VAR_10;
  VAR_11->num = 0;
  VAR_11->data = FUNC_2();
  VAR_11->func = VAR_12;
  *VAR_9 = FUNC_4(FUNC_3(VAR_5, VAR_3, VAR_4, (void*)VAR_11));
  return VAR_1;
}
