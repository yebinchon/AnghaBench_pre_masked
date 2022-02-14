
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct link_info {int conf; int dais; int link; } ;
struct device {int dummy; } ;
struct asoc_simple_priv {int dummy; } ;


 int FUNC_0 (struct device*,char*,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct asoc_simple_priv*,struct link_info*,int ,int ) ;
 struct device* FUNC_2 (struct asoc_simple_priv*) ;

__attribute__((used)) static void FUNC_3(struct asoc_simple_priv *VAR_2,
     struct link_info *VAR_3)
{
 struct device *VAR_4 = FUNC_2(VAR_2);
 FUNC_1(VAR_2, VAR_3,
       VAR_1,
       VAR_0);
 FUNC_0(VAR_4, "link %d, dais %d, ccnf %d\n",
  VAR_3->link, VAR_3->dais, VAR_3->conf);
}
