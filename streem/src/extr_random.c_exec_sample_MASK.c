
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sample_data {int len; int seed; scalar_t__ i; } ;
typedef int strm_value ;
typedef int strm_stream ;
typedef int strm_int ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct sample_data* FUNC_0 (int) ;
 int VAR_4 ;
 int FUNC_1 (int *,int,int *,char*,int*) ;
 int FUNC_2 (int ,int ,int ,void*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(strm_stream* VAR_5, int VAR_6, strm_value* VAR_7, strm_value* VAR_8)
{
  struct sample_data* VAR_9;
  strm_int VAR_10;

  FUNC_1(VAR_5, VAR_6, VAR_7, "i", &VAR_10);
  VAR_9 = FUNC_0(sizeof(struct sample_data)+sizeof(strm_value)*VAR_10);
  if (!VAR_9) return VAR_0;
  VAR_9->len = VAR_10;
  VAR_9->i = 0;
  FUNC_4(VAR_9->seed);
  *VAR_8 = FUNC_3(FUNC_2(VAR_4, VAR_3,
                                           VAR_2, (void*)VAR_9));
  return VAR_1;
}
