
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ut8 ;
typedef int ut64 ;
struct TYPE_7__ {TYPE_2__* root; } ;
struct TYPE_5__ {char* (* cmdstrf ) (void*,char*,int const*) ;void* core; } ;
struct TYPE_6__ {TYPE_1__ cob; } ;
typedef TYPE_3__ RFSFile ;


 int FUNC_0 (char*) ;
 char* FUNC_1 (void*,char*,int const*) ;

__attribute__((used)) static bool FUNC_2(RFSFile *VAR_0, ut64 VAR_1, const ut8 *VAR_2, int VAR_3) {
 void *VAR_4 = VAR_0->root->cob.core;
 char *VAR_5 = VAR_0->root->cob.cmdstrf (VAR_4, "s %s", VAR_2);
 FUNC_0 (VAR_5);
 return 1;
}
