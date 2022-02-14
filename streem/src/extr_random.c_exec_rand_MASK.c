
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rand_data {int seed; } ;
typedef int strm_value ;
typedef int strm_stream ;
typedef int strm_int ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rand_data*) ;
 int VAR_2 ;
 struct rand_data* FUNC_1 (int) ;
 int FUNC_2 (int ,char const*,int) ;
 int FUNC_3 (int *,int,int *,char*,char const**,int*) ;
 int VAR_3 ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int ,int ,int *,void*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int
FUNC_8(strm_stream* VAR_4, int VAR_5, strm_value* VAR_6, strm_value* VAR_7)
{
  struct rand_data* VAR_8;
  const char* VAR_9;
  strm_int VAR_10;

  FUNC_3(VAR_4, VAR_5, VAR_6, "|s", &VAR_9, &VAR_10);
  VAR_8 = FUNC_1(sizeof(struct rand_data));
  if (!VAR_8) return VAR_0;
  if (VAR_5 == 2) {
    if (VAR_10 != sizeof(VAR_8->seed)) {
      FUNC_4(VAR_4, "seed size differ");
      FUNC_0(VAR_8);
      return VAR_0;
    }
    FUNC_2(VAR_8->seed, VAR_9, VAR_10);
  }
  else {
    FUNC_7(VAR_8->seed);
  }
  *VAR_7 = FUNC_6(FUNC_5(VAR_3, VAR_2, ((void*)0), (void*)VAR_8));
  return VAR_1;
}
