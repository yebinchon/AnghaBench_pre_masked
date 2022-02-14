
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dev; } ;
struct rtable {TYPE_1__ dst; } ;
struct neighbour {int dummy; } ;
struct clip_vcc {struct atmarp_entry* entry; } ;
struct atmarp_entry {int dummy; } ;
struct atm_vcc {scalar_t__ push; } ;
typedef int __be32 ;


 struct clip_vcc* FUNC_0 (struct atm_vcc*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct rtable*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct rtable*) ;
 struct neighbour* FUNC_3 (int *,int *,int ,int) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 struct rtable* FUNC_4 (int *,int ,int ,int,int ) ;
 int FUNC_5 (struct rtable*) ;
 int FUNC_6 (struct clip_vcc*,struct atmarp_entry*) ;
 int VAR_8 ;
 int FUNC_7 (struct neighbour*) ;
 int FUNC_8 (struct neighbour*,int ,int ,int,int ) ;
 struct atmarp_entry* FUNC_9 (struct neighbour*) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (struct clip_vcc*) ;

__attribute__((used)) static int FUNC_14(struct atm_vcc *VAR_9, __be32 VAR_10)
{
 struct neighbour *VAR_11;
 struct atmarp_entry *VAR_12;
 int VAR_13;
 struct clip_vcc *VAR_14;
 struct rtable *VAR_15;

 if (VAR_9->push != VAR_6) {
  FUNC_12("non-CLIP VCC\n");
  return -VAR_0;
 }
 VAR_14 = FUNC_0(VAR_9);
 if (!VAR_10) {
  if (!VAR_14->entry) {
   FUNC_11("hiding hidden ATMARP entry\n");
   return 0;
  }
  FUNC_10("remove\n");
  FUNC_13(VAR_14);
  return 0;
 }
 VAR_15 = FUNC_4(&VAR_7, VAR_10, 0, 1, 0);
 if (FUNC_1(VAR_15))
  return FUNC_2(VAR_15);
 VAR_11 = FUNC_3(&VAR_5, &VAR_10, VAR_15->dst.dev, 1);
 FUNC_5(VAR_15);
 if (!VAR_11)
  return -VAR_1;
 VAR_12 = FUNC_9(VAR_11);
 if (VAR_12 != VAR_14->entry) {
  if (!VAR_14->entry)
   FUNC_10("add\n");
  else {
   FUNC_10("update\n");
   FUNC_13(VAR_14);
  }
  FUNC_6(VAR_14, VAR_12);
 }
 VAR_13 = FUNC_8(VAR_11, VAR_8, VAR_4,
        VAR_3 | VAR_2, 0);
 FUNC_7(VAR_11);
 return VAR_13;
}
