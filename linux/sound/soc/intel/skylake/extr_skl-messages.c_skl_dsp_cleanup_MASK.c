
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_dma_buffer {int dummy; } ;
struct hdac_stream {int dummy; } ;
struct hdac_ext_stream {int dummy; } ;
struct hdac_bus {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct hdac_bus* FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*,int ,int,int) ;
 int FUNC_2 (struct hdac_stream*,struct snd_dma_buffer*) ;
 int FUNC_3 (struct hdac_ext_stream*,int ) ;
 struct hdac_stream* FUNC_4 (struct hdac_bus*,int ,int) ;
 struct hdac_ext_stream* FUNC_5 (struct hdac_stream*) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_4,
  struct snd_dma_buffer *VAR_5, int VAR_6)
{
 struct hdac_bus *VAR_7 = FUNC_0(VAR_4);
 struct hdac_stream *VAR_8;
 struct hdac_ext_stream *VAR_9;

 if (!VAR_7)
  return -VAR_1;

 VAR_8 = FUNC_4(VAR_7,
  VAR_3, VAR_6);
 if (!VAR_8)
  return -VAR_0;

 VAR_9 = FUNC_5(VAR_8);
 FUNC_1(VAR_4, 0, VAR_6, 0);
 FUNC_3(VAR_9, VAR_2);

 FUNC_2(VAR_8, VAR_5);

 return 0;
}
