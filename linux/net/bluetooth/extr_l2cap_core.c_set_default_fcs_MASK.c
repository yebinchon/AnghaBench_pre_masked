
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct l2cap_chan {scalar_t__ mode; int fcs; int conf_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,int *) ;

__attribute__((used)) static inline void FUNC_1(struct l2cap_chan *VAR_5)
{



 if (VAR_5->mode != VAR_3 && VAR_5->mode != VAR_4)
  VAR_5->fcs = VAR_2;
 else if (!FUNC_0(VAR_0, &VAR_5->conf_state))
  VAR_5->fcs = VAR_1;
}
