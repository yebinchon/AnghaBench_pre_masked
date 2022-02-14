
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct strfilter {int dummy; } ;
struct TYPE_2__ {char* event; char* group; } ;
struct probe_cache_entry {char* spev; TYPE_1__ pev; } ;


 int FUNC_0 (char*,int,char*,char*,char*) ;
 int FUNC_1 (struct strfilter*,char*) ;

__attribute__((used)) static bool FUNC_2(struct probe_cache_entry *VAR_0,
           struct strfilter *VAR_1)
{
 char VAR_2[128], *VAR_3 = VAR_0->spev;

 if (VAR_0->pev.event) {
  FUNC_0(VAR_2, 128, "%s:%s", VAR_0->pev.group, VAR_0->pev.event);
  VAR_3 = VAR_2;
 }
 return FUNC_1(VAR_1, VAR_3);
}
