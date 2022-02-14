
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlc_source {int source; int loop; } ;
struct libvlc_event_t {int dummy; } ;


 int FUNC_0 (struct libvlc_event_t const*) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static void FUNC_2(const struct libvlc_event_t *VAR_0, void *VAR_1)
{
 struct vlc_source *VAR_2 = VAR_1;
 if (!VAR_2->loop)
  FUNC_1(VAR_2->source, ((void*)0));

 FUNC_0(VAR_0);
}
