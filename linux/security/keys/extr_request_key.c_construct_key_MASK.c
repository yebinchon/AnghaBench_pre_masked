
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct key {int flags; TYPE_1__* type; int serial; } ;
typedef int (* request_key_actor_t ) (struct key*,void*) ;
struct TYPE_2__ {int (* request_key ) (struct key*,void*) ;} ;


 scalar_t__ FUNC_0 (struct key*) ;
 int VAR_0 ;
 int FUNC_1 (struct key*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct key*,void*) ;
 int FUNC_4 (char*,int ,void const*,size_t,void*) ;
 int FUNC_5 (struct key*) ;
 int FUNC_6 (char*,int) ;
 struct key* FUNC_7 (struct key*,char*,void const*,size_t,struct key*) ;
 int FUNC_8 (int ,int *) ;

__attribute__((used)) static int FUNC_9(struct key *VAR_1, const void *VAR_2,
    size_t VAR_3, void *VAR_4,
    struct key *VAR_5)
{
 request_key_actor_t VAR_6;
 struct key *VAR_7;
 int VAR_8;

 FUNC_4("%d,%p,%zu,%p", VAR_1->serial, VAR_2, VAR_3, VAR_4);


 VAR_7 = FUNC_7(VAR_1, "create", VAR_2, VAR_3,
           VAR_5);
 if (FUNC_0(VAR_7))
  return FUNC_1(VAR_7);


 VAR_6 = FUNC_3;
 if (VAR_1->type->request_key)
  VAR_6 = VAR_1->type->request_key;

 VAR_8 = VAR_6(VAR_7, VAR_4);



 FUNC_2(VAR_8 < 0 &&
  !FUNC_8(VAR_0, &VAR_7->flags));

 FUNC_5(VAR_7);
 FUNC_6(" = %d", VAR_8);
 return VAR_8;
}
