
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdp_id_md {int ifindex; int flags; int id; } ;
typedef int __u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int VAR_5 ;
 int FUNC_1 (int*) ;
 int FUNC_2 (int,int,int ,struct xdp_id_md*) ;

int FUNC_3(int VAR_6, __u32 *VAR_7, __u32 VAR_8)
{
 struct xdp_id_md VAR_9 = {};
 int VAR_10, VAR_11;
 __u32 VAR_12;
 __u32 VAR_13;

 if (VAR_8 & ~VAR_3)
  return -VAR_0;


 VAR_8 &= (VAR_4 | VAR_1 | VAR_2);
 VAR_13 = VAR_8 - 1;
 if (VAR_8 && VAR_8 & VAR_13)
  return -VAR_0;

 VAR_10 = FUNC_1(&VAR_12);
 if (VAR_10 < 0)
  return VAR_10;

 VAR_9.ifindex = VAR_6;
 VAR_9.flags = VAR_8;

 VAR_11 = FUNC_2(VAR_10, VAR_12, VAR_5, &VAR_9);
 if (!VAR_11)
  *VAR_7 = VAR_9.id;

 FUNC_0(VAR_10);
 return VAR_11;
}
