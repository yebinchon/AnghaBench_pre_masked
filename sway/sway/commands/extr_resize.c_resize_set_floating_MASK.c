
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sway_container {int width; int x; int height; int y; int content_x; int content_y; int content_width; int content_height; TYPE_1__* workspace; } ;
struct resize_amount {int amount; int unit; } ;
struct cmd_results {int dummy; } ;
struct TYPE_2__ {int width; int height; } ;


 int VAR_0 ;
 int VAR_1 ;




 int FUNC_0 (struct sway_container*) ;
 struct cmd_results* FUNC_1 (int ,char*) ;
 int FUNC_2 (struct sway_container*) ;
 int FUNC_3 (int*,int*,int*,int*) ;
 void* FUNC_4 (int,int ) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (int,char*) ;

__attribute__((used)) static struct cmd_results *FUNC_7(struct sway_container *VAR_2,
  struct resize_amount *VAR_3, struct resize_amount *VAR_4) {
 int VAR_5, VAR_6, VAR_7, VAR_8, VAR_9 = 0, VAR_10 = 0;
 FUNC_3(&VAR_5, &VAR_6,
   &VAR_7, &VAR_8);

 if (VAR_3->amount) {
  switch (VAR_3->unit) {
  case 129:
   if (FUNC_2(VAR_2)) {
    return FUNC_1(VAR_0,
      "Cannot resize a hidden scratchpad container by ppt");
   }

   VAR_3->amount = VAR_2->workspace->width * VAR_3->amount / 100;
   VAR_3->unit = 128;

  case 128:
  case 131:
   VAR_3->amount = FUNC_4(VAR_5, FUNC_5(VAR_3->amount, VAR_6));
   VAR_9 = VAR_3->amount - VAR_2->width;
   VAR_2->x -= VAR_9 / 2;
   VAR_2->width = VAR_3->amount;
   break;
  case 130:
   FUNC_6(0, "invalid width unit");
   break;
  }
 }

 if (VAR_4->amount) {
  switch (VAR_4->unit) {
  case 129:
   if (FUNC_2(VAR_2)) {
    return FUNC_1(VAR_0,
      "Cannot resize a hidden scratchpad container by ppt");
   }

   VAR_4->amount = VAR_2->workspace->height * VAR_4->amount / 100;
   VAR_4->unit = 128;

  case 128:
  case 131:
   VAR_4->amount = FUNC_4(VAR_7, FUNC_5(VAR_4->amount, VAR_8));
   VAR_10 = VAR_4->amount - VAR_2->height;
   VAR_2->y -= VAR_10 / 2;
   VAR_2->height = VAR_4->amount;
   break;
  case 130:
   FUNC_6(0, "invalid height unit");
   break;
  }
 }

 VAR_2->content_x -= VAR_9 / 2;
 VAR_2->content_y -= VAR_10 / 2;
 VAR_2->content_width += VAR_9;
 VAR_2->content_height += VAR_10;

 FUNC_0(VAR_2);

 return FUNC_1(VAR_1, ((void*)0));
}
