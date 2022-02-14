
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ visible; char* varname; int (* proc ) (int,char const* const,int *) ;} ;
typedef int (* PrefProc ) (int,char const* const,int *) ;


 scalar_t__ FUNC_0 (char const* const,char*) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (char*,char const* const) ;
 int FUNC_3 (int,char const* const,int *) ;

void
FUNC_4(const char *const VAR_5, const char *const VAR_6)
{
 int VAR_7;

 if ((VAR_5 == ((void*)0)) || (FUNC_0(VAR_5, "all"))) {

  for (VAR_7=0; VAR_7<VAR_0; VAR_7++) {
   if (VAR_1[VAR_7].visible == VAR_4)
    FUNC_1(VAR_7);
  }
 } else if (VAR_6 == ((void*)0)) {

  for (VAR_7=0; VAR_7<VAR_0; VAR_7++) {
   if (FUNC_0(VAR_5, VAR_1[VAR_7].varname)) {
    if (VAR_1[VAR_7].visible == VAR_3) {
     (void) FUNC_2("The \"%s\" option is obselete or not implemented.\n", VAR_5);
    } else {
     FUNC_1(VAR_7);
    }
    break;
   }
  }
  if (VAR_7 >= VAR_0) {
   (void) FUNC_2("Unknown option \"%s\" -- try \"show all\" to list available options.\n", VAR_5);
  }
 } else {

  for (VAR_7=0; VAR_7<VAR_0; VAR_7++) {
   if (FUNC_0(VAR_5, VAR_1[VAR_7].varname)) {
    if (VAR_1[VAR_7].visible == VAR_3) {
     (void) FUNC_2("The \"%s\" option is obselete or not implemented.\n", VAR_5);
    } else if (VAR_1[VAR_7].proc != (PrefProc) 0) {
     (*VAR_1[VAR_7].proc)(VAR_7, VAR_6, ((void*)0));
     VAR_2++;
    }
    break;
   }
  }
  if (VAR_7 >= VAR_0) {
   (void) FUNC_2("Unknown option \"%s\" -- try \"show all\" to list available options.\n", VAR_5);
  }
 }
}
