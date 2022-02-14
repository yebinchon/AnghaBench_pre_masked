
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bar_data {int tlen; void* title; } ;
typedef int strm_value ;
typedef int strm_stream ;
typedef int strm_int ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct bar_data*) ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_1 (int) ;
 int FUNC_2 (void*,char*,int) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (scalar_t__) ;
 int VAR_9 ;
 int FUNC_4 (int *,int,int *,char*,char**,int*) ;
 int FUNC_5 (int ,int ,int *) ;
 int FUNC_6 (int ,int ,int ,void*) ;
 int FUNC_7 (int ) ;
 int VAR_10 ;

__attribute__((used)) static int
FUNC_8(strm_stream* VAR_11, int VAR_12, strm_value* VAR_13, strm_value* VAR_14)
{
  struct bar_data* VAR_15;
  char* VAR_16 = ((void*)0);
  strm_int VAR_17 = 0;

  FUNC_4(VAR_11, VAR_12, VAR_13, "|s", &VAR_16, &VAR_17);
  VAR_15 = FUNC_1(sizeof(struct bar_data));
  if (!VAR_15) return VAR_2;
  VAR_15->title = FUNC_1(VAR_17);
  FUNC_2((void*)VAR_15->title, VAR_16, VAR_17);
  VAR_15->tlen = VAR_17;
  if (VAR_7 == 0) {
    FUNC_3(VAR_7);
    FUNC_5(VAR_1, VAR_8, &VAR_10);
    FUNC_5(VAR_0, VAR_8, &VAR_5);
  }
  if (FUNC_0(VAR_15) == VAR_2) return VAR_2;
  *VAR_14 = FUNC_7(FUNC_6(VAR_9, VAR_6,
                                           VAR_4, (void*)VAR_15));
  return VAR_3;
}
