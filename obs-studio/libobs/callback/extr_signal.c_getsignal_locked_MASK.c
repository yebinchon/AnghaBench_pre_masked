
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct signal_info {int dummy; } ;
struct TYPE_4__ {int mutex; } ;
typedef TYPE_1__ signal_handler_t ;


 struct signal_info* FUNC_0 (TYPE_1__*,char const*,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static inline struct signal_info *FUNC_3(signal_handler_t *VAR_0,
         const char *VAR_1)
{
 struct signal_info *VAR_2;

 if (!VAR_0)
  return ((void*)0);

 FUNC_1(&VAR_0->mutex);
 VAR_2 = FUNC_0(VAR_0, VAR_1, ((void*)0));
 FUNC_2(&VAR_0->mutex);

 return VAR_2;
}
