
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stinger_info {int transitioning; scalar_t__ media_source; int source; } ;


 int FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_1(void *VAR_0)
{
 struct stinger_info *VAR_1 = VAR_0;

 if (VAR_1->media_source)
  FUNC_0(VAR_1->source, VAR_1->media_source);

 VAR_1->transitioning = 0;
}
