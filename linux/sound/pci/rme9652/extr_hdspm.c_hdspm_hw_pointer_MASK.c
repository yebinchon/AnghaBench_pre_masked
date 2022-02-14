
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdspm {int io_type; int period_bytes; } ;
typedef int snd_pcm_uframes_t ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 int FUNC_0 (struct hdspm*,int ) ;

__attribute__((used)) static snd_pcm_uframes_t FUNC_1(struct hdspm *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_0(VAR_3, VAR_2);

 switch (VAR_3->io_type) {
 case 128:
 case 129:
  VAR_4 &= VAR_1;
  VAR_4 /= 4;
  break;
 default:
  VAR_4 = (VAR_4 & VAR_0) ?
   (VAR_3->period_bytes / 4) : 0;
 }

 return VAR_4;
}
