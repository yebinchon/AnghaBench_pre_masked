
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long long uint64_t ;
struct TYPE_2__ {scalar_t__ timestamp; } ;
struct vlc_source {TYPE_1__ frame; int source; } ;


 int FUNC_0 (void*) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int ,TYPE_1__*) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_3(void *VAR_1, void *VAR_2)
{
 struct vlc_source *VAR_3 = VAR_1;
 VAR_3->frame.timestamp = (uint64_t)FUNC_1() * 1000ULL - VAR_0;
 FUNC_2(VAR_3->source, &VAR_3->frame);

 FUNC_0(VAR_2);
}
