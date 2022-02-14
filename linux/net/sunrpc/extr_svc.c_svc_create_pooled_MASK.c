
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_serv_ops {int dummy; } ;
struct svc_serv {int dummy; } ;
struct svc_program {int dummy; } ;


 struct svc_serv* FUNC_0 (struct svc_program*,unsigned int,unsigned int,struct svc_serv_ops const*) ;
 unsigned int FUNC_1 () ;
 int FUNC_2 () ;

struct svc_serv *
FUNC_3(struct svc_program *VAR_0, unsigned int VAR_1,
    const struct svc_serv_ops *VAR_2)
{
 struct svc_serv *VAR_3;
 unsigned int VAR_4 = FUNC_1();

 VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_4, VAR_2);
 if (!VAR_3)
  goto out_err;
 return VAR_3;
out_err:
 FUNC_2();
 return ((void*)0);
}
