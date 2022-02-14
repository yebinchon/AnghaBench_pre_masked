
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ (* f ) (int ,int*,int,int ) ;int (* l ) (struct zip_source*,int ,int*,int,int ) ;} ;
struct zip_source {int error_source; int ud; struct zip_source* src; TYPE_1__ cb; } ;
typedef int e ;


 int VAR_0 ;
 int VAR_1 ;




 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int*,int,int ) ;
 int FUNC_1 (struct zip_source*,int ,int*,int,int ) ;

void
FUNC_2(struct zip_source *VAR_3, int *VAR_4, int *VAR_5)
{
    int VAR_6[2];

    if (VAR_3->src == ((void*)0)) {
        if (VAR_3->cb.f(VAR_3->ud, VAR_6, sizeof(VAR_6), VAR_2) < 0) {
            VAR_6[0] = VAR_0;
            VAR_6[1] = 0;
        }
    }
    else {
 switch (VAR_3->error_source) {
 case 129:
     VAR_6[0] = VAR_6[1] = 0;
     break;

 case 131:
     VAR_6[0] = VAR_1;
     VAR_6[1] = 0;
     break;

 case 130:
     FUNC_2(VAR_3->src, VAR_4, VAR_5);
     return;

 case 128:
     if (VAR_3->cb.l(VAR_3->src, VAR_3->ud, VAR_6, sizeof(VAR_6), VAR_2) < 0) {
  VAR_6[0] = VAR_0;
  VAR_6[1] = 0;
     }
     break;

 default:
     VAR_6[0] = VAR_0;
     VAR_6[1] = 0;
     break;
 }
    }

    if (VAR_4)
 *VAR_4 = VAR_6[0];
    if (VAR_5)
 *VAR_5 = VAR_6[1];
}
