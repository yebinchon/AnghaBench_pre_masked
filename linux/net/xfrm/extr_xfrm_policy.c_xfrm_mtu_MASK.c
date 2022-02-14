
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dst_entry {int dummy; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (struct dst_entry const*,int ) ;
 unsigned int FUNC_1 (int ) ;
 int FUNC_2 (struct dst_entry const*) ;

__attribute__((used)) static unsigned int FUNC_3(const struct dst_entry *VAR_1)
{
 unsigned int VAR_2 = FUNC_0(VAR_1, VAR_0);

 return VAR_2 ? : FUNC_1(FUNC_2(VAR_1));
}
