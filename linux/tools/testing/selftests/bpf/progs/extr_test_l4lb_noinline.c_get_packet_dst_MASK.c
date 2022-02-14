
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vip_meta {int vip_num; } ;
struct real_definition {int dummy; } ;
struct packet_description {int dummy; } ;
typedef int __u32 ;


 int VAR_0 ;
 void* FUNC_0 (int *,int*) ;
 int VAR_1 ;
 int FUNC_1 (struct packet_description*,int) ;
 int VAR_2 ;

__attribute__((used)) static bool FUNC_2(struct real_definition **VAR_3,
      struct packet_description *VAR_4,
      struct vip_meta *VAR_5,
      bool VAR_6)
{
 __u32 VAR_7 = FUNC_1(VAR_4, VAR_6);
 __u32 VAR_8 = VAR_0 * VAR_5->vip_num + VAR_7 % VAR_0;
 __u32 *VAR_9;

 if (VAR_7 != 0x358459b7 &&
     VAR_7 != 0x2f4bc6bb )
  return 0;

 VAR_9 = FUNC_0(&VAR_1, &VAR_8);
 if (!VAR_9)
  return 0;
 VAR_8 = *VAR_9;
 *VAR_3 = FUNC_0(&VAR_2, &VAR_8);
 if (!(*VAR_3))
  return 0;
 return 1;
}
