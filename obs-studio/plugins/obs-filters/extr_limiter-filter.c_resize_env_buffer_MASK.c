
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct limiter_data {size_t envelope_buf_len; int envelope_buf; } ;


 int FUNC_0 (int ,size_t) ;

__attribute__((used)) static void FUNC_1(struct limiter_data *VAR_0, size_t VAR_1)
{
 VAR_0->envelope_buf_len = VAR_1;
 VAR_0->envelope_buf = FUNC_0(VAR_0->envelope_buf, VAR_1 * sizeof(float));
}
