
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct ima_field_data {int dummy; } ;
struct ima_event_data {TYPE_2__* iint; scalar_t__ violation; } ;
struct TYPE_4__ {TYPE_1__* ima_hash; } ;
struct TYPE_3__ {int algo; int length; int * digest; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ,struct ima_field_data*) ;

int FUNC_1(struct ima_event_data *VAR_1,
       struct ima_field_data *VAR_2)
{
 u8 *VAR_3 = ((void*)0), VAR_4 = VAR_0;
 u32 VAR_5 = 0;

 if (VAR_1->violation)
  goto out;

 VAR_3 = VAR_1->iint->ima_hash->digest;
 VAR_5 = VAR_1->iint->ima_hash->length;

 VAR_4 = VAR_1->iint->ima_hash->algo;
out:
 return FUNC_0(VAR_3, VAR_5,
        VAR_4, VAR_2);
}
