
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct synproxy_options {int tsecr; int tsval; int options; int wscale; } ;
struct nf_synproxy_info {int wscale; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;

void FUNC_1(const struct nf_synproxy_info *VAR_3,
        struct synproxy_options *VAR_4)
{
 VAR_4->tsecr = VAR_4->tsval;
 VAR_4->tsval = FUNC_0() & ~0x3f;

 if (VAR_4->options & VAR_2) {
  VAR_4->tsval |= VAR_4->wscale;
  VAR_4->wscale = VAR_3->wscale;
 } else
  VAR_4->tsval |= 0xf;

 if (VAR_4->options & VAR_1)
  VAR_4->tsval |= 1 << 4;

 if (VAR_4->options & VAR_0)
  VAR_4->tsval |= 1 << 5;
}
