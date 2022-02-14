
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct key_preparsed_payload {scalar_t__ expiry; } ;
struct key {scalar_t__ state; scalar_t__ expiry; int flags; TYPE_2__* user; TYPE_1__* type; } ;
struct assoc_array_edit {int dummy; } ;
struct TYPE_4__ {int nikeys; } ;
struct TYPE_3__ {int (* instantiate ) (struct key*,struct key_preparsed_payload*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct key*,struct assoc_array_edit**) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct key*) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_3 (struct key*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct key*,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 (struct key*,struct key_preparsed_payload*) ;
 scalar_t__ FUNC_10 (int ,int *) ;
 scalar_t__ FUNC_11 (int ,int *) ;
 int FUNC_12 (int *,int ) ;

__attribute__((used)) static int FUNC_13(struct key *VAR_7,
          struct key_preparsed_payload *VAR_8,
          struct key *VAR_9,
          struct key *VAR_10,
          struct assoc_array_edit **VAR_11)
{
 int VAR_12, VAR_13;

 FUNC_2(VAR_7);
 FUNC_2(VAR_9);

 VAR_13 = 0;
 VAR_12 = -VAR_0;

 FUNC_6(&VAR_5);


 if (VAR_7->state == VAR_3) {

  VAR_12 = VAR_7->type->instantiate(VAR_7, VAR_8);

  if (VAR_12 == 0) {

   FUNC_1(&VAR_7->user->nikeys);
   FUNC_5(VAR_7, 0);

   if (FUNC_10(VAR_2, &VAR_7->flags))
    VAR_13 = 1;


   if (VAR_9) {
    if (FUNC_11(VAR_1, &VAR_9->flags))
     FUNC_8(VAR_1, &VAR_7->flags);

    FUNC_0(VAR_7, VAR_11);
   }


   if (VAR_10)
    FUNC_3(VAR_10);

   if (VAR_8->expiry != VAR_4) {
    VAR_7->expiry = VAR_8->expiry;
    FUNC_4(VAR_8->expiry + VAR_6);
   }
  }
 }

 FUNC_7(&VAR_5);


 if (VAR_13)
  FUNC_12(&VAR_7->flags, VAR_2);

 return VAR_12;
}
