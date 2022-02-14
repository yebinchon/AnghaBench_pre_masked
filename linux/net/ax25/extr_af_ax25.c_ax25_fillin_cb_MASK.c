
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ax25_dev ;
struct TYPE_4__ {int rtt; int t1; int t2; int t3; int idle; int window; int modulus; int backoff; int paclen; int n2; int * ax25_dev; } ;
typedef TYPE_1__ ax25_cb ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (TYPE_1__*,int *) ;
 int FUNC_1 (int ) ;

void FUNC_2(ax25_cb *VAR_12, ax25_dev *VAR_13)
{
 VAR_12->ax25_dev = VAR_13;

 if (VAR_12->ax25_dev != ((void*)0)) {
  FUNC_0(VAR_12, VAR_13);
  return;
 }




 VAR_12->rtt = FUNC_1(VAR_6) / 2;
 VAR_12->t1 = FUNC_1(VAR_6);
 VAR_12->t2 = FUNC_1(VAR_7);
 VAR_12->t3 = FUNC_1(VAR_8);
 VAR_12->n2 = VAR_4;
 VAR_12->paclen = VAR_5;
 VAR_12->idle = FUNC_1(VAR_3);
 VAR_12->backoff = VAR_1;

 if (VAR_0) {
  VAR_12->modulus = VAR_10;
  VAR_12->window = VAR_2;
 } else {
  VAR_12->modulus = VAR_11;
  VAR_12->window = VAR_9;
 }
}
