
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ut8 ;
typedef int ut64 ;
struct TYPE_7__ {char* name; TYPE_2__* root; scalar_t__ path; } ;
struct TYPE_5__ {char* (* cmdstrf ) (void*,char*,char*,char const*,int const*) ;void* core; } ;
struct TYPE_6__ {TYPE_1__ cob; } ;
typedef TYPE_3__ RFSFile ;


 int FUNC_0 (char*) ;
 char* FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (char*) ;
 char* FUNC_3 (void*,char*,char*,char const*,int const*) ;

__attribute__((used)) static bool FUNC_4(RFSFile *VAR_0, ut64 VAR_1, const ut8 *VAR_2, int VAR_3) {
 const char *VAR_4 = VAR_0->name;
 void *VAR_5 = VAR_0->root->cob.core;
 char *VAR_6 = FUNC_1 (VAR_0->path + FUNC_2 ("/cfg/"));
 char *VAR_7 = VAR_0->root->cob.cmdstrf (VAR_5, "e %s.%s=%s", VAR_6, VAR_4, VAR_2);
 FUNC_0 (VAR_6);
 FUNC_0 (VAR_7);
 return 1;
}
