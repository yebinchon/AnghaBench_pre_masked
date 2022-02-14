
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sctp_endpoint {struct crypto_shash** auth_hmacs; } ;
struct crypto_shash {int dummy; } ;
typedef int gfp_t ;
typedef size_t __u16 ;
struct TYPE_2__ {int hmac_name; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct crypto_shash*) ;
 size_t VAR_1 ;
 struct crypto_shash* FUNC_1 (int ,int ,int ) ;
 struct crypto_shash** FUNC_2 (size_t,int,int ) ;
 int FUNC_3 (struct crypto_shash**) ;
 TYPE_1__* VAR_2 ;

int FUNC_4(struct sctp_endpoint *VAR_3, gfp_t VAR_4)
{
 struct crypto_shash *VAR_5 = ((void*)0);
 __u16 VAR_6;


 if (VAR_3->auth_hmacs)
  return 0;


 VAR_3->auth_hmacs = FUNC_2(VAR_1,
     sizeof(struct crypto_shash *),
     VAR_4);
 if (!VAR_3->auth_hmacs)
  return -VAR_0;

 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {






  if (!VAR_2[VAR_6].hmac_name)
   continue;


  if (VAR_3->auth_hmacs[VAR_6])
   continue;


  VAR_5 = FUNC_1(VAR_2[VAR_6].hmac_name, 0, 0);
  if (FUNC_0(VAR_5))
   goto out_err;

  VAR_3->auth_hmacs[VAR_6] = VAR_5;
 }

 return 0;

out_err:

 FUNC_3(VAR_3->auth_hmacs);
 return -VAR_0;
}
