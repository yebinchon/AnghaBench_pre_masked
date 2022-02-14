
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isight {scalar_t__ audio_base; int unit; int resources; int * context; } ;
typedef scalar_t__ __be32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,scalar_t__,scalar_t__*,int,int ) ;

__attribute__((used)) static void FUNC_4(struct isight *VAR_3)
{
 __be32 VAR_4;

 if (!VAR_3->context)
  return;

 FUNC_1(VAR_3->context);
 FUNC_0(VAR_3->context);
 VAR_3->context = ((void*)0);
 FUNC_2(&VAR_3->resources);
 VAR_4 = 0;
 FUNC_3(VAR_3->unit, VAR_2,
      VAR_3->audio_base + VAR_1,
      &VAR_4, 4, VAR_0);
}
