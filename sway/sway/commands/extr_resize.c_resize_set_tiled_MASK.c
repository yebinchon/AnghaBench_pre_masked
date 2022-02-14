
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sway_container {scalar_t__ layout; int width; int height; TYPE_1__* workspace; struct sway_container* parent; } ;
struct resize_amount {int amount; scalar_t__ unit; } ;
struct cmd_results {int dummy; } ;
struct TYPE_2__ {int width; int height; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 struct cmd_results* FUNC_0 (int ,int *) ;
 int FUNC_1 (struct sway_container*,int ,int) ;

__attribute__((used)) static struct cmd_results *FUNC_2(struct sway_container *VAR_8,
  struct resize_amount *VAR_9, struct resize_amount *VAR_10) {
 if (VAR_9->amount) {
  if (VAR_9->unit == VAR_6 ||
    VAR_9->unit == VAR_5) {

   struct sway_container *VAR_11 = VAR_8->parent;
   while (VAR_11 && VAR_11->layout != VAR_3) {
    VAR_11 = VAR_11->parent;
   }
   if (VAR_11) {
    VAR_9->amount = VAR_11->width * VAR_9->amount / 100;
   } else {
    VAR_9->amount = VAR_8->workspace->width * VAR_9->amount / 100;
   }
   VAR_9->unit = VAR_7;
  }
  if (VAR_9->unit == VAR_7) {
   FUNC_1(VAR_8, VAR_0,
     VAR_9->amount - VAR_8->width);
  }
 }

 if (VAR_10->amount) {
  if (VAR_10->unit == VAR_6 ||
    VAR_10->unit == VAR_5) {

   struct sway_container *VAR_12 = VAR_8->parent;
   while (VAR_12 && VAR_12->layout != VAR_4) {
    VAR_12 = VAR_12->parent;
   }
   if (VAR_12) {
    VAR_10->amount = VAR_12->height * VAR_10->amount / 100;
   } else {
    VAR_10->amount = VAR_8->workspace->height * VAR_10->amount / 100;
   }
   VAR_10->unit = VAR_7;
  }
  if (VAR_10->unit == VAR_7) {
   FUNC_1(VAR_8, VAR_1,
     VAR_10->amount - VAR_8->height);
  }
 }

 return FUNC_0(VAR_2, ((void*)0));
}
