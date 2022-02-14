
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
typedef int njs_vm_t ;
struct TYPE_8__ {int interactive; int init; int accumulative; int backtrace; int * external; int * ops; int module; int sandbox; int quiet; } ;
typedef TYPE_1__ njs_vm_opt_t ;
struct TYPE_9__ {size_t member_0; char* member_1; } ;
typedef TYPE_2__ njs_str_t ;
typedef TYPE_1__ njs_opts_t ;
typedef scalar_t__ njs_int_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (size_t) ;
 int FUNC_2 (char*,int const*,size_t) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (TYPE_1__*,TYPE_1__*,TYPE_2__*) ;
 int FUNC_4 (TYPE_1__*,int) ;

int FUNC_5(const uint8_t* VAR_3, size_t VAR_4) {
  if (VAR_4 == 0) return 0;

  char* VAR_5 = FUNC_1(VAR_4);
  FUNC_2(VAR_5, VAR_3, VAR_4);
  njs_str_t VAR_6 = {VAR_4, VAR_5};

  njs_vm_t *VAR_7;
  njs_int_t VAR_8;
  njs_opts_t VAR_9;
  njs_str_t VAR_10;
  njs_vm_opt_t VAR_11;

  FUNC_4(&VAR_9, sizeof(njs_opts_t));
  VAR_9.interactive = 1;

  FUNC_4(&VAR_11, sizeof(njs_vm_opt_t));

  VAR_11.init = !VAR_9.interactive;
  VAR_11.accumulative = VAR_9.interactive;
  VAR_11.backtrace = 1;
  VAR_11.quiet = VAR_9.quiet;
  VAR_11.sandbox = VAR_9.sandbox;
  VAR_11.module = VAR_9.module;

  VAR_11.ops = &VAR_2;
  VAR_11.external = &VAR_1;

  VAR_8 = FUNC_3(&VAR_9, &VAR_11, &VAR_6);
  FUNC_0(VAR_5);

  if (VAR_8 != VAR_0)
    return 0;

  return 0;
}
