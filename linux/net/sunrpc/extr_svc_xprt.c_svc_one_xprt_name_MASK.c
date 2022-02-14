
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct svc_xprt {TYPE_1__* xpt_class; } ;
struct TYPE_2__ {char* xcl_name; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int,char*,char*,int) ;
 int FUNC_1 (struct svc_xprt const*) ;

__attribute__((used)) static int FUNC_2(const struct svc_xprt *VAR_1,
        char *VAR_2, int VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_0(VAR_2, VAR_3, "%s %u\n",
   VAR_1->xpt_class->xcl_name,
   FUNC_1(VAR_1));
 if (VAR_4 >= VAR_3)
  return -VAR_0;
 return VAR_4;
}
