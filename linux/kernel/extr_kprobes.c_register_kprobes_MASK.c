
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kprobe {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct kprobe*) ;
 int FUNC_1 (struct kprobe**,int) ;

int FUNC_2(struct kprobe **VAR_1, int VAR_2)
{
 int VAR_3, VAR_4 = 0;

 if (VAR_2 <= 0)
  return -VAR_0;
 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
  VAR_4 = FUNC_0(VAR_1[VAR_3]);
  if (VAR_4 < 0) {
   if (VAR_3 > 0)
    FUNC_1(VAR_1, VAR_3);
   break;
  }
 }
 return VAR_4;
}
