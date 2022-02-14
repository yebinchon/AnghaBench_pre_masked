
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isight {scalar_t__ audio_base; int unit; } ;
typedef int __be32 ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,scalar_t__,int *,int,int ) ;

__attribute__((used)) static int FUNC_1(struct isight *VAR_1, int VAR_2, __be32 VAR_3)
{
 return FUNC_0(VAR_1->unit, VAR_0,
      VAR_1->audio_base + VAR_2, &VAR_3, 4, 0);
}
