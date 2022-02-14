
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bictcp {scalar_t__ found; scalar_t__ tcp_cwnd; scalar_t__ ack_cnt; scalar_t__ epoch_start; scalar_t__ delay_min; scalar_t__ bic_K; scalar_t__ bic_origin_point; scalar_t__ last_time; scalar_t__ last_cwnd; scalar_t__ last_max_cwnd; scalar_t__ cnt; } ;



__attribute__((used)) static inline void FUNC_0(struct bictcp *VAR_0)
{
 VAR_0->cnt = 0;
 VAR_0->last_max_cwnd = 0;
 VAR_0->last_cwnd = 0;
 VAR_0->last_time = 0;
 VAR_0->bic_origin_point = 0;
 VAR_0->bic_K = 0;
 VAR_0->delay_min = 0;
 VAR_0->epoch_start = 0;
 VAR_0->ack_cnt = 0;
 VAR_0->tcp_cwnd = 0;
 VAR_0->found = 0;
}
