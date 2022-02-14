
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vdev_info {int * vqs; } ;


 unsigned long long VAR_0 ;
 unsigned long long VAR_1 ;
 unsigned long long VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,char**,int ,int ,int *) ;
 int FUNC_3 () ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (struct vdev_info*,int *,int,int) ;
 int FUNC_5 (struct vdev_info*,unsigned long long) ;
 int FUNC_6 (struct vdev_info*,int) ;

int FUNC_7(int VAR_5, char **VAR_6)
{
 struct vdev_info VAR_7;
 unsigned long long VAR_8 = (1ULL << VAR_2) |
  (1ULL << VAR_1) | (1ULL << VAR_0);
 int VAR_9;
 bool VAR_10 = 0;

 for (;;) {
  VAR_9 = FUNC_2(VAR_5, VAR_6, VAR_4, VAR_3, ((void*)0));
  switch (VAR_9) {
  case -1:
   goto done;
  case '?':
   FUNC_3();
   FUNC_1(2);
  case 'e':
   VAR_8 &= ~(1ULL << VAR_1);
   break;
  case 'h':
   FUNC_3();
   goto done;
  case 'i':
   VAR_8 &= ~(1ULL << VAR_2);
   break;
  case '0':
   VAR_8 &= ~(1ULL << VAR_0);
   break;
  case 'D':
   VAR_10 = 1;
   break;
  default:
   FUNC_0(0);
   break;
  }
 }

done:
 FUNC_5(&VAR_7, VAR_8);
 FUNC_6(&VAR_7, 256);
 FUNC_4(&VAR_7, &VAR_7.vqs[0], VAR_10, 0x100000);
 return 0;
}
