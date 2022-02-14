
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct layout {unsigned int layout_id; TYPE_1__* codecs; } ;
struct TYPE_2__ {scalar_t__ name; } ;


 struct layout* VAR_0 ;

__attribute__((used)) static struct layout *FUNC_0(unsigned int VAR_1)
{
 struct layout *VAR_2;

 VAR_2 = VAR_0;
 while (VAR_2->codecs[0].name) {
  if (VAR_2->layout_id == VAR_1)
   return VAR_2;
  VAR_2++;
 }
 return ((void*)0);
}
