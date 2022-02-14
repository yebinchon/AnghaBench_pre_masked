
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct phonet_protocol {TYPE_1__* prot; } ;
struct TYPE_2__ {int owner; } ;


 unsigned int VAR_0 ;
 int * VAR_1 ;
 struct phonet_protocol* FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;

__attribute__((used)) static const struct phonet_protocol *FUNC_4(unsigned int VAR_2)
{
 const struct phonet_protocol *VAR_3;

 if (VAR_2 >= VAR_0)
  return ((void*)0);

 FUNC_1();
 VAR_3 = FUNC_0(VAR_1[VAR_2]);
 if (VAR_3 && !FUNC_3(VAR_3->prot->owner))
  VAR_3 = ((void*)0);
 FUNC_2();

 return VAR_3;
}
