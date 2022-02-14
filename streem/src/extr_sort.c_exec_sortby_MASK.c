
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sortby_value {int dummy; } ;
struct sortby_data {int capa; void* buf; scalar_t__ len; int func; int * strm; } ;
typedef int strm_value ;
typedef int strm_stream ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sortby_data*) ;
 int VAR_4 ;
 void* FUNC_1 (int) ;
 int VAR_5 ;
 int FUNC_2 (int *,int,int *,char*,int *) ;
 int FUNC_3 (int ,int ,int ,void*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(strm_stream* VAR_6, int VAR_7, strm_value* VAR_8, strm_value* VAR_9)
{
  struct sortby_data* VAR_10;
  strm_value VAR_11;

  FUNC_2(VAR_6, VAR_7, VAR_8, "v", &VAR_11);

  VAR_10 = FUNC_1(sizeof(struct sortby_data));
  if (!VAR_10) return VAR_1;
  VAR_10->strm = VAR_6;
  VAR_10->func = VAR_11;
  VAR_10->len = 0;
  VAR_10->capa = VAR_0;
  VAR_10->buf = FUNC_1(sizeof(struct sortby_value)*VAR_0);
  if (!VAR_10->buf) {
    FUNC_0(VAR_10);
    return VAR_1;
  }
  *VAR_9 = FUNC_4(FUNC_3(VAR_5, VAR_4,
                                           VAR_3, (void*)VAR_10));
  return VAR_2;
}
