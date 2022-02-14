
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlattr {int dummy; } ;
struct nf_conntrack_helper {int flags; void* queue_num; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;


 int VAR_5 ;
 int FUNC_0 (struct nf_conntrack_helper*,struct nlattr const* const) ;
 int FUNC_1 (struct nlattr const* const) ;
 void* FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(const struct nlattr * const VAR_6[],
       struct nf_conntrack_helper *VAR_7)
{
 int VAR_8;

 if (VAR_6[VAR_2])
  return -VAR_0;

 if (VAR_6[VAR_1]) {
  VAR_8 = FUNC_0(VAR_7, VAR_6[VAR_1]);
  if (VAR_8 < 0)
   return VAR_8;
 }
 if (VAR_6[VAR_3])
  VAR_7->queue_num = FUNC_2(FUNC_1(VAR_6[VAR_3]));

 if (VAR_6[VAR_4]) {
  int VAR_9 = FUNC_2(FUNC_1(VAR_6[VAR_4]));

  switch(VAR_9) {
  case 128:
   VAR_7->flags |= VAR_5;
   break;
  case 129:
   VAR_7->flags &= ~VAR_5;
   break;
  }
 }
 return 0;
}
