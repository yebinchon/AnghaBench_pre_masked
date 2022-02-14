
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strm_kvs {int serial; int lock; int kv; int type; int ns; } ;
typedef int strm_value ;
typedef int strm_stream ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 struct strm_kvs* FUNC_1 (int) ;
 int VAR_4 ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (struct strm_kvs*) ;

__attribute__((used)) static int
FUNC_4(strm_stream* VAR_5, int VAR_6, strm_value* VAR_7, strm_value* VAR_8)
{
  struct strm_kvs *VAR_9 = FUNC_1(sizeof(struct strm_kvs));

  if (!VAR_9) return VAR_0;
  VAR_9->ns = VAR_4;
  VAR_9->type = VAR_2;
  VAR_9->kv = FUNC_0(VAR_3);
  VAR_9->serial = 1;
  FUNC_2(&VAR_9->lock, ((void*)0));
  *VAR_8 = FUNC_3(VAR_9);
  return VAR_1;
}
