
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcmsg {int dummy; } ;
struct nlattr {int dummy; } ;
struct bpf_filter_t {int ifindex; int devname; int kind; } ;


 int FUNC_0 (struct tcmsg*,struct nlattr**,int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(void *VAR_0, void *VAR_1, struct nlattr **VAR_2)
{
 const struct bpf_filter_t *VAR_3 = VAR_0;

 return FUNC_0((struct tcmsg *)VAR_1, VAR_2, VAR_3->kind,
         VAR_3->devname, VAR_3->ifindex);
}
