
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sevent {scalar_t__ name; scalar_t__ topic; int desc; } ;


 int FUNC_0 (scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_1(const void *VAR_0, const void *VAR_1)
{
 const struct sevent *VAR_2 = VAR_0;
 const struct sevent *VAR_3 = VAR_1;


 if (!!VAR_2->desc != !!VAR_3->desc)
  return !!VAR_2->desc - !!VAR_3->desc;
 if (VAR_2->topic && VAR_3->topic) {
  int VAR_4 = FUNC_0(VAR_2->topic, VAR_3->topic);

  if (VAR_4)
   return VAR_4;
 }
 return FUNC_0(VAR_2->name, VAR_3->name);
}
