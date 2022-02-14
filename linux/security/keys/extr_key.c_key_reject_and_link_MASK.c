
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct key {scalar_t__ state; unsigned int expiry; int flags; int index_key; TYPE_1__* user; scalar_t__ restrict_link; } ;
struct assoc_array_edit {int dummy; } ;
struct TYPE_2__ {int nikeys; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct key*,struct assoc_array_edit**) ;
 int FUNC_1 (struct key*,int *,struct assoc_array_edit**) ;
 int FUNC_2 (struct key*,int *,struct assoc_array_edit*) ;
 int FUNC_3 (struct key*,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct key*) ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_6 (struct key*) ;
 int FUNC_7 (unsigned int) ;
 unsigned int FUNC_8 () ;
 int FUNC_9 (struct key*,unsigned int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (int ,int *) ;
 int FUNC_13 (int *,int ) ;

int FUNC_14(struct key *VAR_6,
   unsigned VAR_7,
   unsigned VAR_8,
   struct key *VAR_9,
   struct key *VAR_10)
{
 struct assoc_array_edit *VAR_11 = ((void*)0);
 int VAR_12, VAR_13, VAR_14 = 0;

 FUNC_5(VAR_6);
 FUNC_5(VAR_9);

 VAR_13 = 0;
 VAR_12 = -VAR_0;

 if (VAR_9) {
  if (VAR_9->restrict_link)
   return -VAR_1;

  VAR_14 = FUNC_3(VAR_9, &VAR_6->index_key);
  if (VAR_14 == 0) {
   VAR_14 = FUNC_1(VAR_9, &VAR_6->index_key, &VAR_11);
   if (VAR_14 < 0)
    FUNC_2(VAR_9, &VAR_6->index_key, VAR_11);
  }
 }

 FUNC_10(&VAR_4);


 if (VAR_6->state == VAR_3) {

  FUNC_4(&VAR_6->user->nikeys);
  FUNC_9(VAR_6, -VAR_8);
  VAR_6->expiry = FUNC_8() + VAR_7;
  FUNC_7(VAR_6->expiry + VAR_5);

  if (FUNC_12(VAR_2, &VAR_6->flags))
   VAR_13 = 1;

  VAR_12 = 0;


  if (VAR_9 && VAR_14 == 0)
   FUNC_0(VAR_6, &VAR_11);


  if (VAR_10)
   FUNC_6(VAR_10);
 }

 FUNC_11(&VAR_4);

 if (VAR_9 && VAR_14 == 0)
  FUNC_2(VAR_9, &VAR_6->index_key, VAR_11);


 if (VAR_13)
  FUNC_13(&VAR_6->flags, VAR_2);

 return VAR_12 == 0 ? VAR_14 : VAR_12;
}
