
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef scalar_t__ u16 ;
struct nlmsg_perm {scalar_t__ nlmsg_type; int perm; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(u16 VAR_1, u32 *VAR_2, const struct nlmsg_perm *VAR_3, size_t VAR_4)
{
 int VAR_5, VAR_6 = -VAR_0;

 for (VAR_5 = 0; VAR_5 < VAR_4/sizeof(struct nlmsg_perm); VAR_5++)
  if (VAR_1 == VAR_3[VAR_5].nlmsg_type) {
   *VAR_2 = VAR_3[VAR_5].perm;
   VAR_6 = 0;
   break;
  }

 return VAR_6;
}
