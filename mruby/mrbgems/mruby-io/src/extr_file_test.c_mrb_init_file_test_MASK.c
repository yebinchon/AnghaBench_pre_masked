
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct RClass {int dummy; } ;
struct TYPE_5__ {int object_class; } ;
typedef TYPE_1__ mrb_state ;


 int FUNC_0 (int) ;
 struct RClass* FUNC_1 (TYPE_1__*,char*,int ) ;
 int FUNC_2 (TYPE_1__*,struct RClass*,char*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

void
FUNC_3(mrb_state *VAR_9)
{
  struct RClass *VAR_10;

  VAR_10 = FUNC_1(VAR_9, "FileTest", VAR_9->object_class);

  FUNC_2(VAR_9, VAR_10, "directory?", VAR_0, FUNC_0(1));
  FUNC_2(VAR_9, VAR_10, "exist?", VAR_1, FUNC_0(1));
  FUNC_2(VAR_9, VAR_10, "exists?", VAR_1, FUNC_0(1));
  FUNC_2(VAR_9, VAR_10, "file?", VAR_2, FUNC_0(1));
  FUNC_2(VAR_9, VAR_10, "pipe?", VAR_3, FUNC_0(1));
  FUNC_2(VAR_9, VAR_10, "size", VAR_4, FUNC_0(1));
  FUNC_2(VAR_9, VAR_10, "size?", VAR_5, FUNC_0(1));
  FUNC_2(VAR_9, VAR_10, "socket?", VAR_6, FUNC_0(1));
  FUNC_2(VAR_9, VAR_10, "symlink?", VAR_7, FUNC_0(1));
  FUNC_2(VAR_9, VAR_10, "zero?", VAR_8, FUNC_0(1));
}
