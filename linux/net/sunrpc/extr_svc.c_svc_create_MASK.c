
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_serv_ops {int dummy; } ;
struct svc_serv {int dummy; } ;
struct svc_program {int dummy; } ;


 struct svc_serv* FUNC_0 (struct svc_program*,unsigned int,int,struct svc_serv_ops const*) ;

struct svc_serv *
FUNC_1(struct svc_program *VAR_0, unsigned int VAR_1,
    const struct svc_serv_ops *VAR_2)
{
 return FUNC_0(VAR_0, VAR_1, 1, VAR_2);
}
