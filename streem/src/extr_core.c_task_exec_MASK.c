
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct strm_task {scalar_t__ (* func ) (TYPE_1__*,int ) ;int data; } ;
typedef int strm_value ;
struct TYPE_7__ {scalar_t__ mode; } ;
typedef TYPE_1__ strm_stream ;
typedef scalar_t__ (* strm_callback ) (TYPE_1__*,int ) ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct strm_task*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int ) ;

__attribute__((used)) static void
FUNC_4(strm_stream* VAR_4, struct strm_task* VAR_5)
{
  strm_callback VAR_6 = VAR_5->func;
  strm_value VAR_7 = VAR_5->data;

  FUNC_0(VAR_5);
  if (VAR_4->mode == VAR_2) return;
  if ((*VAR_6)(VAR_4, VAR_7) == VAR_0) {
    if (VAR_3) {
      FUNC_1(VAR_4);
    }
  }
  if (VAR_4->mode == VAR_1) {
    FUNC_2(VAR_4);
  }
}
