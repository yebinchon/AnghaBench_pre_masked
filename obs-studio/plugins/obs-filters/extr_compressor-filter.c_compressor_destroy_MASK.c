
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct compressor_data {struct compressor_data* envelope_buf; struct compressor_data* sidechain_name; int sidechain_update_mutex; int sidechain_mutex; struct compressor_data** sidechain_buf; int * sidechain_data; scalar_t__ weak_sidechain; } ;
typedef int obs_source_t ;


 size_t VAR_0 ;
 int FUNC_0 (struct compressor_data*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (struct compressor_data*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,struct compressor_data*) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int *) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_7(void *VAR_2)
{
 struct compressor_data *VAR_3 = VAR_2;

 if (VAR_3->weak_sidechain) {
  obs_source_t *VAR_4 = FUNC_2(VAR_3);
  if (VAR_4) {
   FUNC_4(
    VAR_4, VAR_1, VAR_3);
   FUNC_3(VAR_4);
  }

  FUNC_5(VAR_3->weak_sidechain);
 }

 for (size_t VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  FUNC_1(&VAR_3->sidechain_data[VAR_5]);
  FUNC_0(VAR_3->sidechain_buf[VAR_5]);
 }
 FUNC_6(&VAR_3->sidechain_mutex);
 FUNC_6(&VAR_3->sidechain_update_mutex);

 FUNC_0(VAR_3->sidechain_name);
 FUNC_0(VAR_3->envelope_buf);
 FUNC_0(VAR_3);
}
