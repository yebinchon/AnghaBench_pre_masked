
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct key_preparsed_payload {int dummy; } ;
struct key {int sem; TYPE_1__* type; } ;
typedef int key_ref_t ;
struct TYPE_2__ {int (* update ) (struct key*,struct key_preparsed_payload*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct key*) ;
 struct key* FUNC_4 (int ) ;
 int FUNC_5 (struct key*,int ) ;
 int FUNC_6 (struct key*,struct key_preparsed_payload*) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static inline key_ref_t FUNC_8(key_ref_t VAR_2,
         struct key_preparsed_payload *VAR_3)
{
 struct key *VAR_4 = FUNC_4(VAR_2);
 int VAR_5;


 VAR_5 = FUNC_2(VAR_2, VAR_1);
 if (VAR_5 < 0)
  goto error;

 VAR_5 = -VAR_0;
 if (!VAR_4->type->update)
  goto error;

 FUNC_1(&VAR_4->sem);

 VAR_5 = VAR_4->type->update(VAR_4, VAR_3);
 if (VAR_5 == 0)

  FUNC_5(VAR_4, 0);

 FUNC_7(&VAR_4->sem);

 if (VAR_5 < 0)
  goto error;
out:
 return VAR_2;

error:
 FUNC_3(VAR_4);
 VAR_2 = FUNC_0(VAR_5);
 goto out;
}
