
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mixer_build {TYPE_1__* mixer; } ;
struct TYPE_2__ {int protocol; } ;





 int FUNC_0 (struct mixer_build*,int,void*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_1(struct mixer_build *VAR_2, int VAR_3,
           void *VAR_4)
{
 switch (VAR_2->mixer->protocol) {
 case 130:
 case 129:
 default:
  return FUNC_0(VAR_2, VAR_3, VAR_4,
         VAR_0, 0);
 case 128:
  return FUNC_0(VAR_2, VAR_3, VAR_4,
         VAR_1, 0);
 }
}
