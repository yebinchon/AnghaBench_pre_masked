
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdsp {int period_bytes; int precise_ptr; } ;
typedef int snd_pcm_uframes_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct hdsp*,int ) ;

__attribute__((used)) static snd_pcm_uframes_t FUNC_1(struct hdsp *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_0(VAR_3, VAR_2);

 if (!VAR_3->precise_ptr)
  return (VAR_4 & VAR_0) ? (VAR_3->period_bytes / 4) : 0;

 VAR_4 &= VAR_1;
 VAR_4 /= 4;
 VAR_4 &= (VAR_3->period_bytes/2) - 1;
 return VAR_4;
}
