
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct config_item {char* value; } ;
struct TYPE_3__ {int mutex; int defaults; } ;
typedef TYPE_1__ config_t ;


 struct config_item* FUNC_0 (int *,char const*,char const*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

const char *FUNC_3(config_t *VAR_0, const char *VAR_1,
          const char *VAR_2)
{
 const struct config_item *VAR_3;
 const char *VAR_4 = ((void*)0);

 FUNC_1(&VAR_0->mutex);

 VAR_3 = FUNC_0(&VAR_0->defaults, VAR_1, VAR_2);
 if (VAR_3)
  VAR_4 = VAR_3->value;

 FUNC_2(&VAR_0->mutex);
 return VAR_4;
}
