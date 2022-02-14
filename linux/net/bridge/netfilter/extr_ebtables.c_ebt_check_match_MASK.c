
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xt_mtchk_param {int matchinfo; struct xt_match* match; struct ebt_entry* entryinfo; } ;
struct xt_match {scalar_t__ family; int me; } ;
struct TYPE_2__ {struct xt_match* match; int revision; int name; } ;
struct ebt_entry_match {size_t match_size; int data; TYPE_1__ u; } ;
struct ebt_entry {int watchers_offset; int invflags; int ethproto; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct xt_match*) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct xt_match*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (struct xt_mtchk_param*,size_t,int ,int) ;
 struct xt_match* FUNC_6 (scalar_t__,int ,int ) ;

__attribute__((used)) static inline int
FUNC_7(struct ebt_entry_match *VAR_3, struct xt_mtchk_param *VAR_4,
  unsigned int *VAR_5)
{
 const struct ebt_entry *VAR_6 = VAR_4->entryinfo;
 struct xt_match *VAR_7;
 size_t VAR_8 = ((char *)VAR_6 + VAR_6->watchers_offset) - (char *)VAR_3;
 int VAR_9;

 if (VAR_8 < sizeof(struct ebt_entry_match) ||
     VAR_8 - sizeof(struct ebt_entry_match) < VAR_3->match_size)
  return -VAR_1;

 VAR_7 = FUNC_6(VAR_2, VAR_3->u.name, VAR_3->u.revision);
 if (FUNC_0(VAR_7) || VAR_7->family != VAR_2) {
  if (!FUNC_0(VAR_7))
   FUNC_2(VAR_7->me);
  FUNC_4("ebt_%s", VAR_3->u.name);
  VAR_7 = FUNC_6(VAR_2, VAR_3->u.name, VAR_3->u.revision);
 }
 if (FUNC_0(VAR_7))
  return FUNC_1(VAR_7);
 VAR_3->u.match = VAR_7;

 VAR_4->match = VAR_7;
 VAR_4->matchinfo = VAR_3->data;
 VAR_9 = FUNC_5(VAR_4, VAR_3->match_size,
       FUNC_3(VAR_6->ethproto), VAR_6->invflags & VAR_0);
 if (VAR_9 < 0) {
  FUNC_2(VAR_7->me);
  return VAR_9;
 }

 (*VAR_5)++;
 return 0;
}
