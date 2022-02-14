
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdmi_spec_per_pin {int pcm_idx; int * pcm; } ;
struct hdmi_spec {int pcm_used; int pcm_bitmap; } ;


 int FUNC_0 (int,int *) ;

__attribute__((used)) static void FUNC_1(struct hdmi_spec *VAR_0,
    struct hdmi_spec_per_pin *VAR_1)
{
 int VAR_2;


 if (!VAR_1->pcm)
  return;
 VAR_2 = VAR_1->pcm_idx;
 VAR_1->pcm_idx = -1;
 VAR_1->pcm = ((void*)0);
 if (VAR_2 >= 0 && VAR_2 < VAR_0->pcm_used)
  FUNC_0(VAR_2, &VAR_0->pcm_bitmap);
}
