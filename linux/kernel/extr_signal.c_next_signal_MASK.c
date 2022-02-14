
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned long* sig; } ;
struct sigpending {TYPE_1__ signal; } ;
struct TYPE_5__ {unsigned long* sig; } ;
typedef TYPE_2__ sigset_t ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 unsigned long FUNC_0 (unsigned long) ;

int FUNC_1(struct sigpending *VAR_3, sigset_t *VAR_4)
{
 unsigned long VAR_5, *VAR_6, *VAR_7, VAR_8;
 int VAR_9 = 0;

 VAR_6 = VAR_3->signal.sig;
 VAR_7 = VAR_4->sig;





 VAR_8 = *VAR_6 &~ *VAR_7;
 if (VAR_8) {
  if (VAR_8 & VAR_0)
   VAR_8 &= VAR_0;
  VAR_9 = FUNC_0(~VAR_8) + 1;
  return VAR_9;
 }

 switch (VAR_2) {
 default:
  for (VAR_5 = 1; VAR_5 < VAR_2; ++VAR_5) {
   VAR_8 = *++VAR_6 &~ *++VAR_7;
   if (!VAR_8)
    continue;
   VAR_9 = FUNC_0(~VAR_8) + VAR_5*VAR_1 + 1;
   break;
  }
  break;

 case 2:
  VAR_8 = VAR_6[1] &~ VAR_7[1];
  if (!VAR_8)
   break;
  VAR_9 = FUNC_0(~VAR_8) + VAR_1 + 1;
  break;

 case 1:

  break;
 }

 return VAR_9;
}
