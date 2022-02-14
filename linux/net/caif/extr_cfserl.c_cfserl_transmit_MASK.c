
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct cfserl {scalar_t__ usestx; } ;
struct cfpkt {int dummy; } ;
struct cflayer {TYPE_1__* dn; } ;
struct TYPE_2__ {int (* transmit ) (TYPE_1__*,struct cfpkt*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct cfpkt*,int *,int) ;
 struct cfserl* FUNC_1 (struct cflayer*) ;
 int FUNC_2 (TYPE_1__*,struct cfpkt*) ;

__attribute__((used)) static int FUNC_3(struct cflayer *VAR_1, struct cfpkt *VAR_2)
{
 struct cfserl *VAR_3 = FUNC_1(VAR_1);
 u8 VAR_4 = VAR_0;
 if (VAR_3->usestx)
  FUNC_0(VAR_2, &VAR_4, 1);
 return VAR_1->dn->transmit(VAR_1->dn, VAR_2);
}
