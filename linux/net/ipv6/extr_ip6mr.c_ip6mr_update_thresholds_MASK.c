
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mr_table {int maxvif; } ;
struct TYPE_3__ {int minvif; int maxvif; unsigned char* ttls; int lastuse; } ;
struct TYPE_4__ {TYPE_1__ res; } ;
struct mr_mfc {TYPE_2__ mfc_un; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct mr_table*,int) ;
 int VAR_1 ;
 int FUNC_1 (unsigned char*,int,int) ;

__attribute__((used)) static void FUNC_2(struct mr_table *VAR_2,
        struct mr_mfc *VAR_3,
        unsigned char *VAR_4)
{
 int VAR_5;

 VAR_3->mfc_un.res.minvif = VAR_0;
 VAR_3->mfc_un.res.maxvif = 0;
 FUNC_1(VAR_3->mfc_un.res.ttls, 255, VAR_0);

 for (VAR_5 = 0; VAR_5 < VAR_2->maxvif; VAR_5++) {
  if (FUNC_0(VAR_2, VAR_5) &&
      VAR_4[VAR_5] && VAR_4[VAR_5] < 255) {
   VAR_3->mfc_un.res.ttls[VAR_5] = VAR_4[VAR_5];
   if (VAR_3->mfc_un.res.minvif > VAR_5)
    VAR_3->mfc_un.res.minvif = VAR_5;
   if (VAR_3->mfc_un.res.maxvif <= VAR_5)
    VAR_3->mfc_un.res.maxvif = VAR_5 + 1;
  }
 }
 VAR_3->mfc_un.res.lastuse = VAR_1;
}
