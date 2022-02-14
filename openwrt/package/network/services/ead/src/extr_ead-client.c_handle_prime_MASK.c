
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct ead_msg_salt {int len; int prime; int ext_salt; int salt; } ;
struct TYPE_7__ {int len; scalar_t__* data; } ;
struct TYPE_6__ {int generator; int modulus; } ;


 scalar_t__ VAR_0 ;
 struct ead_msg_salt* FUNC_0 (int ,TYPE_3__) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (scalar_t__*,int ,int) ;
 int VAR_3 ;
 scalar_t__* VAR_4 ;
 TYPE_3__ VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int ,int *,int *,TYPE_3__*) ;
 TYPE_1__* FUNC_4 (int ) ;
 int VAR_7 ;
 TYPE_1__* VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static bool
FUNC_5(void)
{
 struct ead_msg_salt *VAR_10 = FUNC_0(VAR_3, VAR_5);

 VAR_5.len = VAR_10->len;
 FUNC_2(VAR_5.data, VAR_10->salt, VAR_5.len);

 if (VAR_2 == VAR_0) {
  FUNC_2(VAR_4, VAR_10->ext_salt, VAR_1);
  VAR_4[VAR_1 - 1] = 0;
 }

 VAR_8 = FUNC_4(VAR_10->prime);
 VAR_7 = FUNC_3(VAR_9, &VAR_8->modulus, &VAR_8->generator, &VAR_5);
 if (!VAR_7) {
  FUNC_1(VAR_6, "Client open failed\n");
  return 0;
 }

 return 1;
}
