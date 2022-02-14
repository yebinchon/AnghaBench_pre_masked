
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct nlattr {int dummy; } ;
struct nfc_dev {int dummy; } ;
struct netlink_callback {int nlh; } ;
struct TYPE_3__ {int maxattr; scalar_t__ hdrsize; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct nfc_dev* FUNC_0 (int) ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 struct nlattr** FUNC_1 (TYPE_1__*) ;
 TYPE_1__ VAR_4 ;
 int VAR_5 ;
 struct nfc_dev* FUNC_2 (int ) ;
 int FUNC_3 (struct nlattr*) ;
 int FUNC_4 (int ,scalar_t__,struct nlattr**,int ,int ,int *) ;

__attribute__((used)) static struct nfc_dev *FUNC_5(struct netlink_callback *VAR_6)
{
 struct nlattr **VAR_7 = FUNC_1(&VAR_4);
 struct nfc_dev *VAR_8;
 int VAR_9;
 u32 VAR_10;

 VAR_9 = FUNC_4(VAR_6->nlh,
        VAR_2 + VAR_4.hdrsize,
        VAR_7, VAR_4.maxattr,
        VAR_5, ((void*)0));
 if (VAR_9 < 0)
  return FUNC_0(VAR_9);

 if (!VAR_7[VAR_3])
  return FUNC_0(-VAR_0);

 VAR_10 = FUNC_3(VAR_7[VAR_3]);

 VAR_8 = FUNC_2(VAR_10);
 if (!VAR_8)
  return FUNC_0(-VAR_1);

 return VAR_8;
}
