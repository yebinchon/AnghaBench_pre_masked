
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct mrp_attr {int dummy; } ;
struct mrp_applicant {int dummy; } ;
typedef enum mrp_vecattr_event { ____Placeholder_mrp_vecattr_event } mrp_vecattr_event ;
typedef enum mrp_event { ____Placeholder_mrp_event } mrp_event ;
struct TYPE_4__ {TYPE_1__* mh; int attrvalue; } ;
struct TYPE_3__ {int attrtype; int attrlen; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;






 int FUNC_0 (struct mrp_applicant*,struct mrp_attr*,int) ;
 struct mrp_attr* FUNC_1 (struct mrp_applicant*,int ,int ,int ) ;
 TYPE_2__* FUNC_2 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_3(struct mrp_applicant *VAR_6,
     struct sk_buff *VAR_7,
     enum mrp_vecattr_event VAR_8)
{
 struct mrp_attr *VAR_9;
 enum mrp_event VAR_10;

 VAR_9 = FUNC_1(VAR_6, FUNC_2(VAR_7)->attrvalue,
          FUNC_2(VAR_7)->mh->attrlen,
          FUNC_2(VAR_7)->mh->attrtype);
 if (VAR_9 == ((void*)0))
  return;

 switch (VAR_8) {
 case 128:
  VAR_10 = VAR_5;
  break;
 case 132:
  VAR_10 = VAR_1;
  break;
 case 133:
  VAR_10 = VAR_0;
  break;
 case 131:
  VAR_10 = VAR_2;
  break;
 case 129:
  VAR_10 = VAR_4;
  break;
 case 130:
  VAR_10 = VAR_3;
  break;
 default:
  return;
 }

 FUNC_0(VAR_6, VAR_9, VAR_10);
}
