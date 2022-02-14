
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct synproxy_options {int wscale; int tsecr; int options; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_0(struct synproxy_options *VAR_3)
{
 VAR_3->wscale = VAR_3->tsecr & 0xf;
 if (VAR_3->wscale != 0xf)
  VAR_3->options |= VAR_2;

 VAR_3->options |= VAR_3->tsecr & (1 << 4) ? VAR_1 : 0;

 VAR_3->options |= VAR_3->tsecr & (1 << 5) ? VAR_0 : 0;
}
