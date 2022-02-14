
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct skl_pipe_params {int format; int ch; int s_freq; int host_bps; scalar_t__ host_dma_id; int stream; } ;
struct skl_dev {int pci; } ;
struct hdac_stream {int dummy; } ;
struct hdac_ext_stream {int dummy; } ;
struct hdac_bus {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_5__ {int prepared; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 struct skl_dev* FUNC_1 (struct hdac_bus*) ;
 int FUNC_2 (struct device*,char*,unsigned int,int ,int ,int ) ;
 struct hdac_bus* FUNC_3 (struct device*) ;
 TYPE_1__* FUNC_4 (struct hdac_ext_stream*) ;
 unsigned int FUNC_5 (int ,int ,int ,int ,int ) ;
 int FUNC_6 (struct hdac_bus*,struct hdac_ext_stream*,int) ;
 struct hdac_stream* FUNC_7 (struct hdac_bus*,int ,scalar_t__) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*,unsigned int) ;
 int FUNC_10 (TYPE_1__*) ;
 struct hdac_ext_stream* FUNC_11 (struct hdac_stream*) ;

int FUNC_12(struct device *VAR_1, struct skl_pipe_params *VAR_2)
{
 struct hdac_bus *VAR_3 = FUNC_3(VAR_1);
 struct skl_dev *VAR_4 = FUNC_1(VAR_3);
 unsigned int VAR_5;
 struct hdac_stream *VAR_6;
 struct hdac_ext_stream *VAR_7;
 int VAR_8;

 VAR_6 = FUNC_7(VAR_3, VAR_2->stream,
     VAR_2->host_dma_id + 1);
 if (!VAR_6)
  return -VAR_0;

 VAR_7 = FUNC_11(VAR_6);
 FUNC_6(VAR_3, VAR_7, 1);

 VAR_5 = FUNC_5(VAR_2->s_freq,
   VAR_2->ch, VAR_2->format, VAR_2->host_bps, 0);

 FUNC_2(VAR_1, "format_val=%d, rate=%d, ch=%d, format=%d\n",
  VAR_5, VAR_2->s_freq, VAR_2->ch, VAR_2->format);

 FUNC_8(FUNC_4(VAR_7));
 VAR_8 = FUNC_9(FUNC_4(VAR_7), VAR_5);
 if (VAR_8 < 0)
  return VAR_8;





 if (FUNC_0(VAR_4->pci)) {
  FUNC_6(VAR_3, VAR_7, 0);
  VAR_8 = FUNC_10(FUNC_4(VAR_7));
  FUNC_6(VAR_3, VAR_7, 1);
 } else {
  VAR_8 = FUNC_10(FUNC_4(VAR_7));
 }

 if (VAR_8 < 0)
  return VAR_8;

 FUNC_4(VAR_7)->prepared = 1;

 return 0;
}
