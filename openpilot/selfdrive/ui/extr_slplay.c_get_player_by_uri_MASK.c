
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * uri; } ;
typedef TYPE_1__ uri_player ;


 TYPE_1__* VAR_0 ;
 scalar_t__ FUNC_0 (int *,char const*) ;

uri_player* FUNC_1(const char* VAR_1) {
  for (uri_player *VAR_2 = VAR_0; VAR_2->uri != ((void*)0); VAR_2++) {
    if (FUNC_0(VAR_2->uri, VAR_1) == 0) {
      return VAR_2;
    }
  }

  return ((void*)0);
}
