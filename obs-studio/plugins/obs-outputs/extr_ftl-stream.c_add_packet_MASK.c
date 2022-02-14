
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ftl_stream {int packets; } ;
struct encoder_packet {int dummy; } ;


 int FUNC_0 (int *,struct encoder_packet*,int) ;

__attribute__((used)) static inline bool FUNC_1(struct ftl_stream *VAR_0,
         struct encoder_packet *VAR_1)
{
 FUNC_0(&VAR_0->packets, VAR_1,
       sizeof(struct encoder_packet));
 return 1;
}
