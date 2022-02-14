
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {int len; } ;
struct mrp_msg_hdr {int dummy; } ;
struct mrp_applicant {TYPE_1__* app; } ;
typedef int _mh ;
struct TYPE_6__ {TYPE_2__* mh; } ;
struct TYPE_5__ {scalar_t__ attrtype; scalar_t__ attrlen; } ;
struct TYPE_4__ {scalar_t__ maxattr; } ;


 TYPE_3__* FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 (struct sk_buff*,int*) ;
 scalar_t__ FUNC_2 (struct mrp_applicant*,struct sk_buff*,int*) ;
 TYPE_2__* FUNC_3 (struct sk_buff*,int,int,struct mrp_msg_hdr*) ;

__attribute__((used)) static int FUNC_4(struct mrp_applicant *VAR_0, struct sk_buff *VAR_1,
        int *VAR_2)
{
 struct mrp_msg_hdr VAR_3;

 FUNC_0(VAR_1)->mh = FUNC_3(VAR_1, *VAR_2, sizeof(VAR_3), &VAR_3);
 if (!FUNC_0(VAR_1)->mh)
  return -1;
 *VAR_2 += sizeof(VAR_3);

 if (FUNC_0(VAR_1)->mh->attrtype == 0 ||
     FUNC_0(VAR_1)->mh->attrtype > VAR_0->app->maxattr ||
     FUNC_0(VAR_1)->mh->attrlen == 0)
  return -1;

 while (VAR_1->len > *VAR_2) {
  if (FUNC_1(VAR_1, VAR_2) < 0)
   break;
  if (FUNC_2(VAR_0, VAR_1, VAR_2) < 0)
   return -1;
 }
 return 0;
}
