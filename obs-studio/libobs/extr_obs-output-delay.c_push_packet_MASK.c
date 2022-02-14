
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct obs_output {int delay_mutex; int delay_data; } ;
struct encoder_packet {int dummy; } ;
struct delay_data {int packet; int ts; int msg; int member_0; } ;
typedef int dd ;


 int VAR_0 ;
 int FUNC_0 (int *,struct delay_data*,int) ;
 int FUNC_1 (int *,struct encoder_packet*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static inline void FUNC_4(struct obs_output *VAR_1,
          struct encoder_packet *VAR_2, uint64_t VAR_3)
{
 struct delay_data VAR_4 = {0};

 VAR_4.msg = VAR_0;
 VAR_4.ts = VAR_3;
 FUNC_1(&VAR_4.packet, VAR_2);

 FUNC_2(&VAR_1->delay_mutex);
 FUNC_0(&VAR_1->delay_data, &VAR_4, sizeof(VAR_4));
 FUNC_3(&VAR_1->delay_mutex);
}
