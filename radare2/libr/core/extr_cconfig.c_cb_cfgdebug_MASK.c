
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {int va; scalar_t__ debug; } ;
struct TYPE_10__ {scalar_t__ i_value; } ;
struct TYPE_9__ {TYPE_2__* bin; scalar_t__ dbg; TYPE_1__* file; TYPE_5__* io; int config; } ;
struct TYPE_8__ {int is_debugger; } ;
struct TYPE_7__ {int fd; } ;
typedef TYPE_3__ RCore ;
typedef TYPE_4__ RConfigNode ;


 char const* FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*,char*) ;
 int FUNC_2 (scalar_t__,int ,int ) ;
 int FUNC_3 (scalar_t__,char const*) ;
 int FUNC_4 (TYPE_5__*,int ) ;
 int FUNC_5 (TYPE_5__*,int ) ;
 int FUNC_6 (char const*,char*) ;

__attribute__((used)) static bool FUNC_7(void *VAR_0, void *VAR_1) {
 RCore *VAR_2 = (RCore*) VAR_0;
 RConfigNode *VAR_3 = (RConfigNode*) VAR_1;
 if (!VAR_2) {
  return 0;
 }
 if (VAR_2->io) {
  VAR_2->io->va = !VAR_3->i_value;
  VAR_2->io->debug = VAR_3->i_value;
 }
 if (VAR_2->dbg && VAR_3->i_value) {
  const char *VAR_4 = FUNC_0 (VAR_2->config, "dbg.backend");
  VAR_2->bin->is_debugger = 1;
  FUNC_3 (VAR_2->dbg, VAR_4);
  if (!FUNC_6 (FUNC_0 (VAR_2->config, "cmd.prompt"), "")) {
   FUNC_1 (VAR_2->config, "cmd.prompt", ".dr*");
  }
  if (!FUNC_6 (VAR_4, "bf")) {
   FUNC_1 (VAR_2->config, "asm.arch", "bf");
  }
  if (VAR_2->file) {
   FUNC_2 (VAR_2->dbg, FUNC_4 (VAR_2->io, VAR_2->file->fd),
     FUNC_5 (VAR_2->io, VAR_2->file->fd));
  }
 } else {
  FUNC_3 (VAR_2->dbg, ((void*)0));
  VAR_2->bin->is_debugger = 0;
 }
 return 1;
}
