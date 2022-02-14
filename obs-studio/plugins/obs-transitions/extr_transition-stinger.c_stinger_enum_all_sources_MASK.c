
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stinger_info {scalar_t__ media_source; int source; } ;
typedef int (* obs_source_enum_proc_t ) (int ,scalar_t__,void*) ;



__attribute__((used)) static void FUNC_0(void *VAR_0,
         obs_source_enum_proc_t VAR_1,
         void *VAR_2)
{
 struct stinger_info *VAR_3 = VAR_0;
 if (VAR_3->media_source)
  VAR_1(VAR_3->source, VAR_3->media_source, VAR_2);
}
