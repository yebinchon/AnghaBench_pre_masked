
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_sf_list {scalar_t__ currsf; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,int) ;

__attribute__((used)) static int
FUNC_1(struct snd_sf_list *VAR_1, int VAR_2)
{

 if (VAR_1->currsf) {

  if (FUNC_0(VAR_1->currsf, VAR_2))
   return 0;
 }
 return -VAR_0;
}
