
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct take_data {scalar_t__ n; } ;
typedef int strm_value ;
typedef int strm_stream ;
typedef scalar_t__ strm_int ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct take_data* FUNC_0 (int) ;
 int VAR_3 ;
 int FUNC_1 (int *,int,int *,char*,scalar_t__*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int ,int ,int *,void*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(strm_stream* VAR_4, int VAR_5, strm_value* VAR_6, strm_value* VAR_7)
{
  struct take_data* VAR_8;
  strm_int VAR_9;

  FUNC_1(VAR_4, VAR_5, VAR_6, "i", &VAR_9);
  if (VAR_9 < 0) {
    FUNC_2(VAR_4, "negative iteration");
    return VAR_0;
  }
  VAR_8 = FUNC_0(sizeof(*VAR_8));
  if (!VAR_8) return VAR_0;
  VAR_8->n = VAR_9;
  *VAR_7 = FUNC_4(FUNC_3(VAR_3, VAR_2, ((void*)0), (void*)VAR_8));
  return VAR_1;
}
