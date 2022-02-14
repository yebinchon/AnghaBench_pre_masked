
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rbk_data {int tbl; int func; } ;
typedef int strm_value ;
typedef int strm_stream ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct rbk_data* FUNC_2 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int *,int,int *,char*,int *) ;
 int FUNC_4 (int ,int ,int ,void*) ;
 int FUNC_5 (int ) ;
 int VAR_6 ;

__attribute__((used)) static int
FUNC_6(strm_stream* VAR_7, int VAR_8, strm_value* VAR_9, strm_value* VAR_10)
{
  struct rbk_data *VAR_11;
  FUNC_1(VAR_3) *VAR_6;
  strm_value VAR_12;

  FUNC_3(VAR_7, VAR_8, VAR_9, "v", &VAR_12);
  VAR_6 = FUNC_0(VAR_3);
  if (!VAR_6) return VAR_0;
  VAR_11 = FUNC_2(sizeof(*VAR_11));
  VAR_11->tbl = VAR_6;
  VAR_11->func = VAR_12;
  *VAR_10 = FUNC_5(FUNC_4(VAR_5, VAR_2, VAR_4, (void*)VAR_11));
  return VAR_1;
}
