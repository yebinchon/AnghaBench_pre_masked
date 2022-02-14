
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pbuf {int tot_len; int * next; } ;
typedef int pbuf_layer ;
typedef scalar_t__ err_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int) ;
 int VAR_1 ;
 struct pbuf* FUNC_1 (int ,int ,int ) ;
 scalar_t__ FUNC_2 (struct pbuf*,struct pbuf*) ;
 int FUNC_3 (struct pbuf*) ;

struct pbuf*
FUNC_4(struct pbuf *VAR_2, pbuf_layer VAR_3)
{
  struct pbuf *VAR_4;
  err_t VAR_5;
  if (VAR_2->next == ((void*)0)) {
    return VAR_2;
  }
  VAR_4 = FUNC_1(VAR_3, VAR_2->tot_len, VAR_1);
  if (VAR_4 == ((void*)0)) {

    return VAR_2;
  }
  VAR_5 = FUNC_2(VAR_4, VAR_2);
  FUNC_0("pbuf_copy failed", VAR_5 == VAR_0);
  FUNC_3(VAR_2);
  return VAR_4;
}
