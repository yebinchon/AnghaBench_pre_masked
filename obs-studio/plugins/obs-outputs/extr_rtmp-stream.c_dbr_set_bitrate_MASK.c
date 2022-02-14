
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtmp_stream {int dbr_cur_bitrate; int output; } ;
typedef int obs_encoder_t ;
typedef int obs_data_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,int ) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 int * FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct rtmp_stream *VAR_0)
{
 obs_encoder_t *VAR_1 = FUNC_4(VAR_0->output);
 obs_data_t *VAR_2 = FUNC_2(VAR_1);

 FUNC_1(VAR_2, "bitrate", VAR_0->dbr_cur_bitrate);
 FUNC_3(VAR_1, VAR_2);

 FUNC_0(VAR_2);
}
