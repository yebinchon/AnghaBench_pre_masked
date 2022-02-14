
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ** data; } ;
struct vlc_source {TYPE_1__ frame; } ;


 size_t VAR_0 ;

__attribute__((used)) static void *FUNC_0(void *VAR_1, void **VAR_2)
{
 struct vlc_source *VAR_3 = VAR_1;
 for (size_t VAR_4 = 0; VAR_4 < VAR_0 && VAR_3->frame.data[VAR_4] != ((void*)0); VAR_4++)
  VAR_2[VAR_4] = VAR_3->frame.data[VAR_4];
 return ((void*)0);
}
