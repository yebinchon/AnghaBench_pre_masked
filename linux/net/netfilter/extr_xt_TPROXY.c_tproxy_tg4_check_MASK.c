
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_tgchk_param {int net; struct ipt_ip* entryinfo; } ;
struct ipt_ip {scalar_t__ proto; int invflags; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int FUNC_2(const struct xt_tgchk_param *VAR_4)
{
 const struct ipt_ip *VAR_5 = VAR_4->entryinfo;
 int VAR_6;

 VAR_6 = FUNC_0(VAR_4->net);
 if (VAR_6)
  return VAR_6;

 if ((VAR_5->proto == VAR_1 || VAR_5->proto == VAR_2)
     && !(VAR_5->invflags & VAR_3))
  return 0;

 FUNC_1("Can be used only with -p tcp or -p udp\n");
 return -VAR_0;
}
