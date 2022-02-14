
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int ut32 ;
struct TYPE_11__ {TYPE_1__* name; TYPE_1__* path; } ;
struct TYPE_10__ {char const* dir; } ;
struct TYPE_9__ {struct TYPE_9__* name; TYPE_6__* sdb; int hash; } ;
typedef TYPE_1__ SdbNs ;
typedef TYPE_2__ Sdb ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int) ;
 int FUNC_2 (char*,char const*,int) ;
 TYPE_6__* FUNC_3 () ;
 TYPE_1__* FUNC_4 (char const*) ;
 int FUNC_5 (char const*) ;

__attribute__((used)) static SdbNs *FUNC_6 (Sdb *VAR_1, const char *VAR_2, ut32 VAR_3) {
 char VAR_4[VAR_0];
 SdbNs *VAR_5;
 if (VAR_1->dir && *VAR_1->dir && VAR_2 && *VAR_2) {
  int VAR_6 = FUNC_5 (VAR_1->dir);
  int VAR_7 = FUNC_5 (VAR_2);
  if ((VAR_6+VAR_7+3)>VAR_0) {
   return ((void*)0);
  }
  FUNC_2 (VAR_4, VAR_1->dir, VAR_6);
  FUNC_2 (VAR_4 + VAR_6, ".", 1);
  FUNC_2 (VAR_4 + VAR_6 + 1, VAR_2, VAR_7 + 1);
 } else {
  VAR_4[0] = 0;
 }
 VAR_5 = FUNC_1 (sizeof (SdbNs));
 if (!VAR_5) {
  return ((void*)0);
 }
 VAR_5->hash = VAR_3;
 VAR_5->name = VAR_2? FUNC_4 (VAR_2): ((void*)0);

 VAR_5->sdb = FUNC_3 ();


 if (VAR_5->sdb) {
  FUNC_0 (VAR_5->sdb->path);
  VAR_5->sdb->path = ((void*)0);
  if (*VAR_4) {
   VAR_5->sdb->path = FUNC_4 (VAR_4);
  }
  FUNC_0 (VAR_5->sdb->name);
  if (VAR_2 && *VAR_2) {
   VAR_5->sdb->name = FUNC_4 (VAR_2);
  }
 } else {
  FUNC_0 (VAR_5->name);
  FUNC_0 (VAR_5);
  VAR_5 = ((void*)0);
 }
 return VAR_5;
}
