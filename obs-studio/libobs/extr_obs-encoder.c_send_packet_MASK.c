
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ type; } ;
struct obs_encoder {TYPE_1__ info; } ;
struct encoder_packet {int dummy; } ;
struct encoder_callback {int param; int (* new_packet ) (int ,struct encoder_packet*) ;int sent_first_packet; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct obs_encoder*,struct encoder_callback*,struct encoder_packet*) ;
 int FUNC_1 (int ,struct encoder_packet*) ;

__attribute__((used)) static inline void FUNC_2(struct obs_encoder *VAR_1,
          struct encoder_callback *VAR_2,
          struct encoder_packet *VAR_3)
{

 if (VAR_1->info.type == VAR_0 && !VAR_2->sent_first_packet)
  FUNC_0(VAR_1, VAR_2, VAR_3);
 else
  VAR_2->new_packet(VAR_2->param, VAR_3);
}
