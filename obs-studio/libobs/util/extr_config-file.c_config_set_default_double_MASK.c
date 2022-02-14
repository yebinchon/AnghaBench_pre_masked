
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct dstr {int array; } ;
struct TYPE_4__ {int defaults; } ;
typedef TYPE_1__ config_t ;


 int FUNC_0 (TYPE_1__*,int *,char const*,char const*,int ) ;
 int FUNC_1 (struct dstr*) ;
 int FUNC_2 (struct dstr*,char*,double) ;

void FUNC_3(config_t *VAR_0, const char *VAR_1,
          const char *VAR_2, double VAR_3)
{
 struct dstr VAR_4;
 FUNC_1(&VAR_4);
 FUNC_2(&VAR_4, "%g", VAR_3);
 FUNC_0(VAR_0, &VAR_0->defaults, VAR_1, VAR_2, VAR_4.array);
}
