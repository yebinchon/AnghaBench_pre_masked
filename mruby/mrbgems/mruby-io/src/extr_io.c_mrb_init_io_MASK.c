
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct RClass {int dummy; } ;
struct TYPE_8__ {int object_class; } ;
typedef TYPE_1__ mrb_state ;


 int FUNC_0 (int,int) ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct RClass*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct RClass* FUNC_4 (TYPE_1__*,char*,int ) ;
 int FUNC_5 (TYPE_1__*,struct RClass*,char*,int ,int ) ;
 int FUNC_6 (TYPE_1__*,struct RClass*,char*,int ,int ) ;
 int FUNC_7 (TYPE_1__*,struct RClass*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_8 (TYPE_1__*,char*) ;

void
FUNC_9(mrb_state *VAR_24)
{
  struct RClass *VAR_25;

  VAR_25 = FUNC_4(VAR_24, "IO", VAR_24->object_class);
  FUNC_3(VAR_25, VAR_0);

  FUNC_7(VAR_24, VAR_25, FUNC_8(VAR_24, "Enumerable"));
  FUNC_5(VAR_24, VAR_25, "_popen", VAR_14, FUNC_0(1,2));
  FUNC_5(VAR_24, VAR_25, "_sysclose", VAR_16, FUNC_2(1));
  FUNC_5(VAR_24, VAR_25, "for_fd", VAR_12, FUNC_0(1,2));
  FUNC_5(VAR_24, VAR_25, "select", VAR_15, FUNC_0(1,3));
  FUNC_5(VAR_24, VAR_25, "sysopen", VAR_17, FUNC_0(1,2));

  FUNC_5(VAR_24, VAR_25, "_pipe", VAR_13, FUNC_1());


  FUNC_6(VAR_24, VAR_25, "initialize", VAR_8, FUNC_0(1,2));
  FUNC_6(VAR_24, VAR_25, "initialize_copy", VAR_9, FUNC_2(1));
  FUNC_6(VAR_24, VAR_25, "_check_readable", VAR_2, FUNC_1());
  FUNC_6(VAR_24, VAR_25, "isatty", VAR_10, FUNC_1());
  FUNC_6(VAR_24, VAR_25, "sync", VAR_20, FUNC_1());
  FUNC_6(VAR_24, VAR_25, "sync=", VAR_19, FUNC_2(1));
  FUNC_6(VAR_24, VAR_25, "sysread", VAR_21, FUNC_0(1,1));
  FUNC_6(VAR_24, VAR_25, "sysseek", VAR_22, FUNC_0(1,1));
  FUNC_6(VAR_24, VAR_25, "syswrite", VAR_23, FUNC_2(1));
  FUNC_6(VAR_24, VAR_25, "close", VAR_3, FUNC_1());
  FUNC_6(VAR_24, VAR_25, "close_write", VAR_5, FUNC_1());
  FUNC_6(VAR_24, VAR_25, "close_on_exec=", VAR_18, FUNC_2(1));
  FUNC_6(VAR_24, VAR_25, "close_on_exec?", VAR_4, FUNC_1());
  FUNC_6(VAR_24, VAR_25, "closed?", VAR_6, FUNC_1());
  FUNC_6(VAR_24, VAR_25, "pid", VAR_11, FUNC_1());
  FUNC_6(VAR_24, VAR_25, "fileno", VAR_7, FUNC_1());

  FUNC_5(VAR_24, VAR_25, "_bufread", VAR_1, FUNC_2(2));
}
