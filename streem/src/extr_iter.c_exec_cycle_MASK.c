
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cycle_data {scalar_t__ count; int ary; } ;
typedef int strm_value ;
typedef int strm_stream ;
typedef scalar_t__ strm_int ;
typedef int strm_array ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct cycle_data* FUNC_0 (int) ;
 int FUNC_1 (int *,int,int *,char*,int *,scalar_t__*) ;
 int VAR_4 ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int ,int ,int ,void*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(strm_stream* VAR_5, int VAR_6, strm_value* VAR_7, strm_value* VAR_8)
{
  strm_array VAR_9;
  strm_int VAR_10 = -1;
  struct cycle_data *VAR_11;

  FUNC_1(VAR_5, VAR_6, VAR_7, "A|i", &VAR_9, &VAR_10);
  if (VAR_6 == 2 && VAR_10 <= 0) {
    FUNC_2(VAR_5, "invalid count number");
    return VAR_0;
  }
  VAR_11 = FUNC_0(sizeof(*VAR_11));
  VAR_11->ary = VAR_9;
  VAR_11->count = VAR_10;
  *VAR_8 = FUNC_4(FUNC_3(VAR_4, VAR_3, VAR_2, (void*)VAR_11));
  return VAR_1;
}
