
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct table_set_header {int dummy; } ;
struct table_header {int td_id; int td_flags; int td_lolen; } ;
struct aa_dfa {scalar_t__ flags; struct table_header** tables; int count; } ;
typedef int __be32 ;
typedef int __be16 ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct aa_dfa* FUNC_2 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;







 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (struct aa_dfa*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct table_header*) ;
 struct aa_dfa* FUNC_6 (int,int ) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ,int) ;
 struct table_header* FUNC_10 (char*,size_t) ;
 int FUNC_11 (struct aa_dfa*) ;
 int FUNC_12 (struct table_header**,int) ;

struct aa_dfa *FUNC_13(void *VAR_9, size_t VAR_10, int VAR_11)
{
 int VAR_12;
 int VAR_13 = -VAR_1;
 char *VAR_14 = VAR_9;
 struct table_header *VAR_15 = ((void*)0);
 struct aa_dfa *VAR_16 = FUNC_6(sizeof(struct aa_dfa), VAR_3);
 if (!VAR_16)
  goto fail;

 FUNC_4(&VAR_16->count);

 VAR_13 = -VAR_2;


 if (VAR_10 < sizeof(struct table_set_header))
  goto fail;

 if (FUNC_7(*(__be32 *) VAR_14) != VAR_8)
  goto fail;

 VAR_12 = FUNC_7(*(__be32 *) (VAR_14 + 4));
 if (VAR_10 < VAR_12)
  goto fail;

 VAR_16->flags = FUNC_8(*(__be16 *) (VAR_14 + 12));
 if (VAR_16->flags != 0 && VAR_16->flags != VAR_7)
  goto fail;

 VAR_14 += VAR_12;
 VAR_10 -= VAR_12;

 while (VAR_10 > 0) {
  VAR_15 = FUNC_10(VAR_14, VAR_10);
  if (!VAR_15)
   goto fail;

  switch (VAR_15->td_id) {
  case 134:
   if (!(VAR_15->td_flags & FUNC_0(VAR_11)))
    goto fail;
   break;
  case 133:
   if (!(VAR_15->td_flags & FUNC_1(VAR_11)))
    goto fail;
   break;
  case 132:
   if (VAR_15->td_flags != VAR_5)
    goto fail;
   break;
  case 130:
  case 128:
  case 131:
   if (VAR_15->td_flags != VAR_4)
    goto fail;
   break;
  case 129:
   if (VAR_15->td_flags != VAR_6)
    goto fail;
   break;
  default:
   goto fail;
  }

  if (VAR_16->tables[VAR_15->td_id])
   goto fail;
  VAR_16->tables[VAR_15->td_id] = VAR_15;
  VAR_14 += FUNC_9(VAR_15->td_lolen, VAR_15->td_flags);
  VAR_10 -= FUNC_9(VAR_15->td_lolen, VAR_15->td_flags);
  VAR_15 = ((void*)0);
 }
 VAR_13 = FUNC_12(VAR_16->tables, VAR_11);
 if (VAR_13)
  goto fail;

 if (VAR_11 & VAR_0) {
  VAR_13 = FUNC_11(VAR_16);
  if (VAR_13)
   goto fail;
 }

 return VAR_16;

fail:
 FUNC_5(VAR_15);
 FUNC_3(VAR_16);
 return FUNC_2(VAR_13);
}
