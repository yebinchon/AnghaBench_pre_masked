
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ size; } ;
struct ftl_stream {int packets_mutex; TYPE_1__ packets; } ;
struct encoder_packet {int dummy; } ;
typedef int packet ;


 int FUNC_0 (TYPE_1__*,struct encoder_packet*,int) ;
 int FUNC_1 (char*,int) ;
 size_t FUNC_2 (struct ftl_stream*) ;
 int FUNC_3 (struct encoder_packet*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static inline void FUNC_6(struct ftl_stream *VAR_0)
{
 size_t VAR_1;

 FUNC_4(&VAR_0->packets_mutex);

 VAR_1 = FUNC_2(VAR_0);
 if (VAR_1)
  FUNC_1("Freeing %d remaining packets", (int)VAR_1);

 while (VAR_0->packets.size) {
  struct encoder_packet VAR_2;
  FUNC_0(&VAR_0->packets, &VAR_2, sizeof(VAR_2));
  FUNC_3(&VAR_2);
 }
 FUNC_5(&VAR_0->packets_mutex);
}
