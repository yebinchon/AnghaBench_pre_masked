
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_kcontrol {int dummy; } ;
struct snd_ctl_elem_info {int dummy; } ;


 int FUNC_0 (struct snd_ctl_elem_info*,int,int,char const* const*) ;

__attribute__((used)) static int FUNC_1(struct snd_kcontrol *VAR_0,
      struct snd_ctl_elem_info *VAR_1)
{





 static const char * const VAR_2[] = {"LineIn Mic1", "LineIn Mic1 Mic3",
           "Surr LFE/C Mic3", "LineIn LFE/C Mic3",
           "LineIn Mic2", "LineIn Mic2 Mic1",
           "Surr LFE Mic1", "Surr LFE Mic1 Mic2"};

 return FUNC_0(VAR_1, 1, 8, VAR_2);
}
