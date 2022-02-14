
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mvavg_data {int num; void* func_p; int func; void* filled; scalar_t__ i; } ;
typedef int strm_value ;
typedef int strm_stream ;
typedef int strm_int ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 struct mvavg_data* FUNC_0 (int) ;
 int VAR_5 ;
 int FUNC_1 (int *,int,int *,char*,int*,int *) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int ,int *,void*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(strm_stream* VAR_6, int VAR_7, strm_value* VAR_8, strm_value* VAR_9)
{
  struct mvavg_data* VAR_10;
  strm_int VAR_11;
  strm_value VAR_12;

  FUNC_1(VAR_6, VAR_7, VAR_8, "i|v", &VAR_11, &VAR_12);
  VAR_10 = FUNC_0(sizeof(struct mvavg_data)+VAR_11*sizeof(double));
  if (!VAR_10) return VAR_1;
  VAR_10->num = VAR_11;
  VAR_10->i = 0;
  VAR_10->filled = VAR_0;
  if (VAR_7 == 1) {
    VAR_10->func = FUNC_2();
    VAR_10->func_p = VAR_0;
  }
  else {
    VAR_10->func = VAR_12;
    VAR_10->func_p = VAR_3;
  }
  *VAR_9 = FUNC_4(FUNC_3(VAR_5, VAR_4,
                                           ((void*)0), (void*)VAR_10));
  return VAR_2;
}
