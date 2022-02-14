
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rnorm_data {int has_spare; int seed; } ;
typedef int strm_value ;
typedef int strm_stream ;
typedef int strm_int ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct rnorm_data*) ;
 int VAR_3 ;
 struct rnorm_data* FUNC_1 (int) ;
 int FUNC_2 (int ,char const*,int) ;
 int FUNC_3 (int *,int,int *,char*,char const**,int*) ;
 int VAR_4 ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int ,int ,int *,void*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int
FUNC_8(strm_stream* VAR_5, int VAR_6, strm_value* VAR_7, strm_value* VAR_8)
{
  struct rnorm_data* VAR_9;
  const char* VAR_10;
  strm_int VAR_11;

  FUNC_3(VAR_5, VAR_6, VAR_7, "|s", &VAR_10, &VAR_11);
  VAR_9 = FUNC_1(sizeof(struct rnorm_data));
  if (!VAR_9) return VAR_1;
  if (VAR_6 == 2) {
    if (VAR_11 != sizeof(VAR_9->seed)) {
      FUNC_4(VAR_5, "seed size differ");
      FUNC_0(VAR_9);
      return VAR_1;
    }
    FUNC_2(VAR_9->seed, VAR_10, VAR_11);
  }
  else {
    FUNC_7(VAR_9->seed);
  }
  VAR_9->has_spare = VAR_0;
  *VAR_8 = FUNC_6(FUNC_5(VAR_4, VAR_3, ((void*)0), (void*)VAR_9));
  return VAR_2;
}
