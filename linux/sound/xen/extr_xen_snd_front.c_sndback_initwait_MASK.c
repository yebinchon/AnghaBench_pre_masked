
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xen_snd_front_info {int dummy; } ;


 int FUNC_0 (struct xen_snd_front_info*,int*) ;
 int FUNC_1 (struct xen_snd_front_info*,int) ;
 int FUNC_2 (struct xen_snd_front_info*) ;

__attribute__((used)) static int FUNC_3(struct xen_snd_front_info *VAR_0)
{
 int VAR_1;
 int VAR_2;

 VAR_2 = FUNC_0(VAR_0, &VAR_1);
 if (VAR_2 < 0)
  return VAR_2;


 VAR_2 = FUNC_1(VAR_0, VAR_1);
 if (VAR_2 < 0)
  return VAR_2;

 return FUNC_2(VAR_0);
}
