
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ destructor; scalar_t__ decrypted; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static bool FUNC_1(const struct sk_buff *VAR_3)
{







 return (VAR_3->destructor == VAR_1 ||
  (FUNC_0(VAR_0) && VAR_3->destructor == VAR_2));
}
