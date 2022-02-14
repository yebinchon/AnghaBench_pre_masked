
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ connected; } ;
struct TYPE_12__ {char** cargv; int cargc; } ;
struct TYPE_11__ {int flags; int minargs; int maxargs; int (* proc ) (int,char**,TYPE_1__*,TYPE_2__* const) ;} ;
typedef TYPE_1__* CommandPtr ;
typedef TYPE_2__* ArgvInfoPtr ;


 TYPE_1__* FUNC_0 (char*,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_7__ VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (int,char**,TYPE_1__*,TYPE_2__* const) ;

__attribute__((used)) static int
FUNC_4(const ArgvInfoPtr VAR_7)
{
 CommandPtr VAR_8;
 int VAR_9;
 int VAR_10, VAR_11;

 VAR_8 = FUNC_0(VAR_7->cargv[0], 0);
 if (VAR_8 == VAR_1) {
  (void) FUNC_2("%s: ambiguous command name.\n", VAR_7->cargv[0]);
  return (-1);
 } else if (VAR_8 == VAR_4) {
  (void) FUNC_2("%s: no such command.\n", VAR_7->cargv[0]);
  return (-1);
 }

 VAR_10 = VAR_7->cargc;
 VAR_11 = VAR_10 - 1;
 VAR_9 = VAR_8->flags;

 if (((VAR_9 & VAR_2) != 0) && (VAR_0.connected == 0)) {
  (void) FUNC_2("%s: must be connected to do that.\n", VAR_7->cargv[0]);
 } else if (((VAR_9 & VAR_3) != 0) && (VAR_0.connected != 0)) {
  (void) FUNC_2("%s: must be disconnected to do that.\n", VAR_7->cargv[0]);
 } else if ((VAR_8->minargs != VAR_6) && (VAR_8->minargs > VAR_11)) {
  FUNC_1(VAR_8);
 } else if ((VAR_8->maxargs != VAR_5) && (VAR_8->maxargs < VAR_11)) {
  FUNC_1(VAR_8);
 } else {
  (*VAR_8->proc)(VAR_10, VAR_7->cargv, VAR_8, VAR_7);
 }
 return (0);
}
