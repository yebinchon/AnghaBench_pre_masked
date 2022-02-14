
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ top; scalar_t__ right; scalar_t__ bottom; scalar_t__ left; } ;
struct sway_workspace {scalar_t__ gaps_inner; TYPE_2__ gaps_outer; } ;
struct TYPE_3__ {scalar_t__ left; scalar_t__ bottom; scalar_t__ right; scalar_t__ top; } ;
struct gaps_data {int amount; int operation; TYPE_1__ outer; scalar_t__ inner; } ;


 int FUNC_0 (scalar_t__*,int ,int ) ;
 int FUNC_1 (struct sway_workspace*) ;
 int FUNC_2 () ;

__attribute__((used)) static void FUNC_3(struct sway_workspace *VAR_0, void *VAR_1) {

 struct gaps_data *VAR_2 = VAR_1;
 if (VAR_2->inner) {
  FUNC_0(&VAR_0->gaps_inner, VAR_2->operation, VAR_2->amount);
 }
 if (VAR_2->outer.top) {
  FUNC_0(&(VAR_0->gaps_outer.top), VAR_2->operation, VAR_2->amount);
 }
 if (VAR_2->outer.right) {
  FUNC_0(&(VAR_0->gaps_outer.right), VAR_2->operation, VAR_2->amount);
 }
 if (VAR_2->outer.bottom) {
  FUNC_0(&(VAR_0->gaps_outer.bottom), VAR_2->operation, VAR_2->amount);
 }
 if (VAR_2->outer.left) {
  FUNC_0(&(VAR_0->gaps_outer.left), VAR_2->operation, VAR_2->amount);
 }


 if (VAR_0->gaps_inner < 0) {
  VAR_0->gaps_inner = 0;
 }
 FUNC_2();
 FUNC_1(VAR_0);
}
