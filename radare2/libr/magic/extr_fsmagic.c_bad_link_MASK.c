
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int flags; } ;
typedef TYPE_1__ RMagic ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int,char const*,char*) ;
 int FUNC_1 (TYPE_1__*,char const*,char*) ;

__attribute__((used)) static int FUNC_2(RMagic *VAR_2, int VAR_3, char *VAR_4) {





 const char *VAR_5 = "broken symbolic link to `%s'";

 if (VAR_2->flags & VAR_1) {
  FUNC_0 (VAR_2, VAR_3, VAR_5, VAR_4);
  return -1;
 }
 if (FUNC_1 (VAR_2, VAR_5, VAR_4) == -1)
  return -1;
 return 1;
}
