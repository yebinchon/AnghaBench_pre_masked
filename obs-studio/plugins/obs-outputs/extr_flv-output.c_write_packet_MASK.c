
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct flv_output {int file; int start_dts_offset; int last_packet_ts; } ;
struct encoder_packet {int dts; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct encoder_packet*,int ,int **,size_t*,int) ;
 int FUNC_2 (int *,int,size_t,int ) ;
 int FUNC_3 (struct encoder_packet*,int ) ;

__attribute__((used)) static int FUNC_4(struct flv_output *VAR_0,
   struct encoder_packet *VAR_1, bool VAR_2)
{
 uint8_t *VAR_3;
 size_t VAR_4;
 int VAR_5 = 0;

 VAR_0->last_packet_ts = FUNC_3(VAR_1, VAR_1->dts);

 FUNC_1(VAR_1, VAR_2 ? 0 : VAR_0->start_dts_offset, &VAR_3,
         &VAR_4, VAR_2);
 FUNC_2(VAR_3, 1, VAR_4, VAR_0->file);
 FUNC_0(VAR_3);

 return VAR_5;
}
