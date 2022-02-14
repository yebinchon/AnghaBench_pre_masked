
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfit_test {int badrange; } ;
struct nd_cmd_ars_start {int scrub_time; int length; int address; scalar_t__ status; } ;
struct ars_state {int lock; int deadline; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ars_state*,int *,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct nfit_test *VAR_4,
  struct ars_state *VAR_5,
  struct nd_cmd_ars_start *VAR_6, unsigned int VAR_7,
  int *VAR_8)
{
 if (VAR_7 < sizeof(*VAR_6))
  return -VAR_1;

 FUNC_1(&VAR_5->lock);
 if (FUNC_3(VAR_3, VAR_5->deadline)) {
  VAR_6->status = VAR_2;
  *VAR_8 = -VAR_0;
 } else {
  VAR_6->status = 0;
  VAR_6->scrub_time = 1;
  FUNC_0(VAR_5, &VAR_4->badrange, VAR_6->address,
    VAR_6->length);
  *VAR_8 = 0;
 }
 FUNC_2(&VAR_5->lock);

 return 0;
}
