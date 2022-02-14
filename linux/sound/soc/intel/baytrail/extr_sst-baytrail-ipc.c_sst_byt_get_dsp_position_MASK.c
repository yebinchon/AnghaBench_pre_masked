
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct TYPE_2__ {scalar_t__ lpe; } ;
struct sst_dsp {TYPE_1__ addr; } ;
struct sst_byt_tstamp {int ring_buffer_counter; } ;
struct sst_byt_stream {int str_id; } ;
struct sst_byt {struct sst_dsp* dsp; } ;
typedef int fw_tstamp ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct sst_byt_tstamp*,scalar_t__,int) ;

int FUNC_2(struct sst_byt *VAR_1,
        struct sst_byt_stream *VAR_2, int VAR_3)
{
 struct sst_dsp *VAR_4 = VAR_1->dsp;
 struct sst_byt_tstamp VAR_5;
 u8 VAR_6 = VAR_2->str_id;
 u32 VAR_7;

 VAR_7 = VAR_0 + VAR_6 * sizeof(VAR_5);
 FUNC_1(&VAR_5,
        VAR_4->addr.lpe + VAR_7, sizeof(VAR_5));

 return FUNC_0(VAR_5.ring_buffer_counter, VAR_3);
}
