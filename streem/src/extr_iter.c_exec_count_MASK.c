
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct count_data {scalar_t__ count; } ;
typedef int strm_value ;
typedef int strm_stream ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct count_data* FUNC_0 (int) ;
 int VAR_3 ;
 int FUNC_1 (int *,int,int *,char*) ;
 int FUNC_2 (int ,int ,int ,void*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(strm_stream* VAR_4, int VAR_5, strm_value* VAR_6, strm_value* VAR_7)
{
  struct count_data* VAR_8;

  FUNC_1(VAR_4, VAR_5, VAR_6, "");
  VAR_8 = FUNC_0(sizeof(*VAR_8));
  VAR_8->count = 0;
  *VAR_7 = FUNC_3(FUNC_2(VAR_3, VAR_2, VAR_1, (void*)VAR_8));
  return VAR_0;
}
