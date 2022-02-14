
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct correl_data {scalar_t__ sxy; scalar_t__ syy; scalar_t__ sxx; scalar_t__ sy; scalar_t__ sx; scalar_t__ n; } ;
typedef int strm_value ;
typedef int strm_stream ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct correl_data* FUNC_0 (int) ;
 int VAR_4 ;
 int FUNC_1 (int *,int,int *,char*) ;
 int FUNC_2 (int ,int ,int ,void*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(strm_stream* VAR_5, int VAR_6, strm_value* VAR_7, strm_value* VAR_8)
{
  struct correl_data* VAR_9;

  FUNC_1(VAR_5, VAR_6, VAR_7, "");
  VAR_9 = FUNC_0(sizeof(struct correl_data));
  if (!VAR_9) return VAR_0;
  VAR_9->n = 0;
  VAR_9->sx = VAR_9->sy = VAR_9->sxx = VAR_9->syy = VAR_9->sxy = 0;
  *VAR_8 = FUNC_3(FUNC_2(VAR_4, VAR_3,
                                           VAR_2, (void*)VAR_9));
  return VAR_1;
}
