
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ ut8 ;
typedef int ut32 ;
struct TYPE_5__ {scalar_t__ data; } ;
struct TYPE_4__ {int gport; } ;
typedef TYPE_1__ RIOGprobe ;
typedef TYPE_2__ RIODesc ;
typedef int RIO ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (char const*,char*) ;
 int FUNC_8 (char const*,char*) ;
 int FUNC_9 (char const*) ;
 int FUNC_10 (char const*,int *,int) ;

__attribute__((used)) static char *FUNC_11 (RIO *VAR_0, RIODesc *VAR_1, const char *VAR_2) {
 RIOGprobe *VAR_3;

 if (!VAR_1 || !VAR_1->data) {
  return ((void*)0);
 }
 VAR_3 = (RIOGprobe *)VAR_1->data;

 if (!VAR_2[0] || VAR_2[0] == '?' || !FUNC_8 (VAR_2, "help")) {
  FUNC_6 ("Usage: =!cmd args\n"
   " =!reset code\n"
   " =!debugon\n"
   " =!debugoff\n"
   " =!runcode address\n"
   " =!getdeviceid\n"
   " =!getinformation\n");
  return ((void*)0);
 }

 if (FUNC_7 (VAR_2, "reset") && (FUNC_9 (VAR_2) > 6)) {
  ut32 VAR_4 = (ut32)FUNC_10 (VAR_2 + 6, ((void*)0), 10);

  FUNC_4 (&VAR_3->gport, VAR_4);

  return ((void*)0);
 }

 if (FUNC_7 (VAR_2, "debugon")) {
  FUNC_1 (&VAR_3->gport);

  return ((void*)0);
 }

 if (FUNC_7 (VAR_2, "debugoff")) {
  FUNC_0 (&VAR_3->gport);

  return ((void*)0);
 }

 if (FUNC_7 (VAR_2, "runcode") && (FUNC_9 (VAR_2) > 8)) {
  ut32 VAR_5 = (ut32)FUNC_10 (VAR_2 + 8, ((void*)0), 0);

  FUNC_5 (&VAR_3->gport, VAR_5);

  return ((void*)0);
 }

 if (FUNC_7 (VAR_2, "getdeviceid")) {
  ut8 VAR_6 = 0;

  while (!FUNC_2 (&VAR_3->gport, VAR_6++)) {
  };

  return ((void*)0);
 }

 if (FUNC_7 (VAR_2, "getinformation")) {
  FUNC_3 (&VAR_3->gport);

  return ((void*)0);
 }

 FUNC_6 ("Try: '=!?'\n");

 return ((void*)0);
}
