
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct batadv_tp_vars {size_t cwnd; size_t last_sent; int last_acked; } ;


 size_t FUNC_0 (int *) ;

__attribute__((used)) static bool FUNC_1(struct batadv_tp_vars *VAR_0,
       size_t VAR_1)
{
 u32 VAR_2, VAR_3;

 VAR_3 = FUNC_0(&VAR_0->last_acked) + VAR_0->cwnd;
 VAR_2 = VAR_3 - VAR_0->last_sent;

 return VAR_2 >= VAR_1;
}
