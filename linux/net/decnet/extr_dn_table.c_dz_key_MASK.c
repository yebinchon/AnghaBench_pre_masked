
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct dn_zone {int dummy; } ;
struct TYPE_3__ {int datum; } ;
typedef TYPE_1__ dn_fib_key_t ;
typedef int __le16 ;


 int FUNC_0 (struct dn_zone*) ;

__attribute__((used)) static inline dn_fib_key_t FUNC_1(__le16 VAR_0, struct dn_zone *VAR_1)
{
 dn_fib_key_t VAR_2;
 VAR_2.datum = VAR_0 & FUNC_0(VAR_1);
 return VAR_2;
}
