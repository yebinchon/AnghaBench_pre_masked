
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tp_probes {void* probes; } ;


 int VAR_0 ;
 struct tp_probes* FUNC_0 (int ,int ) ;
 struct tp_probes* VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static inline void *FUNC_2(int VAR_3)
{
 struct tp_probes *VAR_4 = FUNC_0(FUNC_1(VAR_4, VAR_2, VAR_3),
           VAR_0);
 return VAR_4 == ((void*)0) ? ((void*)0) : VAR_4->probes;
}
