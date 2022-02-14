
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__* values; } ;
typedef TYPE_1__ ax25_dev ;
struct TYPE_6__ {int rtt; int t1; int t2; int t3; int idle; scalar_t__ window; int modulus; scalar_t__ backoff; scalar_t__ paclen; scalar_t__ n2; } ;
typedef TYPE_2__ ax25_cb ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static void FUNC_1(ax25_cb *VAR_12, ax25_dev *VAR_13)
{
 VAR_12->rtt = FUNC_0(VAR_13->values[VAR_8]) / 2;
 VAR_12->t1 = FUNC_0(VAR_13->values[VAR_8]);
 VAR_12->t2 = FUNC_0(VAR_13->values[VAR_9]);
 VAR_12->t3 = FUNC_0(VAR_13->values[VAR_10]);
 VAR_12->n2 = VAR_13->values[VAR_6];
 VAR_12->paclen = VAR_13->values[VAR_7];
 VAR_12->idle = FUNC_0(VAR_13->values[VAR_5]);
 VAR_12->backoff = VAR_13->values[VAR_3];

 if (VAR_13->values[VAR_2]) {
  VAR_12->modulus = VAR_0;
  VAR_12->window = VAR_13->values[VAR_4];
 } else {
  VAR_12->modulus = VAR_1;
  VAR_12->window = VAR_13->values[VAR_11];
 }
}
