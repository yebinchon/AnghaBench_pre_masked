
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct layout {TYPE_1__* codecs; } ;
struct TYPE_2__ {scalar_t__ name; } ;


 int VAR_0 ;
 int FUNC_0 (char*,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct layout *VAR_1)
{
 int VAR_2;

 for (VAR_2=0; VAR_2<VAR_0; VAR_2++) {
  if (VAR_1->codecs[VAR_2].name) {
   FUNC_0("snd-aoa-codec-%s", VAR_1->codecs[VAR_2].name);
  }
 }

}
