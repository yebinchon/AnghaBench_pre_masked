
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uniq_data {int init; void* func; void* last; } ;
typedef void* strm_value ;
typedef int strm_stream ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct uniq_data* FUNC_0 (int) ;
 int VAR_5 ;
 int FUNC_1 (int *,int,void**,char*,void**) ;
 scalar_t__ FUNC_2 (void*) ;
 void* FUNC_3 () ;
 int FUNC_4 (int ,int ,int *,void*) ;
 void* FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(strm_stream* VAR_6, int VAR_7, strm_value* VAR_8, strm_value* VAR_9)
{
  struct uniq_data* VAR_10;
  strm_value VAR_11 = FUNC_3();

  FUNC_1(VAR_6, VAR_7, VAR_8, "|v", &VAR_11);
  VAR_10 = FUNC_0(sizeof(*VAR_10));
  if (!VAR_10) return VAR_1;
  VAR_10->last = FUNC_3();
  VAR_10->func = VAR_11;
  VAR_10->init = VAR_0;
  *VAR_9 = FUNC_5(FUNC_4(VAR_5,
                                           FUNC_2(VAR_11) ? VAR_3 : VAR_4,
                                           ((void*)0), (void*)VAR_10));
  return VAR_2;
}
