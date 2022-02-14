
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct map_data {int func; } ;
typedef int strm_value ;
typedef int strm_stream ;


 int VAR_0 ;
 int VAR_1 ;
 struct map_data* FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (int *,int,int *,char*,int *) ;
 int FUNC_2 (int ,int ,int *,void*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(strm_stream* VAR_3, int VAR_4, strm_value* VAR_5, strm_value* VAR_6)
{
  struct map_data* VAR_7 = FUNC_0(sizeof(*VAR_7));

  FUNC_1(VAR_3, VAR_4, VAR_5, "v", &VAR_7->func);
  *VAR_6 = FUNC_3(FUNC_2(VAR_2, VAR_1, ((void*)0), (void*)VAR_7));
  return VAR_0;
}
