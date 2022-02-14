
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pdacf {scalar_t__ port; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct snd_pdacf *VAR_4)
{
 int VAR_5 = 64 * 1024;

 while (FUNC_0(VAR_4->port + VAR_2) != FUNC_0(VAR_4->port + VAR_3)) {
  if (VAR_5-- < 0)
   return -VAR_0;
  FUNC_0(VAR_4->port + VAR_1);
 }
 return 0;
}
