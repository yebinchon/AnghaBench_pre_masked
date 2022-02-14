
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_2__ {int flags; unsigned int header_len; } ;
struct rt6_info {TYPE_1__ dst; } ;
struct frag_hdr {int dummy; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(unsigned int *VAR_1,
    int *VAR_2,
    unsigned int VAR_3,
    struct sk_buff *VAR_4,
    struct rt6_info *VAR_5,
    unsigned int VAR_6)
{
 if (!(VAR_5->dst.flags & VAR_0)) {
  if (!VAR_4) {

   *VAR_1 = VAR_6 - VAR_5->dst.header_len;

  } else {




   *VAR_1 = VAR_6;
  }
  *VAR_2 = ((*VAR_1 - VAR_3) & ~7)
         + VAR_3 - sizeof(struct frag_hdr);
 }
}
