
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int gpointer ;
typedef int gboolean ;
struct TYPE_2__ {int event; } ;
typedef TYPE_1__ SDEventSource ;
typedef int GSourceFunc ;
typedef int GSource ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static gboolean FUNC_1(GSource *VAR_0, GSourceFunc VAR_1, gpointer VAR_2) {
  return FUNC_0(((SDEventSource *)VAR_0)->event) > 0;
}
