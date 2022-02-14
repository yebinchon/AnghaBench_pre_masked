
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcf_meta_ops {int (* validate ) (void*,int) ;scalar_t__ metatype; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (void*,int) ;
 int FUNC_1 (void*,int) ;
 int FUNC_2 (void*,int) ;

__attribute__((used)) static int FUNC_3(struct tcf_meta_ops *VAR_2, void *VAR_3, int VAR_4)
{
 int VAR_5 = 0;






 if (VAR_2->validate)
  return VAR_2->validate(VAR_3, VAR_4);

 if (VAR_2->metatype == VAR_1)
  VAR_5 = FUNC_1(VAR_3, VAR_4);
 else if (VAR_2->metatype == VAR_0)
  VAR_5 = FUNC_0(VAR_3, VAR_4);

 return VAR_5;
}
