
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reduce_data {void* func; void* acc; int init; } ;
typedef void* strm_value ;
typedef int strm_stream ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct reduce_data* FUNC_0 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *,int,void**,char*,void**,void**) ;
 void* FUNC_2 () ;
 int FUNC_3 (int ,int ,int ,void*) ;
 void* FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(strm_stream* VAR_7, int VAR_8, strm_value* VAR_9, strm_value* VAR_10)
{
  struct reduce_data* VAR_11;
  strm_value VAR_12, VAR_13;

  FUNC_1(VAR_7, VAR_8, VAR_9, "v|v", &VAR_12, &VAR_13);
  VAR_11 = FUNC_0(sizeof(*VAR_11));
  if (!VAR_11) return VAR_1;
  if (VAR_8 == 2) {
    VAR_11->init = VAR_3;
    VAR_11->acc = VAR_12;
    VAR_11->func = VAR_13;
  }
  else {
    VAR_11->init = VAR_0;
    VAR_11->acc = FUNC_2();
    VAR_11->func = VAR_12;
  }
  *VAR_10 = FUNC_4(FUNC_3(VAR_6, VAR_4, VAR_5, (void*)VAR_11));
  return VAR_2;
}
